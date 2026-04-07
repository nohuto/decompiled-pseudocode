/*
 * XREFs of ?SetRotationState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4RotationState@Rotation@3456@@Z @ 0x18004E69C
 * Callers:
 *     ?Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004E45C (-Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?HandleAnimationEnd@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D6018 (-HandleAnimationEnd@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D66EC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D6BA0 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 *     ?UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800D70BC (-UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 * Callees:
 *     ?begin_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18004E7E8 (-begin_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18004E81C (-ensure_data@-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@T.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18004EFD4 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004F10C (-reset@-$com_ptr_t@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transi.c)
 *     ?Release@?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@AEAAKXZ @ 0x18004F130 (-Release@-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::SetRotationState(
        __int64 a1,
        int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  LPVOID pv; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 40) = a2;
  v3 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::ensure_data(a1 + 104);
  pv = (LPVOID)v3;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 280));
  tip2::details::shared_data<0,0,0>::begin_update(v3 + 8);
  *(_DWORD *)(v3 + 272) = a2;
  tip2::details::shared_data<0,0,0>::end_update(v3 + 8);
  result = wil::com_ptr_t<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>,wil::err_returncode_policy>::reset(&pv);
  if ( pv )
    return tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::Release(pv);
  return result;
}
