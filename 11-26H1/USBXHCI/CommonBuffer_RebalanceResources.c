/*
 * XREFs of CommonBuffer_RebalanceResources @ 0x14002E358
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x14002E130 (Controller_WdfEvtWatchdogTimerFunc.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     XilCoreCommonBuffer_RebalanceResources @ 0x14002E414 (XilCoreCommonBuffer_RebalanceResources.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x14002E7BC (XilCoreCommonBuffer_FreeUnusedResources.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

KIRQL __fastcall CommonBuffer_RebalanceResources(_QWORD *a1)
{
  KIRQL result; // al

  if ( *(_BYTE *)(*a1 + 1001LL) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\commonbuffer.c",
      700);
  result = KeGetCurrentIrql();
  if ( !result || a1[9] )
  {
    result = XilCoreCommonBuffer_RebalanceResources(a1 + 11);
    if ( result )
    {
      if ( KeGetCurrentIrql() )
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3040))(
                 WdfDriverGlobals,
                 a1[9]);
      else
        return XilCoreCommonBuffer_FreeUnusedResources(a1 + 11);
    }
  }
  return result;
}
