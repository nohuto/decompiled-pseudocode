/*
 * XREFs of ExpWatchLicenseInfoWork @ 0x140836EA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     wcscat_s @ 0x14053CA60 (wcscat_s.c)
 *     wcscpy_s @ 0x14053CB00 (wcscpy_s.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     NtQueryKey @ 0x1408F4C30 (NtQueryKey.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     NtOpenKeyEx @ 0x140974620 (NtOpenKeyEx.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     NtSetValueKey @ 0x14097DE30 (NtSetValueKey.c)
 *     PsCreateSystemThreadEx @ 0x140A03170 (PsCreateSystemThreadEx.c)
 *     NtEnumerateKey @ 0x140A5B7C0 (NtEnumerateKey.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ExpWatchLicenseInfoWork(__int64 a1)
{
  char v2; // si
  HANDLE v3; // rcx
  int v4; // eax
  int Key; // eax
  unsigned int v6; // r15d
  __int64 Pool2; // r14
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 v11; // cx
  unsigned __int64 v12; // rax
  int v13; // eax
  int i; // edi
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  NTSTATUS result; // eax
  size_t BugCheckParameter4; // [rsp+20h] [rbp-A9h]
  size_t Size; // [rsp+28h] [rbp-A1h]
  size_t Sizea; // [rsp+28h] [rbp-A1h]
  SIZE_T Length; // [rsp+50h] [rbp-79h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-69h] BYREF
  __int64 v25; // [rsp+70h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-51h] BYREF
  HANDLE v27; // [rsp+80h] [rbp-49h] BYREF
  __int128 v28; // [rsp+88h] [rbp-41h] BYREF
  __int128 v29; // [rsp+98h] [rbp-31h]
  __int128 v30; // [rsp+A8h] [rbp-21h]
  UNICODE_STRING v31; // [rsp+B8h] [rbp-11h] BYREF
  __int128 v32; // [rsp+C8h] [rbp-1h]
  __int128 v33; // [rsp+D8h] [rbp+Fh]
  __int128 v34; // [rsp+E8h] [rbp+1Fh]

  v27 = 0LL;
  v32 = 0LL;
  LODWORD(v25) = 0;
  v2 = 0;
  v33 = 0LL;
  Handle = 0LL;
  v34 = 0LL;
  *(_QWORD *)&v30 = 0LL;
  DestinationString = 0LL;
  DWORD2(v30) = 0;
  v28 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  if ( !BYTE4(ExpSysDbgLock.InitialStack) )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 16));
    v3 = *(HANDLE *)a1;
    *(_QWORD *)&v29 = &DestinationString;
    *((_QWORD *)&v28 + 1) = 0LL;
    v30 = 0LL;
    LODWORD(v28) = 48;
    DWORD2(v29) = 576;
    NtClose(v3);
    v4 = NtOpenKeyEx(a1, 131103LL, &v28, 0LL);
    if ( v4 < 0 )
      KeBugCheckEx(0x9Au, 0x12uLL, v4, 0LL, 0LL);
    Key = NtQueryKey(*(HANDLE *)a1, (__int64)&v25);
    if ( Key < 0 )
      KeBugCheckEx(0x9Au, 0x13uLL, Key, 0LL, 0LL);
    v6 = 2 * DWORD2(v33) + 56;
    if ( v6 < DWORD2(v33) || v6 < 2 * (unsigned __int64)(unsigned int)(DWORD2(v33) + 16) )
      v2 = 1;
    Pool2 = ExAllocatePool2(0x40uLL);
    if ( !Pool2 || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, v6, 0LL, 0LL);
    v8 = *(_QWORD *)(a1 + 16);
    v9 = -1LL;
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(v8 + 2 * v10 + 32) );
    v11 = 2 * (WORD4(v33) + v10);
    DestinationString.Length = v11;
    if ( (unsigned int)v11 < DWORD2(v33) )
      goto LABEL_19;
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(v8 + 2 * v12 + 32) );
    if ( v11 < v12 )
      goto LABEL_19;
    do
      ++v9;
    while ( *(_WORD *)(v8 + 2 * v9 + 32) );
    if ( v11 < v9 + (unsigned __int64)DWORD2(v33) )
LABEL_19:
      v2 = 1;
    DestinationString.MaximumLength = v11;
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x40uLL);
    if ( !DestinationString.Buffer || v2 )
      KeBugCheckEx(0x9Au, 0x14uLL, DestinationString.Length, 1uLL, 0LL);
    RtlInitUnicodeString(&v31, L"ConcurrentLimit");
    LODWORD(Size) = 4;
    v13 = NtSetValueKey(*(_QWORD *)a1, (int)&v31, 0, 4, a1 + 8, Size);
    if ( v13 < 0 )
      KeBugCheckEx(0x9Au, 0x15uLL, v13, 0LL, 0LL);
    for ( i = 0; ; ++i )
    {
      LODWORD(BugCheckParameter4) = v6;
      v15 = NtEnumerateKey(*(HANDLE *)a1, BugCheckParameter4, (__int64)&v25);
      if ( v15 == -2147483622 )
        break;
      if ( v15 >= 0 )
      {
        *(_WORD *)(Pool2 + 2 * ((unsigned __int64)*(unsigned int *)(Pool2 + 12) >> 1) + 16) = 0;
        wcscpy_s(
          DestinationString.Buffer,
          (unsigned __int64)DestinationString.MaximumLength >> 1,
          *(const wchar_t **)(a1 + 16));
        wcscat_s(DestinationString.Buffer, (unsigned __int64)DestinationString.MaximumLength >> 1, L"\\");
        wcscat_s(
          DestinationString.Buffer,
          (unsigned __int64)DestinationString.MaximumLength >> 1,
          (const wchar_t *)(Pool2 + 16));
        v16 = -1LL;
        do
          ++v16;
        while ( DestinationString.Buffer[v16] );
        LODWORD(v28) = 48;
        DestinationString.Length = 2 * v16;
        *((_QWORD *)&v28 + 1) = 0LL;
        *(_QWORD *)&v29 = &DestinationString;
        DWORD2(v29) = 576;
        v30 = 0LL;
        v17 = NtOpenKeyEx(&Handle, 131103LL, &v28, 0LL);
        if ( v17 < 0 )
          KeBugCheckEx(0x9Au, 0x16uLL, v17, 0LL, 0LL);
        LODWORD(Sizea) = 4;
        v18 = NtSetValueKey((int)Handle, (int)&v31, 0, 4, a1 + 8, Sizea);
        if ( v18 < 0 )
          KeBugCheckEx(0x9Au, 0x17uLL, v18, 0LL, 0LL);
        NtClose(Handle);
      }
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  }
  LODWORD(Length) = 4;
  result = NtNotifyChangeMultipleKeys(
             *(_QWORD *)a1,
             0,
             0,
             0,
             a1 + 24,
             1LL,
             (void *)(a1 + 56),
             268435461,
             1,
             (volatile void *)(a1 + 72),
             Length,
             1);
  if ( result < 0 )
    KeBugCheckEx(0x9Au, 0x18uLL, result, 0LL, 0LL);
  if ( !BYTE4(ExpSysDbgLock.InitialStack) )
  {
    result = PsCreateSystemThreadEx(&v27, 0x1FFFFFLL, 0LL, 0LL, 0LL, ExpExpirationThread, 3221226090LL, 0LL, 0LL);
    if ( result >= 0 )
      return ZwClose(v27);
  }
  return result;
}
