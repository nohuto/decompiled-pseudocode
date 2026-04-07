/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAA@XZ @ 0x180085FE0
 * Callers:
 *     ?PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x1800D6294 (-PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4Sh.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::Cancel_::_1_::dtor$0 @ 0x1800EBCAF (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationTransition--Cancel_--_1_--dtor.c)
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::PreTransition_::_1_::dtor$2 @ 0x1800ED597 (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationTransition--PreTransition_--_1.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@AEAAKXZ @ 0x18004F130 (-Release@-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::~test_watcher<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 48);
  if ( v2 )
    tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::Release(v2);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
