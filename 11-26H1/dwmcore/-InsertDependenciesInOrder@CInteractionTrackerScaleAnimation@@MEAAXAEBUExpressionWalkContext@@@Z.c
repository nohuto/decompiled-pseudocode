/*
 * XREFs of ?InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAXAEBUExpressionWalkContext@@@Z @ 0x1801DF820
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ @ 0x18013A96C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ.c)
 */

void __fastcall CInteractionTrackerScaleAnimation::InsertDependenciesInOrder(
        CInteractionTrackerScaleAnimation *this,
        const struct ExpressionWalkContext *a2)
{
  struct CInteractionTrackerBase *InteractionTracker; // rax

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  (*(void (__fastcall **)(struct CInteractionTrackerBase *, const struct ExpressionWalkContext *, _QWORD))(*(_QWORD *)InteractionTracker + 328LL))(
    InteractionTracker,
    a2,
    *((unsigned int *)this + 71));
}
