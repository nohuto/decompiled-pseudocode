/*
 * XREFs of ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18003F320
 * Callers:
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x18003F114 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18003E990 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x180040D60 (-Begin@CAnimationClock@@QEAAJK@Z.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnBeginAnimationClock(
        CAnimationClockCoordinator *this,
        struct _GUID *a2,
        unsigned int a3)
{
  int AnimationClock; // edi
  unsigned int v5; // edx
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
    AnimationClock = CAnimationClock::Begin(v9, v5);
    if ( v6 )
      CBaseObject::Release(v6);
  }
  return (unsigned int)AnimationClock;
}
