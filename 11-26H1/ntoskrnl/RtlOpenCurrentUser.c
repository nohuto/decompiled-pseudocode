/*
 * XREFs of RtlOpenCurrentUser @ 0x140B26C80
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1404F6FC4 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140925F40 (RtlFormatCurrentUserKeyPath.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 */

__int64 __fastcall RtlOpenCurrentUser(ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  NTSTATUS v4; // ebx
  PVOID P[2]; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(_OWORD *)P = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v4 = RtlFormatCurrentUserKeyPath((PUNICODE_STRING)P);
  if ( v4 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
    if ( P[1] )
    {
      ExFreePool(P[1]);
      *(_OWORD *)P = 0LL;
    }
  }
  if ( v4 == -1073741772 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)P, L"\\Registry\\User\\.Default");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return (unsigned int)ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
  }
  return (unsigned int)v4;
}
