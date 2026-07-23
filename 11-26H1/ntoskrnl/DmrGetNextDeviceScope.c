/*
 * XREFs of DmrGetNextDeviceScope @ 0x1405B2894
 * Callers:
 *     IvtpGetNextInternalDeviceScope @ 0x14052DB54 (IvtpGetNextInternalDeviceScope.c)
 *     DmrGetNextDrhdDeviceScope @ 0x1405B259C (DmrGetNextDrhdDeviceScope.c)
 *     DmrEnumerateSatcDevices @ 0x1405B2734 (DmrEnumerateSatcDevices.c)
 *     DmrEnumerateRmrrDomains @ 0x1405B2A28 (DmrEnumerateRmrrDomains.c)
 *     IvtCheckForReservedRegion @ 0x14078A510 (IvtCheckForReservedRegion.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DmrGetNextDeviceScope(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 v6; // rdx

  v3 = 0LL;
  if ( a3 )
    a1 = a3 + *(unsigned __int8 *)(a3 + 1);
  if ( a1 > a3 && a1 + 2 >= a1 && a1 + 2 <= a2 )
  {
    v6 = a1 + *(unsigned __int8 *)(a1 + 1);
    if ( v6 > a1 && v6 <= a2 )
      return a1;
  }
  return v3;
}
