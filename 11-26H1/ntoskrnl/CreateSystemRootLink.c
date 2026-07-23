/*
 * XREFs of CreateSystemRootLink @ 0x140CAFEFC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     NtCreateSymbolicLinkObject @ 0x140AB67A0 (NtCreateSymbolicLinkObject.c)
 *     NtCreateDirectoryObject @ 0x140AFC2C0 (NtCreateDirectoryObject.c)
 */

__int64 __fastcall CreateSystemRootLink(_QWORD *a1)
{
  NTSTATUS v2; // eax
  NTSTATUS v3; // eax
  __int64 v4; // r9
  const wchar_t *v5; // rbx
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax
  __int64 v10; // r9
  const wchar_t *v11; // rax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  HANDLE LinkHandle; // [rsp+30h] [rbp-D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING LinkTarget; // [rsp+68h] [rbp-98h] BYREF
  HANDLE DirectoryHandle; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v21; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  wchar_t pszDest[256]; // [rsp+A0h] [rbp-60h] BYREF

  DirectoryHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  DestinationString = 0LL;
  v21 = 0LL;
  LinkTarget = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\ArcName");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v2 = NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  if ( v2 < 0 )
    KeBugCheckEx(0x64u, v2, 1uLL, 0LL, 0LL);
  NtClose(DirectoryHandle);
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v3 = NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  if ( v3 < 0 )
    KeBugCheckEx(0x64u, v3, 2uLL, 0LL, 0LL);
  NtClose(DirectoryHandle);
  RtlInitUnicodeString(&v21, L"\\Device\\BootDevice");
  v4 = a1[23];
  ObjectAttributes.ObjectName = &v21;
  v5 = L"\\ArcName\\%S";
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v6 = RtlStringCbPrintfW(pszDest, 0x200uLL, L"\\ArcName\\%S", v4);
  if ( v6 < 0 )
    KeBugCheckEx(0x64u, v6, 3uLL, 0LL, 0LL);
  RtlInitUnicodeString(&LinkTarget, pszDest);
  v7 = NtCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
  if ( v7 < 0 )
    KeBugCheckEx(0x64u, v7, 4uLL, 0LL, 0LL);
  NtClose(LinkHandle);
  RtlInitUnicodeString(&v21, L"\\SystemRoot");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v21;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  BugCheckParameter4 = a1[25];
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v8 = RtlStringCbPrintfW(pszDest, 0x200uLL, L"%s%S", L"\\Device\\BootDevice", BugCheckParameter4);
  if ( v8 < 0 )
    KeBugCheckEx(0x64u, v8, 5uLL, 0LL, 0LL);
  RtlInitUnicodeString(&LinkTarget, pszDest);
  LinkTarget.Length -= 2;
  v9 = NtCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
  if ( v9 < 0 )
    KeBugCheckEx(0x64u, v9, 6uLL, 0LL, 0LL);
  NtClose(LinkHandle);
  RtlInitUnicodeString(&v21, L"\\Device\\OSDataDevice");
  v10 = a1[42];
  ObjectAttributes.ObjectName = &v21;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  if ( !v10 )
  {
    v11 = L"\\ArcName\\%S\\OSData";
    if ( !HIDWORD(WheapPfaLock.KernelStack) )
      v11 = L"\\ArcName\\%S";
    v5 = v11;
  }
  v12 = RtlStringCbPrintfW(pszDest, 0x200uLL, v5);
  if ( v12 < 0 )
    KeBugCheckEx(0x64u, v12, 7uLL, 0LL, 0LL);
  RtlInitUnicodeString(&LinkTarget, pszDest);
  v13 = NtCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
  if ( v13 < 0 )
    KeBugCheckEx(0x64u, v13, 8uLL, 0LL, 0LL);
  NtClose(LinkHandle);
  RtlInitUnicodeString(&v21, L"\\OSDataRoot");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v21;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  RtlInitUnicodeString(&LinkTarget, L"\\Device\\OSDataDevice");
  v14 = NtCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
  if ( v14 < 0 )
    KeBugCheckEx(0x64u, v14, 9uLL, 0LL, 0LL);
  NtClose(LinkHandle);
  return 0LL;
}
