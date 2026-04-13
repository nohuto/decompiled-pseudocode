/*
 * XREFs of TelIsProcessorModeAllowed @ 0x180004840
 * Callers:
 *     TelIsOsInProcessorMode @ 0x180004620 (TelIsOsInProcessorMode.c)
 * Callees:
 *     <none>
 */

_BOOL8 TelIsProcessorModeAllowed()
{
  int v1; // [rsp+40h] [rbp+8h] BYREF
  int v2; // [rsp+48h] [rbp+10h]

  v1 = 0;
  v2 = 4;
  NtQueryLicenseValue(asc_18000A000, 0LL, &v1);
  return v1 == 1;
}
