/*
 * XREFs of MiUnlockClonePageTable @ 0x14030B67C
 * Callers:
 *     MiCloneVad @ 0x14030A8F8 (MiCloneVad.c)
 *     MiBuildForkPte @ 0x14030AB74 (MiBuildForkPte.c)
 *     MiDuplicateCloneLeaf @ 0x14030D374 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x14030E420 (MiHandleForkTransitionPte.c)
 *     MiReplenishCloneLeafPage @ 0x14030E9E0 (MiReplenishCloneLeafPage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 *     MiReleaseProcessorFlushList @ 0x1403613C0 (MiReleaseProcessorFlushList.c)
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
