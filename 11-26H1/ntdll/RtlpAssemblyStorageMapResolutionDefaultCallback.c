/*
 * XREFs of RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800A2FA0
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800A28EC (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x180032E30 (RtlGetNtSystemRoot.c)
 *     DbgPrintEx @ 0x1800413D0 (DbgPrintEx.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800A48D4 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlDoesFileExists_UEx @ 0x1800A5EEC (RtlDoesFileExists_UEx.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x18015F580 (NtEnumerateKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

int __fastcall RtlpAssemblyStorageMapResolutionDefaultCallback(int a1, __int64 a2, _DWORD *a3)
{
  int v5; // ecx
  int v6; // ecx
  unsigned __int64 v7; // rax
  HANDLE v8; // r12
  int v9; // r15d
  int v10; // r14d
  int v11; // eax
  const wchar_t *NtSystemRoot; // rax
  const wchar_t *v13; // r15
  size_t v14; // r14
  size_t v15; // r15
  wchar_t *Buffer; // rdx
  char *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-E0h]
  __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v23[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+3Ch] [rbp-C4h]
  char *v25; // [rsp+40h] [rbp-C0h]
  _QWORD v26[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v27; // [rsp+68h] [rbp-98h]
  _BYTE v28[12]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v29; // [rsp+8Ch] [rbp-74h]
  char v30; // [rsp+90h] [rbp-70h] BYREF

  v5 = a1 - 1;
  if ( !v5 )
  {
    v26[0] = 48LL;
    v26[3] = 64LL;
    v22 = 0LL;
    v26[1] = 0LL;
    v26[2] = &unk_180171C18;
    v27 = 0LL;
    v11 = NtOpenKey(&v22, 8LL, v26);
    v10 = v11;
    if ( v11 >= 0 || v11 == -1073741772 || v11 == -1073741431 )
    {
      LODWORD(v7) = v22;
      *(_QWORD *)(a2 + 16) = v22;
      *(_QWORD *)(a2 + 48) = -1LL;
      return v7;
    }
    LODWORD(v7) = DbgPrintEx(51, 0, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_180171C18, v11);
    *(_BYTE *)(a2 + 56) = 1;
    goto LABEL_15;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    LODWORD(v7) = 2;
    if ( v6 == 2 && *(_QWORD *)a2 )
      LODWORD(v7) = NtClose(*(HANDLE *)a2);
  }
  else
  {
    if ( *(_QWORD *)(a2 + 8) )
    {
      if ( *(_QWORD *)(a2 + 8) != 1LL )
      {
        LODWORD(v7) = -1;
        if ( *(_QWORD *)(a2 + 8) <= 0xFFFFFFFFuLL )
        {
          LODWORD(v7) = (unsigned int)memset_thunk_772440563353939046(v28, 0, 0x220uLL);
          v8 = *(HANDLE *)a2;
          v9 = *(_DWORD *)(a2 + 8);
          LODWORD(v22) = 0;
          v24 = 0;
          if ( v8 )
          {
            LODWORD(v7) = ((__int64 (__fastcall *)(HANDLE, _QWORD, _QWORD, _BYTE *, int, __int64 *))NtEnumerateKey)(
                            v8,
                            (unsigned int)(v9 - 2),
                            0LL,
                            v28,
                            544,
                            &v22);
            v10 = v7;
            if ( (v7 & 0x80000000) == 0LL )
            {
              LODWORD(v7) = v29;
              if ( v29 <= 0xFFFE )
              {
                v23[0] = v29;
                v23[1] = v29;
                v25 = &v30;
                LODWORD(v7) = RtlpGetAssemblyStorageMapRootLocation(v8, v23, a2 + 24);
                v10 = v7;
                if ( (v7 & 0x80000000) == 0LL )
                  return v7;
                LODWORD(v21) = v7;
                LODWORD(v7) = DbgPrintEx(
                                51,
                                0,
                                "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                                v23,
                                v21);
                goto LABEL_41;
              }
              *(_BYTE *)(a2 + 16) = 1;
              goto LABEL_31;
            }
            if ( (_DWORD)v7 != -2147483622 )
            {
              LODWORD(v7) = DbgPrintEx(
                              51,
                              0,
                              "SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                              v9 - 2,
                              v7);
LABEL_41:
              *(_BYTE *)(a2 + 16) = 1;
LABEL_15:
              if ( a3 )
                *a3 = v10;
              return v7;
            }
          }
        }
        *(_BYTE *)(a2 + 17) = 1;
        return v7;
      }
      NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot();
      v13 = NtSystemRoot;
      LOWORD(v14) = 0;
      if ( NtSystemRoot )
      {
        v14 = 2 * wcslen(NtSystemRoot);
        if ( v14 >= 0xFFFE )
          LOWORD(v14) = -4;
      }
      LODWORD(v7) = *(unsigned __int16 *)(a2 + 26);
      *(_WORD *)(a2 + 24) = 0;
      if ( (unsigned int)(unsigned __int16)v14 + 16 <= (unsigned int)v7 )
      {
        memmove(*(void **)(a2 + 32), v13, (unsigned __int16)v14);
        v7 = *(_QWORD *)(a2 + 32);
        *(_OWORD *)((unsigned __int16)v14 + v7) = *(_OWORD *)L"\\WinSxS\\";
        *(_WORD *)(a2 + 24) = v14 + 16;
        return v7;
      }
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_43;
    }
    v7 = (unsigned __int64)NtCurrentPeb();
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 8LL) & 0x8000) == 0 )
    {
      *(_WORD *)(a2 + 24) = 0;
      return v7;
    }
    v7 = (unsigned __int64)NtCurrentPeb();
    v15 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 32) + 96LL);
    if ( v15 + 16 > 0xFFFE )
    {
      *(_BYTE *)(a2 + 16) = 1;
LABEL_31:
      if ( a3 )
        *a3 = -1073741562;
      return v7;
    }
    v7 = *(unsigned __int16 *)(a2 + 26);
    if ( v15 + 16 > v7 )
    {
      *(_BYTE *)(a2 + 16) = 1;
LABEL_43:
      if ( a3 )
        *a3 = -1073741789;
      return v7;
    }
    Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
      Buffer = (wchar_t *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
    v17 = *(char **)(a2 + 32);
    memmove(v17, Buffer, v15);
    LOBYTE(v18) = 1;
    *(_OWORD *)&v17[v15] = xmmword_18017ADE8;
    v19 = *(_QWORD *)(a2 + 32);
    *(_WORD *)(a2 + 24) = v15 + 14;
    LODWORD(v7) = RtlDoesFileExists_UEx(v19, v18);
    if ( !(_BYTE)v7 )
      *(_WORD *)(a2 + 24) = 0;
  }
  return v7;
}
