/*
 * XREFs of ?__abi_IMonitorFrameDismissAnimationCallback____abi_MonitorFrameDismissAnimationCompleted@?QIMonitorFrameDismissAnimationCallback@@XamlAllUpViewController@@UE$AAAJXZ @ 0x180691220
 * Callers:
 *     ?__abi_IMonitorFrameDismissAnimationCallback____abi_MonitorFrameDismissAnimationCompleted@?QIMonitorFrameDismissAnimationCallback@@XamlAllUpViewController@@WJI@E$AAAJXZ @ 0x180691260 (-__abi_IMonitorFrameDismissAnimationCallback____abi_MonitorFrameDismissAnimationCom_ea_180691260.c)
 * Callees:
 *     ?__abi_winrt_throw_on_disposed@@YAX_N@Z @ 0x1801D1778 (-__abi_winrt_throw_on_disposed@@YAX_N@Z.c)
 *     ?MonitorFrameDismissAnimationCompleted@?QIMonitorFrameDismissAnimationCallback@@XamlAllUpViewController@@UE$AAAXXZ @ 0x18068F5D0 (-MonitorFrameDismissAnimationCompleted@-QIMonitorFrameDismissAnimationCallback@@XamlAllUpViewCon.c)
 */

__int64 __fastcall ___abi_IMonitorFrameDismissAnimationCallback____abi_MonitorFrameDismissAnimationCompleted__QIMonitorFrameDismissAnimationCallback__XamlAllUpViewController__UE_AAAJXZ(
        __int64 a1)
{
  __abi_winrt_throw_on_disposed(*(_BYTE *)(a1 + 225));
  try
  {
    _MonitorFrameDismissAnimationCompleted__QIMonitorFrameDismissAnimationCallback__XamlAllUpViewController__UE_AAAXXZ(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
