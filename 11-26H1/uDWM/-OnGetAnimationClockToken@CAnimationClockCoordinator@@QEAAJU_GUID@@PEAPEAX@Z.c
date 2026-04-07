/*
 * XREFs of ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x18003E928
 * Callers:
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18003E6A4 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18003E990 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?GetToken@CAnimationClock@@QEAAJPEAPEAX@Z @ 0x18006272C (-GetToken@CAnimationClock@@QEAAJPEAPEAX@Z.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnGetAnimationClockToken(
        CAnimationClockCoordinator *this,
        struct _GUID *a2,
        void **a3)
{
  int AnimationClock; // edi
  void **v5; // rdx
  CBaseObject *v6; // rbx
  struct _GUID v8; // [rsp+20h] [rbp-18h] BYREF
  CBaseObject *v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = *a2;
  v9 = 0LL;
  AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v8, &v9);
  if ( AnimationClock >= 0 )
  {
    v5 = a3;
    v6 = v9;
    AnimationClock = CAnimationClock::GetToken(v9, v5);
    if ( v6 )
      CBaseObject::Release(v6);
  }
  return (unsigned int)AnimationClock;
}
