/*
 * XREFs of ?OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z @ 0x180098B40
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18003E990 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?GetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z @ 0x180098308 (-GetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnGetAnimationClockTime(
        CAnimationClockCoordinator *a1,
        struct _GUID *a2,
        int a3,
        _QWORD *a4)
{
  int AnimationClock; // edi
  _QWORD *v7; // r8
  CBaseObject *v8; // rbx
  struct _GUID v10; // [rsp+20h] [rbp-18h] BYREF
  CBaseObject *v11; // [rsp+48h] [rbp+10h] BYREF

  v10 = *a2;
  v11 = 0LL;
  AnimationClock = CAnimationClockCoordinator::GetAnimationClock(a1, &v10, &v11);
  if ( AnimationClock >= 0 )
  {
    v7 = a4;
    v8 = v11;
    AnimationClock = CAnimationClock::GetTime((__int64)v11, a3, v7);
    if ( v8 )
      CBaseObject::Release(v8);
  }
  return (unsigned int)AnimationClock;
}
