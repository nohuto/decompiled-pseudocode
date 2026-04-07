/*
 * XREFs of ?Release@?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@AEAAKXZ @ 0x180042190
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAA@XZ @ 0x180041668 (--1-$test_data_control@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Tr.c)
 *     ?Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180041D0C (-Cancel@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180041DF0 (-ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041F40 (-reset@-$com_ptr_t@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transi.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180041FA4 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@T.c)
 *     ?SetRotationState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4RotationState@Rotation@3456@@Z @ 0x18004207C (-SetRotationState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAA@XZ @ 0x180076880 (--1-$test_watcher@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transit.c)
 *     ??1ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800D29EC (--1ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 * Callees:
 *     ??1?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@QEAA@XZ @ 0x1800D294C (--1-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U1234.c)
 */

__int64 __fastcall tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 72);
  if ( !v2 )
  {
    tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::~merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>();
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
