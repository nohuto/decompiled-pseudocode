/*
 * XREFs of MiMovePageToFreeList @ 0x14070D210
 * Callers:
 *     MiCanPageBeScrubbed @ 0x14070BE30 (MiCanPageBeScrubbed.c)
 * Callees:
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MiGetPfnPageSizeIndex @ 0x14028B290 (MiGetPfnPageSizeIndex.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028C8F4 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdatePageMoveInProgressInternal @ 0x1404448A0 (MiUpdatePageMoveInProgressInternal.c)
 */

_BOOL8 __fastcall MiMovePageToFreeList(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbp
  unsigned int PfnPageSizeIndex; // esi
  __int64 v4; // rbx
  __int64 v5; // rdi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 48 * BugCheckParameter2 - 0x220000000000LL;
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(v2);
  v4 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v2 + 40) >> 43) & 0x3FFLL));
  v5 = *(_QWORD *)(v4 + 16) + 56320LL * (unsigned int)MiPageToNode(BugCheckParameter2);
  MiUpdatePageMoveInProgressInternal(v5, PfnPageSizeIndex, 1, 0);
  MiUnlinkFreeOrZeroedPage(BugCheckParameter2, 0LL, 0);
  MiInsertPageInFreeOrZeroedList(BugCheckParameter2);
  MiUpdatePageMoveInProgressInternal(v5, PfnPageSizeIndex, 0, 0);
  _InterlockedOr(v7, 0);
  return (*(_DWORD *)(v2 + 32) & 0x70000) == 0x10000;
}
