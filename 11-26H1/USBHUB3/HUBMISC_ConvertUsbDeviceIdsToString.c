/*
 * XREFs of HUBMISC_ConvertUsbDeviceIdsToString @ 0x14002F054
 * Callers:
 *     HUBFDO_QueryHubErrataFlags @ 0x140080408 (HUBFDO_QueryHubErrataFlags.c)
 *     HUBMISC_QueryAndCacheRegistryValuesForDevice @ 0x140086EFC (HUBMISC_QueryAndCacheRegistryValuesForDevice.c)
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x14008758C (HUBREG_AssignUsbflagsValueForDevice.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x140002460 (RtlStringCchPrintfA.c)
 */

NTSTATUS __fastcall HUBMISC_ConvertUsbDeviceIdsToString(unsigned __int16 *a1, char *a2, char *a3, char *a4)
{
  RtlStringCchPrintfA(a2, 5uLL, "%04X", a1[4]);
  RtlStringCchPrintfA(a3, 5uLL, "%04X", a1[5]);
  return RtlStringCchPrintfA(a4, 5uLL, "%04X", a1[6]);
}
