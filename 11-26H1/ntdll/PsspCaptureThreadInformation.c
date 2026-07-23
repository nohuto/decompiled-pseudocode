/*
 * XREFs of PsspCaptureThreadInformation @ 0x1800B0C00
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800B2290 (PssNtCaptureSnapshot.c)
 * Callees:
 *     PsspDumpThread @ 0x1800B1008 (PsspDumpThread.c)
 *     RtlGetExtendedContextLength @ 0x1800B1520 (RtlGetExtendedContextLength.c)
 *     PsspFreeLinkedHandleList @ 0x1800B2168 (PsspFreeLinkedHandleList.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     ZwQueryInformationThread @ 0x18015F2E0 (ZwQueryInformationThread.c)
 *     ZwMapViewOfSection @ 0x18015F340 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18015F780 (NtCreateSection.c)
 *     ZwGetNextThread @ 0x180160E50 (ZwGetNextThread.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspCaptureThreadInformation(__int64 a1, void *a2, unsigned int a3, ULONG a4)
{
  HANDLE v4; // r14
  PVOID *v7; // rbx
  _WORD *v8; // rdi
  unsigned int v9; // r15d
  int v10; // r12d
  ULONG v11; // ecx
  NTSTATUS NextThread; // eax
  NTSTATUS v13; // esi
  ULONG v14; // r14d
  unsigned __int64 v15; // rcx
  NTSTATUS v16; // edi
  PVOID *v17; // rsi
  unsigned int i; // r15d
  int v19; // eax
  ULONG_PTR v20; // rax
  NTSTATUS ExtendedContextLength; // eax
  int Flags; // [rsp+20h] [rbp-E0h]
  ULONG ContextLength; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-A8h] BYREF
  ULONG ContextFlags; // [rsp+60h] [rbp-A0h]
  int v27; // [rsp+64h] [rbp-9Ch]
  PVOID v28; // [rsp+68h] [rbp-98h] BYREF
  HANDLE SectionHandle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE ThreadHandle; // [rsp+78h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp-80h] BYREF
  ULONG ReturnLength; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v33[12]; // [rsp+8Ch] [rbp-74h] BYREF
  int v34[6]; // [rsp+98h] [rbp-68h] BYREF
  HANDLE ProcessHandle; // [rsp+B0h] [rbp-50h]
  _WORD ThreadInformation[264]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0LL;
  v27 = a3;
  ProcessHandle = a2;
  v28 = 0LL;
  SectionHandle = 0LL;
  *(_DWORD *)&v33[8] = 0;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  memset(v34, 0, sizeof(v34));
  ThreadHandle = 0LL;
  ContextFlags = a4;
  memset_thunk_772440563353939046(ThreadInformation, 0, 0x210uLL);
  ReturnLength = 0;
  v7 = 0LL;
  *(_QWORD *)v33 = a3 & 0x100;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = (a3 >> 7) & 8 | (*(_DWORD *)v33 != 0 ? 72 : 64);
  ContextLength = v11;
  while ( 1 )
  {
    NextThread = ZwGetNextThread(ProcessHandle, v4, v11, 0, 0, &ThreadHandle);
    v4 = ThreadHandle;
    v13 = NextThread;
    if ( NextThread == -2147483622 )
    {
      if ( v9 )
      {
        v14 = 0;
        ContextLength = 0;
        if ( *(_DWORD *)v33 )
        {
          if ( (v27 & 0x200) == 0
            || (ExtendedContextLength = RtlGetExtendedContextLength(ContextFlags, &ContextLength),
                v14 = ContextLength,
                ExtendedContextLength < 0) )
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
        v16 = NtCreateSection(
                &SectionHandle,
                0xF0007u,
                (POBJECT_ATTRIBUTES)&stru_18017A390,
                (PLARGE_INTEGER)&v33[4],
                4u,
                0x8000000u,
                0LL);
        if ( v16 >= 0 )
        {
          ViewSize = 0LL;
          v16 = ZwMapViewOfSection(
                  SectionHandle,
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &BaseAddress,
                  0LL,
                  0LL,
                  0LL,
                  &ViewSize,
                  ViewShare,
                  0,
                  4u);
          if ( v16 >= 0 )
          {
            *(_QWORD *)v34 = BaseAddress;
            *(_QWORD *)&v34[3] = 0LL;
            v17 = v7;
            v34[2] = ViewSize;
            while ( v17 )
            {
              for ( i = 0; i < *((unsigned __int16 *)v17 + 5); ++i )
              {
                ThreadHandle = (HANDLE)*((unsigned int *)v17 + i + 3);
                v19 = PsspDumpThread((int)v34, v27, ContextFlags, v14, Flags, ThreadHandle);
                v16 = v19;
                if ( v19 == -1073741789 )
                  break;
                if ( v19 < 0 )
                {
                  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
                  goto LABEL_34;
                }
              }
              if ( v16 < 0 )
                break;
              v17 = (PVOID *)*v17;
            }
            NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
            PsspFreeLinkedHandleList(v7);
            *(_DWORD *)(a1 + 992) = v34[4];
            *(_QWORD *)(a1 + 1000) = (unsigned int)v34[3];
            *(_QWORD *)(a1 + 1008) = SectionHandle;
            *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
            return 0LL;
          }
LABEL_34:
          NtClose(SectionHandle);
        }
        PsspFreeLinkedHandleList(v7);
        return (unsigned int)v16;
      }
      return 0LL;
    }
    if ( NextThread < 0 )
      goto LABEL_38;
    if ( ZwQueryInformationThread(ThreadHandle, ThreadNameInformation, ThreadInformation, 0x210u, &ReturnLength) >= 0 )
      v10 += (ThreadInformation[0] + 15) & 0xFFFFFFF0;
    if ( !v8 || v8[5] >= v8[4] )
      break;
LABEL_8:
    *(_DWORD *)&v8[2 * (unsigned __int16)v8[5]++ + 6] = (_DWORD)ThreadHandle;
    v11 = ContextLength;
    ++v9;
  }
  v28 = 0LL;
  ViewSize = 1LL;
  v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v28, 0LL, &ViewSize, 0x1000u, 4u);
  if ( v13 >= 0 )
  {
    if ( v7 )
    {
      *(_QWORD *)v8 = v28;
      v8 = v28;
    }
    else
    {
      v8 = v28;
      v7 = (PVOID *)v28;
    }
    v20 = ViewSize - 16;
    v8[5] = 0;
    v8[4] = v20 >> 2;
    goto LABEL_8;
  }
LABEL_38:
  PsspFreeLinkedHandleList(v7);
  return (unsigned int)v13;
}
