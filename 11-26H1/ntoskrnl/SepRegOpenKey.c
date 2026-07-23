/*
 * XREFs of SepRegOpenKey @ 0x140AB4194
 * Callers:
 *     SepBuildCapPolicyTable @ 0x14063F8C0 (SepBuildCapPolicyTable.c)
 *     SepRmFetchGlobalSacl @ 0x14081C804 (SepRmFetchGlobalSacl.c)
 *     SepReadAndInsertCaps @ 0x14081D06C (SepReadAndInsertCaps.c)
 *     SepReadAndPopulateCapes @ 0x14081D3BC (SepReadAndPopulateCapes.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x14081E11C (SepAdtOpenRegAndSetupNotification.c)
 *     SepRegQueryDwordValue @ 0x140AB4114 (SepRegQueryDwordValue.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
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
