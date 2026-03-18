/*
 * XREFs of DxgkNotifyMonitorChange @ 0x1401933F4
 * Callers:
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x140278EC8 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E2194 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkStatusChangeNotify @ 0x1402D4620 (DxgkStatusChangeNotify.c)
 *     DxgkIncreaseMonitorUniqueness @ 0x1403FA2E8 (DxgkIncreaseMonitorUniqueness.c)
 */

__int64 __fastcall DxgkNotifyMonitorChange(__int128 *a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  __int128 v4; // [rsp+30h] [rbp-28h]

  result = DxgkIncreaseMonitorUniqueness();
  if ( (int)result >= 0 )
  {
    v3 = 0LL;
    LODWORD(v3) = 12;
    v4 = 0LL;
    if ( a1 )
      v4 = *a1;
    return DxgkStatusChangeNotify(&v3);
  }
  return result;
}
