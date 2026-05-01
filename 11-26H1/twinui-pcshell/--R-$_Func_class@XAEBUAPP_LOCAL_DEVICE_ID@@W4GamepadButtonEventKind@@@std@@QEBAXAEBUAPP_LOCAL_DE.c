/*
 * XREFs of ??R?$_Func_class@XAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@std@@QEBAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z @ 0x180362144
 * Callers:
 *     ?HandleButtonEvent@GamepadButtonTracker@@QEAAX_N_K@Z @ 0x1803626A0 (-HandleButtonEvent@GamepadButtonTracker@@QEAAX_N_K@Z.c)
 *     ?OnDoublePressTimerElapsed@GamepadButtonTracker@@AEAAXAEBUThreadPoolTimer@Threading@System@Windows@winrt@@@Z @ 0x180362910 (-OnDoublePressTimerElapsed@GamepadButtonTracker@@AEAAXAEBUThreadPoolTimer@Threading@System@Windo.c)
 *     ?OnLongPressTimerElapsed@GamepadButtonTracker@@AEAAXAEBUThreadPoolTimer@Threading@System@Windows@winrt@@@Z @ 0x1803629D0 (-OnLongPressTimerElapsed@GamepadButtonTracker@@AEAAXAEBUThreadPoolTimer@Threading@System@Windows.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Func_class<void,APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind>::operator()(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rcx
  int v5; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v5 = a3;
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v3 + 16LL))(v3, a2, &v5);
}
