/*
 * XREFs of ?ShouldChainForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@_N@Z @ 0x18013AD24
 * Callers:
 *     ?ShouldChainForAxis@CInteractionTracker@@UEBA_NW4ScrollAxis@@_N@Z @ 0x180138D80 (-ShouldChainForAxis@CInteractionTracker@@UEBA_NW4ScrollAxis@@_N@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker2@@UEBA_NW4ScrollAxis@@_N@Z @ 0x1802772D0 (-ShouldChainForAxis@CInteractionTracker2@@UEBA_NW4ScrollAxis@@_N@Z.c)
 * Callees:
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x18013AFA0 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18013B170 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall InteractionSourceManager::ShouldChainForAxis(InteractionSourceManager *a1, unsigned int a2, char a3)
{
  char v6; // bl
  struct CManipulation *ActiveManipulation; // rdi
  InteractionSourceManager *v8; // rcx
  __int64 v9; // r9

  v6 = 0;
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(a1);
  if ( InteractionSourceManager::TryGetActiveChainingHelper(v8) && ActiveManipulation )
  {
    LOBYTE(v9) = a3;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct CManipulation *, __int64))(**(_QWORD **)a1 + 248LL))(
             *(_QWORD *)a1,
             a2,
             ActiveManipulation,
             v9);
  }
  return v6;
}
