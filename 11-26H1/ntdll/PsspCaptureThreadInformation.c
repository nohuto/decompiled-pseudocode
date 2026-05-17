/*
 * XREFs of PsspCaptureThreadInformation @ 0x1800B36E0
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800B4D70 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PsspDumpThread @ 0x1800B3AE8 (PsspDumpThread.c)
 *     RtlGetExtendedContextLength @ 0x1800B4000 (RtlGetExtendedContextLength.c)
 *     PsspFreeLinkedHandleList @ 0x1800B4C48 (PsspFreeLinkedHandleList.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     ZwQueryInformationThread @ 0x18015F3E0 (ZwQueryInformationThread.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18015F880 (NtCreateSection.c)
 *     ZwGetNextThread @ 0x180160F50 (ZwGetNextThread.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspCaptureThreadInformation(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r14
  __int64 **v7; // rbx
  __int64 *v8; // rdi
  unsigned int v9; // r15d
  int v10; // r12d
  unsigned int v11; // ecx
  int NextThread; // eax
  int v13; // esi
  int v14; // r14d
  unsigned __int64 v15; // rcx
  int v16; // edi
  __int64 **v17; // rsi
  unsigned int i; // r15d
  int v19; // eax
  unsigned __int64 v20; // rax
  int ExtendedContextLength; // eax
  int v23; // [rsp+20h] [rbp-E0h]
  unsigned int v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v26; // [rsp+60h] [rbp-A0h]
  unsigned int v27; // [rsp+64h] [rbp-9Ch]
  __int64 *v28; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h] BYREF
  int v32; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v33[12]; // [rsp+8Ch] [rbp-74h] BYREF
  _BYTE v34[24]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-50h]
  _WORD v36[264]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0LL;
  v27 = a3;
  v35 = a2;
  v28 = 0LL;
  Handle = 0LL;
  *(_DWORD *)&v33[8] = 0;
  v31 = 0LL;
  v25 = 0LL;
  memset(v34, 0, sizeof(v34));
  v30 = 0LL;
  v26 = a4;
  memset_thunk_772440563353939046(v36, 0, 0x210uLL);
  v32 = 0;
  v7 = 0LL;
  *(_QWORD *)v33 = a3 & 0x100;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = (a3 >> 7) & 8 | (*(_DWORD *)v33 != 0 ? 72 : 64);
  v24 = v11;
  while ( 1 )
  {
    NextThread = ZwGetNextThread(v35, v4, v11, 0LL, 0, &v30);
    v4 = v30;
    v13 = NextThread;
    if ( NextThread == -2147483622 )
    {
      if ( v9 )
      {
        v14 = 0;
        v24 = 0;
        if ( *(_DWORD *)v33 )
        {
          if ( (v27 & 0x200) == 0
            || (ExtendedContextLength = RtlGetExtendedContextLength(v26, &v24), v14 = v24, ExtendedContextLength < 0) )
          {
            v14 = 1232;
          }
        }
        *(_DWORD *)(a1 + 1024) = v14;
        v15 = v9 * (unsigned __int64)(((v14 + 15) & 0xFFFFFFF0) + 128);
        if ( v15 > 0xFFFFFFFF )
        {
          PsspFreeLinkedHandleList(v7);
          return 3221225621LL;
        }
        *(_QWORD *)&v33[4] = (unsigned int)(v10 + v15);
        v16 = NtCreateSection(&Handle, 983047LL, L"0", &v33[4], 4, 0x8000000, 0LL);
        if ( v16 >= 0 )
        {
          v25 = 0LL;
          v16 = ZwMapViewOfSection(Handle, -1LL, &v31, 0LL, 0LL, 0LL, &v25, 1, 0, 4);
          if ( v16 >= 0 )
          {
            *(_QWORD *)v34 = v31;
            *(_QWORD *)&v34[12] = 0LL;
            v17 = v7;
            *(_DWORD *)&v34[8] = v25;
            while ( v17 )
            {
              for ( i = 0; i < *((unsigned __int16 *)v17 + 5); ++i )
              {
                v30 = *((unsigned int *)v17 + i + 3);
                v19 = PsspDumpThread((unsigned int)v34, v27, v26, v14, v23, v30);
                v16 = v19;
                if ( v19 == -1073741789 )
                  break;
                if ( v19 < 0 )
                {
                  NtUnmapViewOfSection(-1LL, v31);
                  goto LABEL_34;
                }
              }
              if ( v16 < 0 )
                break;
              v17 = (__int64 **)*v17;
            }
            NtUnmapViewOfSection(-1LL, v31);
            PsspFreeLinkedHandleList(v7);
            *(_DWORD *)(a1 + 992) = *(_DWORD *)&v34[16];
            *(_QWORD *)(a1 + 1000) = *(unsigned int *)&v34[12];
            *(_QWORD *)(a1 + 1008) = Handle;
            *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
            return 0LL;
          }
LABEL_34:
          NtClose(Handle);
        }
        PsspFreeLinkedHandleList(v7);
        return (unsigned int)v16;
      }
      return 0LL;
    }
    if ( NextThread < 0 )
      goto LABEL_38;
    if ( (int)ZwQueryInformationThread(v30, 38LL, v36, 528LL, &v32) >= 0 )
      v10 += (v36[0] + 15) & 0xFFFFFFF0;
    if ( !v8 || *((_WORD *)v8 + 5) >= *((_WORD *)v8 + 4) )
      break;
LABEL_8:
    *((_DWORD *)v8 + (unsigned __int16)(*((_WORD *)v8 + 5))++ + 3) = v30;
    v11 = v24;
    ++v9;
  }
  v28 = 0LL;
  v25 = 1LL;
  v13 = ZwAllocateVirtualMemory(-1LL, &v28, 0LL, &v25, 4096, 4);
  if ( v13 >= 0 )
  {
    if ( v7 )
    {
      *v8 = (__int64)v28;
      v8 = v28;
    }
    else
    {
      v8 = v28;
      v7 = (__int64 **)v28;
    }
    v20 = v25 - 16;
    *((_WORD *)v8 + 5) = 0;
    *((_WORD *)v8 + 4) = v20 >> 2;
    goto LABEL_8;
  }
LABEL_38:
  PsspFreeLinkedHandleList(v7);
  return (unsigned int)v13;
}
