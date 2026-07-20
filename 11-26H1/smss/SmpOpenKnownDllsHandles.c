/*
 * XREFs of SmpOpenKnownDllsHandles @ 0x140016EC0
 * Callers:
 *     SmpInitializeKnownDlls @ 0x1400154E0 (SmpInitializeKnownDlls.c)
 *     SmpLoadDataFromRegistry @ 0x1400159FC (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     SmpExpandKnownDllsPath @ 0x14000D61C (SmpExpandKnownDllsPath.c)
 */

__int64 __fastcall SmpOpenKnownDllsHandles(
        struct _UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        int a3,
        void **a4,
        void **a5)
{
  void **v5; // r15
  NTSTATUS v10; // eax
  unsigned int v11; // ebx
  PWSTR Buffer; // r8
  unsigned int v13; // edx
  NTSTATUS v14; // eax
  int v15; // edx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-51h] BYREF
  void *FileHandle; // [rsp+68h] [rbp-21h] BYREF
  void *SymbolicLinkHandle; // [rsp+70h] [rbp-19h] BYREF
  struct _UNICODE_STRING Name; // [rsp+78h] [rbp-11h] BYREF
  PVOID BaseAddress[2]; // [rsp+88h] [rbp-1h] BYREF
  _QWORD v22[2]; // [rsp+98h] [rbp+Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp+1Fh] BYREF
  void *DirectoryHandle; // [rsp+100h] [rbp+77h] BYREF

  v5 = a5;
  *a4 = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  *v5 = 0LL;
  v22[1] = L"KnownDllPath";
  DirectoryHandle = 0LL;
  SymbolicLinkHandle = 0LL;
  v22[0] = 1703960LL;
  Name = 0LL;
  IoStatusBlock = 0LL;
  *(_OWORD *)BaseAddress = 0LL;
  memset(&ObjectAttributes, 0, 32);
  v10 = SmpExpandKnownDllsPath(a2, &Name);
  v11 = v10;
  if ( v10 < 0 )
  {
    Name.Buffer = 0LL;
    if ( a2 )
      Buffer = a2->Buffer;
    else
      Buffer = 0LL;
    v13 = 3826;
    goto LABEL_6;
  }
  v10 = RtlDosPathNameToNtPathName_U_WithStatus(Name.Buffer, BaseAddress, 0LL, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    Buffer = Name.Buffer;
    v13 = 3843;
    BaseAddress[1] = 0LL;
LABEL_6:
    SmpLogFailureString((__int64)"SmpOpenKnownDllsHandles", v13, (__int64)Buffer, v10);
    goto LABEL_21;
  }
  ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  v11 = v10;
  if ( v10 < 0 )
  {
    FileHandle = 0LL;
    if ( v10 != -1073741772 || a3 )
    {
      Buffer = (PWSTR)BaseAddress[1];
      v13 = 3874;
      goto LABEL_6;
    }
    goto LABEL_20;
  }
  ObjectAttributes.SecurityDescriptor = SmpKnownDllsDirSecurityDescriptor;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 208;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v14 = NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  v11 = v14;
  if ( v14 != 0x40000000 )
  {
    if ( v14 < 0 )
    {
      DirectoryHandle = 0LL;
      v15 = 3909;
LABEL_16:
      SmpLogFailure((__int64)"SmpOpenKnownDllsHandles", v15, v14);
      goto LABEL_21;
    }
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v22;
    ObjectAttributes.SecurityDescriptor = SmpKnownDllsSymLinkSecurityDescriptor;
    ObjectAttributes.Attributes = 80;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v14 = NtCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, &Name);
    v11 = v14;
    if ( v14 < 0 )
    {
      SymbolicLinkHandle = 0LL;
      v15 = 3932;
      goto LABEL_16;
    }
  }
  *a4 = DirectoryHandle;
  *v5 = FileHandle;
  DirectoryHandle = 0LL;
LABEL_20:
  v11 = 0;
LABEL_21:
  if ( BaseAddress[1] )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress[1]);
  if ( Name.Buffer )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Name.Buffer);
  if ( SymbolicLinkHandle )
    NtClose(SymbolicLinkHandle);
  if ( DirectoryHandle )
    NtClose(DirectoryHandle);
  return v11;
}
