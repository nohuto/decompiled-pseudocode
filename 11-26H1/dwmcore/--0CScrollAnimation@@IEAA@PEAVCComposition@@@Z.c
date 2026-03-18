/*
 * XREFs of ??0CScrollAnimation@@IEAA@PEAVCComposition@@@Z @ 0x18020C100
 * Callers:
 *     ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18020C068 (--0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CInteractionTrackerScaleAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18020C0B4 (--0CInteractionTrackerScaleAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CBaseExpression@@IEAA@PEAVCComposition@@@Z @ 0x1801A7F64 (--0CBaseExpression@@IEAA@PEAVCComposition@@@Z.c)
 */

CScrollAnimation *__fastcall CScrollAnimation::CScrollAnimation(CScrollAnimation *this, struct CComposition *a2)
{
  __int64 v2; // rcx

  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)(v2 + 344) = 0LL;
  *(_QWORD *)(v2 + 352) = 0LL;
  *(_QWORD *)(v2 + 360) = 0LL;
  *(_DWORD *)(v2 + 368) = 0;
  return (CScrollAnimation *)v2;
}
