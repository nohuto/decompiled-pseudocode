/*
 * XREFs of ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x18008D1E0
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_5_::_lambda_1_::operator() @ 0x180087744 (_winrt--Udwm--Transitions--Private--implementation--WindowMoveResizeCrossfadeTransition--PostTra.c)
 *     ?get@?$weak_ref@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ @ 0x18008BFD4 (-get@-$weak_ref@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@QEBA@XZ.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1_::operator() @ 0x1800D6E80 (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransition--Po_ea_1800D6E80.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@I@Z @ 0x1800D7084 (-GetAt@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions.c)
 *     _winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_2_::_lambda_1_::operator() @ 0x1800DD348 (_winrt--Udwm--Transitions--implementation--UserResizeVisual--StartHideAnimation_--__ea_1800DD348.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 */

void **__fastcall winrt::put_abi(winrt *this, struct IUnknown *a2)
{
  if ( *(_QWORD *)this )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)this);
  return (void **)this;
}
