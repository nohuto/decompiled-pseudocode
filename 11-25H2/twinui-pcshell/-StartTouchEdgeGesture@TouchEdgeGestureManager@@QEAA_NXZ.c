/*
 * XREFs of ?StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ @ 0x180569EA8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_013507e4d5b2fb5bed44960782046b4d__bool_::_Do_call @ 0x18056A2C0 (std--_Func_impl_no_alloc__lambda_013507e4d5b2fb5bed44960782046b4d__bool_--_Do_call.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?WatchCurrentThread@TouchEdgeGestureTelemetry@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1800FC2CC (-WatchCurrentThread@TouchEdgeGestureTelemetry@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ?get@?$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@P6AXXZ@Z @ 0x1800FC738 (-get@-$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@XZ @ 0x180192E88 (--DIterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ?IsEnabled@TouchEdgeGestureTelemetry@@SA_NE_K@Z @ 0x1802BDB4C (-IsEnabled@TouchEdgeGestureTelemetry@@SA_NE_K@Z.c)
 *     ?ShouldShowGripper@TouchEdgeGestureManager@@AEAA_NXZ @ 0x180569CBC (-ShouldShowGripper@TouchEdgeGestureManager@@AEAA_NXZ.c)
 *     ?ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ @ 0x180569D84 (-ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ.c)
 *     ?StartTouchEdgeGestureCompleted_@TouchEdgeGestureTelemetry@@QEAAXAEBU?$com_ptr@UIImmersiveMonitor@@@winrt@@_N@Z @ 0x18056A010 (-StartTouchEdgeGestureCompleted_@TouchEdgeGestureTelemetry@@QEAAXAEBU-$com_ptr@UIImmersiveMonito.c)
 *     ?HideGripperAsync@TouchEdgeGripperHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180572CA8 (-HideGripperAsync@TouchEdgeGripperHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     ?IsGripperVisible@TouchEdgeGripperHost@@QEAA_NXZ @ 0x180572DF0 (-IsGripperVisible@TouchEdgeGripperHost@@QEAA_NXZ.c)
 *     ?IsPointOnGripper@TouchEdgeGripperHost@@QEAA_NUtagPOINT@@@Z @ 0x180572E3C (-IsPointOnGripper@TouchEdgeGripperHost@@QEAA_NUtagPOINT@@@Z.c)
 *     ?ShowGripperAsync@TouchEdgeGripperHost@@QEAA?AUfire_and_forget@winrt@@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_N@Z @ 0x180573504 (-ShowGripperAsync@TouchEdgeGripperHost@@QEAA-AUfire_and_forget@winrt@@W4TouchEdgeGestureType@@PE.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall TouchEdgeGestureManager::StartTouchEdgeGesture(TouchEdgeGestureManager *this)
{
  char v2; // si
  unsigned int v3; // ebp
  float v4; // xmm6_4
  float v5; // xmm7_4
  bool IsGripperVisible; // al
  __int64 v7; // rbx
  bool IsPointOnGripper; // al
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  char v16; // [rsp+20h] [rbp-98h]
  _BYTE v17[112]; // [rsp+30h] [rbp-88h] BYREF
  struct tagPOINT v18; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+10h] BYREF

  TouchEdgeGestureTelemetry::WatchCurrentThread((__int64)v17, (__int64)"TouchEdgeGestureManager::StartTouchEdgeGesture");
  v2 = 0;
  v3 = *((_DWORD *)this + 46);
  v4 = *((float *)this + 48);
  v5 = *((float *)this + 49);
  details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::operator*(
    (__int64)this + 96,
    &v19);
  IsGripperVisible = TouchEdgeGripperHost::IsGripperVisible(*((TouchEdgeGripperHost **)this + 11));
  v7 = v19;
  if ( IsGripperVisible )
  {
    v18.x = (int)v4;
    v18.y = (int)v5;
    IsPointOnGripper = TouchEdgeGripperHost::IsPointOnGripper(*((TouchEdgeGripperHost **)this + 11), v18);
    v10 = *((_QWORD *)this + 11);
    if ( IsPointOnGripper )
    {
      LOBYTE(v9) = 1;
      TouchEdgeGripperHost::HideGripperAsync(v10, &v18, v9);
LABEL_4:
      v2 = 1;
      goto LABEL_5;
    }
  }
  else
  {
    if ( !TouchEdgeGestureManager::ShouldStartGesture(this) )
      goto LABEL_5;
    if ( !TouchEdgeGestureManager::ShouldShowGripper((IUnknown **)this) )
      goto LABEL_4;
    v10 = *((_QWORD *)this + 11);
  }
  v16 = 1;
  TouchEdgeGripperHost::ShowGripperAsync(v10, &v18, v3, v7, v16);
LABEL_5:
  if ( TouchEdgeGestureTelemetry::IsEnabled(v11) )
  {
    wil::details::static_lazy<TouchEdgeGestureTelemetry>::get(
      v12,
      (void (__cdecl *)())_lambda_a7362a5569191a78ac5e080098becae6_::_lambda_invoker_cdecl_);
    LOBYTE(v13) = v2;
    TouchEdgeGestureTelemetry::StartTouchEdgeGestureCompleted_(v14, &v19, v13);
    v7 = v19;
  }
  if ( v7 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v19);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v17);
  return v2;
}
