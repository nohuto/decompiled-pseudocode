/*
 * XREFs of ?MxHasEnoughRemainingThreadStack@Mx@@SAEXZ @ 0x140007FC8
 * Callers:
 *     ?PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x140007E78 (-PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1400778E8 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Mx::MxHasEnoughRemainingThreadStack()
{
  unsigned __int64 v1[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  v1[0] = 0LL;
  v2 = 0LL;
  IoGetStackLimits(&v2, v1);
  return (unsigned __int64)v1 - v2 >= 0x3000;
}
