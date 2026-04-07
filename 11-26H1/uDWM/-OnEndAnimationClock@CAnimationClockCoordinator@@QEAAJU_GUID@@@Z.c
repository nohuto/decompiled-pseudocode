/*
 * XREFs of ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x18003EAA4
 * Callers:
 *     ?_OnEndAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180069D8C (-_OnEndAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18003E990 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x18003EAFC (-End@CAnimationClock@@QEAAJXZ.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnEndAnimationClock(CAnimationClockCoordinator *this, struct _GUID *a2)
{
  int AnimationClock; // edi
  struct _GUID v4; // [rsp+20h] [rbp-18h] BYREF
  CBaseObject *v5; // [rsp+48h] [rbp+10h] BYREF

  v4 = *a2;
  v5 = 0LL;
  AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v4, &v5);
  if ( AnimationClock >= 0 )
  {
    AnimationClock = CAnimationClock::End(v5);
    if ( v5 )
      CBaseObject::Release(v5);
  }
  return (unsigned int)AnimationClock;
}
