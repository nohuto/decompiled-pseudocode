/*
 * XREFs of PopSetupMobileHotspotNotification @ 0x1407CB7BC
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupMobileHotspotNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (unsigned int)&v1,
           (unsigned int)&WNF_SEB_MOBILE_HOTSPOT,
           1,
           0,
           (__int64)PopWnfMobileHotspotCallback,
           0LL);
}
