/*
 * XREFs of ?CalculateValueWorker@CInteractionTrackerScaleAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x1801E1010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::CalculateValueWorker(
        LARGE_INTEGER *this,
        struct CExpressionValueStack *a2,
        struct CalculateValueResult *a3)
{
  QueryPerformanceCounter(this + 66);
  return CScrollAnimation::CalculateValueWorker((CScrollAnimation *)this, a2, a3);
}
