/*
 * XREFs of ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800A619C
 * Callers:
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180050DE8 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800912D0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x180051094 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800A5494 (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2767780152@@@details@wil@@QEAA_NXZ @ 0x1800A6354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2767780152@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnGetSynchronizationCommitHandle(
        CAnimationClockCoordinator *this,
        const struct _GUID *a2,
        unsigned int a3,
        void **a4)
{
  int AnimationClock; // ebx
  int CommitHandle; // eax
  struct _GUID v11; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CAnimationClock *v13; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2767780152>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2767780152>::GetImpl'::`2'::impl) )
    *a4 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v13);
  v11 = *a2;
  AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v11, &v13);
  if ( AnimationClock >= 0 )
  {
    CommitHandle = CAnimationClock::GetCommitHandle(v13, a3, a4);
    AnimationClock = CommitHandle;
    if ( CommitHandle >= 0 )
      AnimationClock = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD9,
        (__int64)"clientcore\\windows\\dwm\\udwm\\animationclockcoordinator.cpp",
        (const char *)(unsigned int)CommitHandle);
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v13);
  return (unsigned int)AnimationClock;
}
