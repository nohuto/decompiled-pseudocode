/*
 * XREFs of ?CanGetTargetResource@CResourceWeakRef@@KA_NXZ @ 0x18013A9B0
 * Callers:
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ @ 0x18013A96C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTrackerBase@@XZ.c)
 *     ?GetOwner@CNaturalAnimationScalarForceAdapter@@AEBAPEAVCNaturalAnimation@@XZ @ 0x18028EE88 (-GetOwner@CNaturalAnimationScalarForceAdapter@@AEBAPEAVCNaturalAnimation@@XZ.c)
 * Callees:
 *     ?IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ @ 0x18004CD80 (-IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ.c)
 */

bool CResourceWeakRef::CanGetTargetResource(void)
{
  return g_pComposition
      && (GetCurrentThreadId() == CComposition::s_compositionThreadId
       || CTreeLock::IsLockedByCurrentThread((CComposition *)((char *)g_pComposition + 5696)));
}
