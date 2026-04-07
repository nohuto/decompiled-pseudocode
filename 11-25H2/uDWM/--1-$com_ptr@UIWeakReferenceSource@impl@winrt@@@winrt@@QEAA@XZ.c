/*
 * XREFs of ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180094A10
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_1_::dtor$2 @ 0x1800EBEA2 (_winrt--Udwm--Transitions--Private--implementation--WindowMoveResizeCrossfadeTransi_ea_1800EBEA2.c)
 *     _winrt::impl::root_implements_winrt::Udwm::Transitions::implementation::UserResizeVisual_winrt::Udwm::Transitions::UserResizeVisual_IUserResizeVisualNative_::get_weak_winrt::Udwm::Transitions::implementation::UserResizeVisual__::_1_::dtor$0 @ 0x1800EBEFC (_winrt--impl--root_implements_winrt--Udwm--Transitions--implementation--UserResizeVisual_winrt--.c)
 *     _winrt::impl::root_implements_winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition_winrt::Udwm::Transitions::Private::WindowMoveResizeCrossfadeTransition_::get_weak_winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition__::_1_::dtor$1 @ 0x1800EBF0E (_winrt--impl--root_implements_winrt--Udwm--Transitions--Private--implementation--WindowMoveResiz.c)
 *     _std::_Func_impl_no_alloc__lambda_545816354afdfcb0efb7a4f85f5e27cb__void_::_Do_call_::_1_::dtor$0 @ 0x1800EC61B (_std--_Func_impl_no_alloc__lambda_545816354afdfcb0efb7a4f85f5e27cb__void_--_Do_call_--_1_--dtor$.c)
 *     _winrt::weak_ref_winrt::Udwm::Transitions::Private::ScreenRotationTransition_::from_com_ref_winrt::Udwm::Transitions::Private::ScreenRotationTransition_const_&__::_1_::dtor$0 @ 0x1800ED603 (_winrt--weak_ref_winrt--Udwm--Transitions--Private--ScreenRotationTransition_--from_com_ref_winr.c)
 *     _winrt::impl::root_implements_winrt::Udwm::Transitions::implementation::UserResizeVisual_winrt::Udwm::Transitions::UserResizeVisual_IUserResizeVisualNative_::get_weak_winrt::Udwm::Transitions::implementation::UserResizeVisual__::_1_::dtor$1 @ 0x1800ED615 (_winrt--impl--root_implements_winrt--Udwm--Transitions--implementation--UserResizeV_ea_1800ED615.c)
 *     _winrt::make_weak_winrt::Udwm::Transitions::Private::ScreenRotationTransition__::_1_::dtor$1 @ 0x1800ED642 (_winrt--make_weak_winrt--Udwm--Transitions--Private--ScreenRotationTransition__--_1_--dtor$1.c)
 *     __lambda_824c6eb626f18db003f69816ba8f789d_::operator()_::_1_::dtor$0 @ 0x1800ED654 (__lambda_824c6eb626f18db003f69816ba8f789d_--operator()_--_1_--dtor$0.c)
 *     _winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_1_::dtor$1 @ 0x1800ED693 (_winrt--Udwm--Transitions--implementation--UserResizeVisual--StartHideAnimation_--_1_--dtor$1.c)
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_1_::dtor$2 @ 0x1800ED6B7 (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransition--Po_ea_1800ED6B7.c)
 *     _winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete_::_1_::dtor$1 @ 0x1800ED711 (_winrt--Udwm--Transitions--implementation--TopLevelWindow3DWrapper--AnimationComplete_--_1_--dto.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180094A2C (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(a1);
  return result;
}
