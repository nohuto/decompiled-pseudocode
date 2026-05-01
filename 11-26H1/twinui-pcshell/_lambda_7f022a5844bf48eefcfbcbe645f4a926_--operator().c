/*
 * XREFs of _lambda_7f022a5844bf48eefcfbcbe645f4a926_::operator() @ 0x18058D5E0
 * Callers:
 *     ?ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ @ 0x18058DA78 (-ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@XZ @ 0x18018BDE8 (--DIterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?DoesMonitorSuppressGestures@TouchGestureHelper@@SA_NPEAUIImmersiveMonitor@@@Z @ 0x18058B874 (-DoesMonitorSuppressGestures@TouchGestureHelper@@SA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ??$DoesFullScreenWindowDisableTouch@AEB_N@TouchEdgeGestureTelemetry@@SAXAEB_N@Z @ 0x18058C890 (--$DoesFullScreenWindowDisableTouch@AEB_N@TouchEdgeGestureTelemetry@@SAXAEB_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall lambda_7f022a5844bf48eefcfbcbe645f4a926_::operator()(_QWORD *a1)
{
  bool DoesMonitorSuppressGestures; // di
  bool v3; // [rsp+30h] [rbp+8h] BYREF
  struct IImmersiveMonitor *v4; // [rsp+38h] [rbp+10h] BYREF

  details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::operator*(
    *a1 + 96LL,
    (__int64 *)&v4);
  DoesMonitorSuppressGestures = TouchGestureHelper::DoesMonitorSuppressGestures((IUnknown *)v4);
  v3 = DoesMonitorSuppressGestures;
  TouchEdgeGestureTelemetry::DoesFullScreenWindowDisableTouch<bool const &>((char *)&v3);
  if ( v4 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v4);
  return DoesMonitorSuppressGestures;
}
