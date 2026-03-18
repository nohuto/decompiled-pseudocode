/*
 * XREFs of ?ShouldChainAllForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x18028E4AC
 * Callers:
 *     ?ShouldChainAllForAxis@CInteractionTracker@@UEBA_NW4ScrollAxis@@@Z @ 0x1802711E0 (-ShouldChainAllForAxis@CInteractionTracker@@UEBA_NW4ScrollAxis@@@Z.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker2@@UEBA_NW4ScrollAxis@@@Z @ 0x1802772B0 (-ShouldChainAllForAxis@CInteractionTracker2@@UEBA_NW4ScrollAxis@@@Z.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18013AF34 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x18013AFA0 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18013B170 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall InteractionSourceManager::ShouldChainAllForAxis(InteractionSourceManager *a1, unsigned int a2)
{
  char v4; // bl
  InteractionSourceManager *v5; // rcx
  struct CManipulation *ActiveManipulation; // rax
  __int64 v7; // r10

  v4 = 0;
  if ( InteractionSourceManager::TryGetActiveChainingHelper(a1) && InteractionSourceManager::HasActiveManipulation(a1) )
  {
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(v5);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, struct CManipulation *))(*(_QWORD *)v7 + 264LL))(
             v7,
             a2,
             ActiveManipulation);
  }
  return v4;
}
