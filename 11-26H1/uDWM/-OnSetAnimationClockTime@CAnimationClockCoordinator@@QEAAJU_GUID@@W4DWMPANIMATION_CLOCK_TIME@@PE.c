/*
 * XREFs of ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180098C68
 * Callers:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18003CDE4 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18003E990 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180098580 (-SetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnSetAnimationClockTime(
        CAnimationClockCoordinator *a1,
        struct _GUID *a2,
        int a3,
        const union _LARGE_INTEGER *a4)
{
  int AnimationClock; // edi
  const union _LARGE_INTEGER *v7; // r8
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
    AnimationClock = CAnimationClock::SetTime((__int64)v11, a3, v7);
    if ( v8 )
      CBaseObject::Release(v8);
  }
  return (unsigned int)AnimationClock;
}
