/*
 * XREFs of HvlSetRootFaultReportingReady @ 0x1405BE370
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14032BFB0 (HvcallFastExtended.c)
 *     HvlpHvToNtStatus @ 0x1403E7DC0 (HvlpHvToNtStatus.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 HvlSetRootFaultReportingReady()
{
  unsigned __int16 v0; // ax
  _DWORD v2[20]; // [rsp+40h] [rbp-68h] BYREF

  memset_0(v2, 0, 0x48uLL);
  v2[0] = 32;
  v0 = HvcallFastExtended(65647LL, (unsigned __int64)v2, 0x48u, 0LL, 0);
  return HvlpHvToNtStatus(v0);
}
