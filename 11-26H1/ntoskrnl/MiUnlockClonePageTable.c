/*
 * XREFs of MiUnlockClonePageTable @ 0x1402ED6FC
 * Callers:
 *     MiCloneVad @ 0x1402EC978 (MiCloneVad.c)
 *     MiBuildForkPte @ 0x1402ECBF4 (MiBuildForkPte.c)
 *     MiDuplicateCloneLeaf @ 0x1402EF3F4 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1402F04A0 (MiHandleForkTransitionPte.c)
 *     MiReplenishCloneLeafPage @ 0x1402F0A60 (MiReplenishCloneLeafPage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 */

void __fastcall MiUnlockClonePageTable(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 352);
  if ( v4 )
  {
    MiFlushTbList(v4);
    MiReleaseProcessorFlushList();
    *(_QWORD *)(a1 + 352) = 0LL;
  }
  MiUnlockPageTableInternal(*(_QWORD *)(a1 + 32), a2);
}
