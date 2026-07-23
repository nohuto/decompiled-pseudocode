/*
 * XREFs of AdtpInitializeDriveLetters @ 0x140897178
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x140897138 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     StringCopyWorkerW @ 0x1407192B8 (StringCopyWorkerW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     NtQuerySymbolicLinkObject @ 0x140A95300 (NtQuerySymbolicLinkObject.c)
 *     NtOpenSymbolicLinkObject @ 0x140A95620 (NtOpenSymbolicLinkObject.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpInitializeDriveLetters(__int64 a1, size_t a2, size_t *a3, const wchar_t *a4)
{
  NTSTATUS SymbolicLinkObject; // ebx
  unsigned int v5; // edi
  wchar_t *Buffer; // r13
  unsigned int i; // esi
  char *v8; // r14
  __int64 Pool2; // rax
  void *v10; // r15
  HANDLE v11; // rcx
  unsigned int v13; // ebx
  char v14; // r14
  UNICODE_STRING *v15; // rsi
  unsigned int v16; // eax
  size_t v17; // [rsp+28h] [rbp-69h]
  HANDLE LinkHandle; // [rsp+38h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-21h] BYREF
  wchar_t pszDest[32]; // [rsp+80h] [rbp-11h] BYREF

  DestinationString = 0LL;
  SymbolicLinkObject = 0;
  memset(&ObjectAttributes, 0, 44);
  v5 = 0;
  LinkHandle = 0LL;
  StringCopyWorkerW(pszDest, a2, a3, a4, v17);
  RtlInitUnicodeString(&DestinationString, pszDest);
  Buffer = DestinationString.Buffer;
  for ( i = 0; i < 0x1A; ++i )
  {
    Buffer[12] = i + 65;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SymbolicLinkObject = NtOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    if ( SymbolicLinkObject >= 0 )
    {
      DriveMappingArray[12 * v5] = Buffer[12];
      v8 = (char *)&DriveMappingArray[12 * v5];
      Pool2 = ExAllocatePool2(0x100uLL);
      v10 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v11 = LinkHandle;
      *((_DWORD *)v8 + 2) = 0x1000000;
      *((_QWORD *)v8 + 2) = Pool2;
      SymbolicLinkObject = NtQuerySymbolicLinkObject(v11, (PUNICODE_STRING)(v8 + 8), 0LL);
      NtClose(LinkHandle);
      if ( SymbolicLinkObject < 0 )
      {
        ExFreePoolWithTag(v10, 0);
        RtlInitUnicodeString((PUNICODE_STRING)(v8 + 8), 0LL);
      }
      else
      {
        ++v5;
      }
    }
  }
  if ( SymbolicLinkObject == -1073741801 )
    return (unsigned int)SymbolicLinkObject;
  v13 = 0;
  if ( v5 )
  {
    do
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      v14 = 0;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v15 = (UNICODE_STRING *)&DriveMappingArray[8 * v13 + 4 + 4 * v13];
      ObjectAttributes.ObjectName = v15;
      if ( NtOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes) >= 0 )
      {
        if ( NtQuerySymbolicLinkObject(LinkHandle, v15, 0LL) < 0 )
        {
          ExFreePoolWithTag(v15->Buffer, 0);
          RtlInitUnicodeString(v15, 0LL);
        }
        else
        {
          v14 = 1;
        }
        NtClose(LinkHandle);
      }
      v16 = v13 + 1;
      if ( v14 )
        v16 = v13;
      v13 = v16;
    }
    while ( v16 < v5 );
  }
  return 0LL;
}
