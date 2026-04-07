/*
 * XREFs of ??$get_self@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@winrt@@YAPEAUUserResizeVisual@implementation@Transitions@Udwm@0@AEBUIUserResizeVisual@340@@Z @ 0x18007C954
 * Callers:
 *     ?get@?$weak_ref@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x18008BFD4 (-get@-$weak_ref@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1_::operator() @ 0x1800D6E80 (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransition--Po_ea_1800D6E80.c)
 *     _winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_2_::_lambda_1_::operator() @ 0x1800DD348 (_winrt--Udwm--Transitions--implementation--UserResizeVisual--StartHideAnimation_--__ea_1800DD348.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::get_self<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::IUserResizeVisual>(
        _QWORD *a1)
{
  return (*a1 - 8LL) & -(__int64)(*a1 != 0LL);
}
