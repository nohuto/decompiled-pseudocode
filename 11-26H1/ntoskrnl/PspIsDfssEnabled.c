/*
 * XREFs of PspIsDfssEnabled @ 0x1407F3E04
 * Callers:
 *     PsBootPhaseComplete @ 0x1407F3820 (PsBootPhaseComplete.c)
 * Callees:
 *     PspReadDfssConfigurationValues @ 0x140617678 (PspReadDfssConfigurationValues.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     RtlQueryImageFileKeyOption @ 0x140A786C0 (RtlQueryImageFileKeyOption.c)
 */

char PspIsDfssEnabled()
{
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+28h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspQuotaKeyNames;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
  {
    RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL);
    ZwClose(KeyHandle);
  }
  PspReadDfssConfigurationValues();
  return 0;
}
