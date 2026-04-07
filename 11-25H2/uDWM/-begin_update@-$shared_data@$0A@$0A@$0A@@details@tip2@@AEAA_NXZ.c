/*
 * XREFs of ?begin_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18004E7E8
 * Callers:
 *     ?ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004E530 (-ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     ?SetRotationState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4RotationState@Rotation@3456@@Z @ 0x18004E69C (-SetRotationState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXW.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@1@XZ @ 0x18004E7AC (--C-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions.c)
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1800D60E0 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Pri.c)
 *     ?log_message@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXPEBD@Z @ 0x1800D7B9C (-log_message@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXPEBD@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall tip2::details::shared_data<0,0,0>::begin_update(__int64 a1)
{
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
  return (*(_DWORD *)(a1 + 64) & 0x100) == 0;
}
