/*
 * XREFs of _lambda_bf3a05332e284c078092dab55d26056a_::_lambda_bf3a05332e284c078092dab55d26056a_ @ 0x180363940
 * Callers:
 *     ?RuntimeClassInitialize@CNetworkExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800530D8 (-RuntimeClassInitialize@CNetworkExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x180054F14 (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJXZ @ 0x180109074 (-SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJXZ.c)
 *     ?OnMessage@CVirtualDesktopManager@@UEAAJI_K_J@Z @ 0x1801F37A0 (-OnMessage@CVirtualDesktopManager@@UEAAJI_K_J@Z.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180365DA8 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?HideExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x18036C950 (-HideExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     _lambda_f6437df0abc95a57934437eecbec2119_::operator() @ 0x18043B048 (_lambda_f6437df0abc95a57934437eecbec2119_--operator().c)
 *     _lambda_4edb015cfe9b61f9f6a23a5771f981be_::operator() @ 0x1804452A4 (_lambda_4edb015cfe9b61f9f6a23a5771f981be_--operator().c)
 *     ?PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ @ 0x1805106C0 (-PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ.c)
 *     ?subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180608120 (-subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPE.c)
 * Callees:
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall lambda_bf3a05332e284c078092dab55d26056a_::_lambda_bf3a05332e284c078092dab55d26056a_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  *a1 = a2;
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    a1 + 1,
    a3);
  return a1;
}
