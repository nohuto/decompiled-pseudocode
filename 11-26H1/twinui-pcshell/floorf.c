/*
 * XREFs of floorf @ 0x1802C9E30
 * Callers:
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1801BD9DC (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18024EFF0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 *     ?UpdateMonitorInfoInternal@MonitorInformation@KeyboardHosting@@AEAAXXZ @ 0x180476418 (-UpdateMonitorInfoInternal@MonitorInformation@KeyboardHosting@@AEAAXXZ.c)
 *     s_OnDrawItemHelper @ 0x18068626C (s_OnDrawItemHelper.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf(float X)
{
  return __imp_floorf(X);
}
