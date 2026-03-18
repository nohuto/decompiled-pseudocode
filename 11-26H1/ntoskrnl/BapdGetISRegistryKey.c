/*
 * XREFs of BapdGetISRegistryKey @ 0x140C080D8
 * Callers:
 *     BapdRemoveWbclData @ 0x140BFF0D8 (BapdRemoveWbclData.c)
 *     BapdRegisterSiData @ 0x140C07E54 (BapdRegisterSiData.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140CE2A38 (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 */

__int64 __fastcall BapdGetISRegistryKey(PHANDLE KeyHandle)
{
  NTSTATUS v2; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandlea; // [rsp+98h] [rbp+18h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandlea = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"IntegrityServices");
    ObjectAttributes.RootDirectory = KeyHandlea;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v2 = ZwCreateKey(KeyHandle, 0x6001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL);
    ZwClose(KeyHandlea);
  }
  return (unsigned int)v2;
}
