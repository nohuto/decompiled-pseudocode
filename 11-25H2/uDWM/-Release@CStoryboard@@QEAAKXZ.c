/*
 * XREFs of ?Release@CStoryboard@@QEAAKXZ @ 0x18006D9A4
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180027B04 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180027FE4 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18002B534 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180050C10 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180069860 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18006D8F4 (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800830E8 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ?Destroy@CStoryboard@@UEAAXXZ @ 0x180087850 (-Destroy@CStoryboard@@UEAAXXZ.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x180098CCC (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x1800A76A8 (--1CAnimationScheduler@@QEAA@XZ.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800CA754 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180027FE4 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 */

__int64 __fastcall CStoryboard::Release(CStoryboard *this)
{
  if ( *((_DWORD *)this + 2) == 1 )
    CStoryboard::_Cleanup(this);
  return CBaseObject::Release(this);
}
