/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8GamingOverlayExperienceManager@@EAAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@ZPEAV3@AEBU?$_Ph@$00@2@AEBU?$_Ph@$01@2@@std@@XAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@std@@EEAAX_N@Z @ 0x180357C60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (GamingOverlayExperienceManager::*)(APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind),GamingOverlayExperienceManager *,std::_Ph<1> const &,std::_Ph<2> const &>,void,APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind>::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
}
