/*
 * XREFs of ?complete@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAAXXZ @ 0x180085364
 * Callers:
 *     ?ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004E530 (-ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 * Callees:
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1800D72E0 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 */

void __fastcall tip2::tip_test<tip2::details::merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest,Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::complete(
        __int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 200));
    *(_DWORD *)(v1 + 72) |= 0x300u;
    if ( *(_QWORD *)(v1 + 240) )
      tip2::details::shared_data<0,0,0>::complete_helper(v1 + 8, 2LL);
    if ( v1 != -200 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 200));
  }
}
