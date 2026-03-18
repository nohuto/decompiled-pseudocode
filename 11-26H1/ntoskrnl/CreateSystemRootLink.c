/*
 * XREFs of CreateSystemRootLink @ 0x140CA9EFC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140433060 (RtlStringCbPrintfW.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     NtCreateSymbolicLinkObject @ 0x140AB5400 (NtCreateSymbolicLinkObject.c)
 *     NtCreateDirectoryObject @ 0x140AF9E30 (NtCreateDirectoryObject.c)
 */

__int64 __fastcall CreateSystemRootLink(_QWORD *a1)
{
  int DirectoryObject; // eax
  int v3; // eax
  __int64 v4; // r9
  const wchar_t *v5; // rbx
  NTSTATUS v6; // eax
  int v7; // eax
  NTSTATUS v8; // eax
  int v9; // eax
  __int64 v10; // r9
  const wchar_t *v11; // rax
  NTSTATUS v12; // eax
  int v13; // eax
  int v14; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  HANDLE v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING *p_DestinationString; // [rsp+48h] [rbp-B8h]
  int v21; // [rsp+50h] [rbp-B0h]
  int v22; // [rsp+54h] [rbp-ACh]
  __int64 v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING v25; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v27; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  wchar_t pszDest[256]; // [rsp+A0h] [rbp-60h] BYREF

  Handle = 0LL;
  v22 = 0;
  v17 = 0LL;
  DestinationString = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\ArcName");
  v19 = 0LL;
  p_DestinationString = &DestinationString;
  v23 = SePublicDefaultUnrestrictedSd;
  v18 = 48LL;
  v21 = 80;
  v24 = 0LL;
  DirectoryObject = NtCreateDirectoryObject((__int64)&Handle, 983055LL, (__int64)&v18);
  if ( DirectoryObject < 0 )
    KeBugCheckEx(0x64u, DirectoryObject, 1uLL, 0LL, 0LL);
  NtClose(Handle);
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  LODWORD(v18) = 48;
  p_DestinationString = &DestinationString;
  v23 = SePublicDefaultUnrestrictedSd;
  v19 = 0LL;
  v21 = 80;
  v24 = 0LL;
  v3 = NtCreateDirectoryObject((__int64)&Handle, 983055LL, (__int64)&v18);
  if ( v3 < 0 )
    KeBugCheckEx(0x64u, v3, 2uLL, 0LL, 0LL);
  NtClose(Handle);
  RtlInitUnicodeString(&v27, L"\\Device\\BootDevice");
  v4 = a1[23];
  p_DestinationString = &v27;
  v5 = L"\\ArcName\\%S";
  v23 = SePublicDefaultUnrestrictedSd;
  LODWORD(v18) = 48;
  v19 = 0LL;
  v21 = 80;
  v24 = 0LL;
  v6 = RtlStringCbPrintfW(pszDest, 0x200uLL, L"\\ArcName\\%S", v4);
  if ( v6 < 0 )
    KeBugCheckEx(0x64u, v6, 3uLL, 0LL, 0LL);
  RtlInitUnicodeString(&v25, pszDest);
  v7 = NtCreateSymbolicLinkObject(&v17, 983041, &v18, (unsigned int *)&v25.Length);
  if ( v7 < 0 )
    KeBugCheckEx(0x64u, v7, 4uLL, 0LL, 0LL);
  NtClose(v17);
  RtlInitUnicodeString(&v27, L"\\SystemRoot");
  LODWORD(v18) = 48;
  p_DestinationString = &v27;
  v23 = SePublicDefaultUnrestrictedSd;
  BugCheckParameter4 = a1[25];
  v19 = 0LL;
  v21 = 80;
  v24 = 0LL;
  v8 = RtlStringCbPrintfW(pszDest, 0x200uLL, L"%s%S", L"\\Device\\BootDevice", BugCheckParameter4);
  if ( v8 < 0 )
    KeBugCheckEx(0x64u, v8, 5uLL, 0LL, 0LL);
  RtlInitUnicodeString(&v25, pszDest);
  v25.Length -= 2;
  v9 = NtCreateSymbolicLinkObject(&v17, 983041, &v18, (unsigned int *)&v25.Length);
  if ( v9 < 0 )
    KeBugCheckEx(0x64u, v9, 6uLL, 0LL, 0LL);
  NtClose(v17);
  RtlInitUnicodeString(&v27, L"\\Device\\OSDataDevice");
  v10 = a1[42];
  p_DestinationString = &v27;
  v23 = SePublicDefaultUnrestrictedSd;
  LODWORD(v18) = 48;
  v19 = 0LL;
  v21 = 80;
  v24 = 0LL;
  if ( !v10 )
  {
    v11 = L"\\ArcName\\%S\\OSData";
    if ( !HIDWORD(WheapPfaLock.CycleTime) )
      v11 = L"\\ArcName\\%S";
    v5 = v11;
  }
  v12 = RtlStringCbPrintfW(pszDest, 0x200uLL, v5);
  if ( v12 < 0 )
    KeBugCheckEx(0x64u, v12, 7uLL, 0LL, 0LL);
  RtlInitUnicodeString(&v25, pszDest);
  v13 = NtCreateSymbolicLinkObject(&v17, 983041, &v18, (unsigned int *)&v25.Length);
  if ( v13 < 0 )
    KeBugCheckEx(0x64u, v13, 8uLL, 0LL, 0LL);
  NtClose(v17);
  RtlInitUnicodeString(&v27, L"\\OSDataRoot");
  LODWORD(v18) = 48;
  p_DestinationString = &v27;
  v23 = SePublicDefaultUnrestrictedSd;
  v19 = 0LL;
  v21 = 80;
  v24 = 0LL;
  RtlInitUnicodeString(&v25, L"\\Device\\OSDataDevice");
  v14 = NtCreateSymbolicLinkObject(&v17, 983041, &v18, (unsigned int *)&v25.Length);
  if ( v14 < 0 )
    KeBugCheckEx(0x64u, v14, 9uLL, 0LL, 0LL);
  NtClose(v17);
  return 0LL;
}
