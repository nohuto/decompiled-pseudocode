/*
 * XREFs of ?Cancel@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A600
 * Callers:
 *     ?StopRotation@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18002A5B8 (-StopRotation@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?CompleteState@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18002AAC0 (-CompleteState@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt.c)
 *     ?ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004E530 (-ReleaseTransitionState@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     ?WindowMaximizeSnapCancel@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180099184 (-WindowMaximizeSnapCancel@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x1800D6294 (-PreTransition@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4Sh.c)
 *     _lambda_824c6eb626f18db003f69816ba8f789d_::operator() @ 0x1800D9F10 (_lambda_824c6eb626f18db003f69816ba8f789d_--operator().c)
 *     ?Cleanup@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800DA078 (-Cleanup@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800D72B8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::Cancel(
        __int64 *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 88LL))(v1);
  return winrt::check_hresult(&v6, v2, &v4);
}
