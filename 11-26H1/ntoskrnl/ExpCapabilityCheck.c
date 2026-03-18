/*
 * XREFs of ExpCapabilityCheck @ 0x140A918C0
 * Callers:
 *     ExpFirmwareAccessAppContainerCheck @ 0x140B46CC8 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140A91900 (RtlCapabilityCheck.c)
 */

char __fastcall ExpCapabilityCheck(PCUNICODE_STRING String2)
{
  if ( (int)RtlCapabilityCheck(0LL, String2) >= 0 )
    return 0;
  else
    return 0;
}
