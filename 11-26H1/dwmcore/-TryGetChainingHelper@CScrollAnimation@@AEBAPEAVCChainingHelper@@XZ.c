/*
 * XREFs of ?TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ @ 0x18013A9FC
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x18013A5DC (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x18013AA24 (-UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x18013E42C (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 * Callees:
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ @ 0x18013A96C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ.c)
 */

struct CChainingHelper *__fastcall CScrollAnimation::TryGetChainingHelper(CScrollAnimation *this)
{
  struct CInteractionTrackerBase *InteractionTracker; // rax

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  return (struct CChainingHelper *)(*(__int64 (__fastcall **)(struct CInteractionTrackerBase *))(*(_QWORD *)InteractionTracker
                                                                                               + 200LL))(InteractionTracker);
}
