/*
 * XREFs of SmpConfigureObjectDirectories @ 0x140013B40
 * Callers:
 *     <none>
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 */

__int64 __fastcall SmpConfigureObjectDirectories(__int64 a1, __int64 a2, const WCHAR *a3)
{
  const WCHAR *v3; // rbx
  PSECURITY_DESCRIPTOR v4; // rdi
  NTSTATUS v5; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-60h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING v10; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *DirectoryHandle; // [rsp+A0h] [rbp+20h] BYREF

  *(_QWORD *)&String2.Length = 1703960LL;
  v3 = a3;
  String2.Buffer = L"\\RPC Control";
  v10.Buffer = L"\\Windows";
  DestinationString = 0LL;
  DirectoryHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  *(_QWORD *)&v10.Length = 1179664LL;
  if ( *a3 )
  {
    do
    {
      RtlInitUnicodeString(&DestinationString, v3);
      v4 = SmpPrimarySecurityDescriptor;
      if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u)
        || RtlEqualUnicodeString(&DestinationString, &v10, 1u) )
      {
        v4 = SmpLiberalSecurityDescriptor;
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 208;
      ObjectAttributes.SecurityDescriptor = v4;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      v5 = NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
      if ( v5 >= 0 )
        NtClose(DirectoryHandle);
      else
        SmpLogFailureString((__int64)"SmpConfigureObjectDirectories", 0x1CD8u, (__int64)DestinationString.Buffer, v5);
      while ( *v3++ )
        ;
    }
    while ( *v3 );
  }
  return 0LL;
}
