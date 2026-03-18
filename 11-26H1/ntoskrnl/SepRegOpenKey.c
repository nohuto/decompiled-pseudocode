/*
 * XREFs of SepRegOpenKey @ 0x140AB2DF4
 * Callers:
 *     SepBuildCapPolicyTable @ 0x14063BCE4 (SepBuildCapPolicyTable.c)
 *     SepRmFetchGlobalSacl @ 0x1408165F4 (SepRmFetchGlobalSacl.c)
 *     SepReadAndInsertCaps @ 0x140816E5C (SepReadAndInsertCaps.c)
 *     SepReadAndPopulateCapes @ 0x1408171AC (SepReadAndPopulateCapes.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140817F0C (SepAdtOpenRegAndSetupNotification.c)
 *     SepRegQueryDwordValue @ 0x140AB2D74 (SepRegQueryDwordValue.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 */

NTSTATUS __fastcall SepRegOpenKey(PCWSTR SourceString, ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  UNICODE_STRING v6; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = 0LL;
  RtlInitUnicodeString(&v6, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v6;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *KeyHandle = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
