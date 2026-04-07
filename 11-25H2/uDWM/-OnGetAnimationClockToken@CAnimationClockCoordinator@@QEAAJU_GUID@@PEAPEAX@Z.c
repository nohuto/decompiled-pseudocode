/*
 * XREFs of ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x180051030
 * Callers:
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180050DE8 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800912D0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x180051094 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?GetToken@CAnimationClock@@QEAAJPEAPEAX@Z @ 0x1800A56E8 (-GetToken@CAnimationClock@@QEAAJPEAPEAX@Z.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnGetAnimationClockToken(
        CAnimationClockCoordinator *this,
        struct _GUID *a2,
        void **a3)
{
  struct _GUID v3; // xmm0
  int AnimationClock; // edi
  void **v6; // rdx
  CBaseObject *v7; // rbx
  struct _GUID v9; // [rsp+20h] [rbp-18h] BYREF
  CBaseObject *v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  v10 = 0LL;
  v9 = v3;
  AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v9, &v10);
  if ( AnimationClock >= 0 )
  {
    v6 = a3;
    v7 = v10;
    AnimationClock = CAnimationClock::GetToken(v10, v6);
    if ( v7 )
      CBaseObject::Release(v7);
  }
  return (unsigned int)AnimationClock;
}
