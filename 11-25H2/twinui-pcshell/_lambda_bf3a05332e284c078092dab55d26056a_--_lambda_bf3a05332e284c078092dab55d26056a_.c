/*
 * XREFs of _lambda_bf3a05332e284c078092dab55d26056a_::_lambda_bf3a05332e284c078092dab55d26056a_ @ 0x18035CB4C
 * Callers:
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18035EE14 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?HideExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x1803657C0 (-HideExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1805E3510 (-subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPE.c)
 * Callees:
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800E8F1C (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
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
