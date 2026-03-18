/*
 * XREFs of ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18020C068
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18013CFC0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker2@@AEAAJXZ @ 0x18013E7AC (-EnsureInteractionAnimations@CInteractionTracker2@@AEAAJXZ.c)
 * Callees:
 *     ??0CMotion@@QEAA@XZ @ 0x1801B713C (--0CMotion@@QEAA@XZ.c)
 *     ??0CScrollAnimation@@IEAA@PEAVCComposition@@@Z @ 0x18020C100 (--0CScrollAnimation@@IEAA@PEAVCComposition@@@Z.c)
 */

CInteractionTrackerPositionAnimation *__fastcall CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(
        CInteractionTrackerPositionAnimation *this,
        struct CComposition *a2)
{
  CScrollAnimation::CScrollAnimation(this, a2);
  *(_QWORD *)this = &CInteractionTrackerPositionAnimation::`vftable';
  CMotion::CMotion((CInteractionTrackerPositionAnimation *)((char *)this + 400));
  *((_QWORD *)this + 50) = &CPositionMotion::`vftable';
  return this;
}
