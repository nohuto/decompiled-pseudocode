/*
 * XREFs of ?CreateSnapshotVisual@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x1800419F0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ?CreateSnapshotVisual@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUAnimatedTransitionVisualWrapper@345@UTopLevelWindow3DWrapper@345@@Z @ 0x180041A78 (-CreateSnapshotVisual@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AUAnimatedTran.c)
 *     ??$clear_abi@X@impl@winrt@@YAXPEAPEAX@Z @ 0x180041BF8 (--$clear_abi@X@impl@winrt@@YAXPEAPEAX@Z.c)
 *     ??$detach_from@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@YA?A_P$$QEAUAnimatedTransitionVisualWrapper@Transitions@Udwm@1@@Z @ 0x180086C38 (--$detach_from@UAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@YA-A_P$$QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::ITransitionState>::CreateSnapshotVisual(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rdx
  __int64 SnapshotVisual; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  winrt::impl::clear_abi<void>(a3, a2);
  v7 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  try
  {
    SnapshotVisual = winrt::Udwm::Transitions::implementation::TransitionState::CreateSnapshotVisual();
    *a3 = winrt::impl::detach_from<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper>(SnapshotVisual);
    if ( v8 )
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v7);
  }
  return result;
}
