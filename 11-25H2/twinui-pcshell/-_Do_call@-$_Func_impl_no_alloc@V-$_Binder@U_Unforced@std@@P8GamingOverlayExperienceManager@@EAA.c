/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8GamingOverlayExperienceManager@@EAAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@ZPEAV3@AEBU?$_Ph@$00@2@AEBU?$_Ph@$01@2@@std@@XAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@std@@EEAAXAEBUAPP_LOCAL_DEVICE_ID@@$$QEAW4GamepadButtonEventKind@@@Z @ 0x180351DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (GamingOverlayExperienceManager::*)(APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind),GamingOverlayExperienceManager *,std::_Ph<1> const &,std::_Ph<2> const &>,void,APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind>::_Do_call(
        __int64 a1,
        __int64 a2,
        unsigned int *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 8))(
           *(_QWORD *)(a1 + 32) + *(int *)(a1 + 16),
           a2,
           *a3);
}
