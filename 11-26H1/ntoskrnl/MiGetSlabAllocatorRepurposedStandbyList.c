/*
 * XREFs of MiGetSlabAllocatorRepurposedStandbyList @ 0x1402C9B5C
 * Callers:
 *     MiUnlinkProtoPages @ 0x140297A00 (MiUnlinkProtoPages.c)
 *     MiAcquirePageListSynchronization @ 0x14029A450 (MiAcquirePageListSynchronization.c)
 *     MiInsertPageInList @ 0x1402DDC40 (MiInsertPageInList.c)
 *     MiUnlinkPageFromListEx @ 0x1402F7250 (MiUnlinkPageFromListEx.c)
 *     MiUpdatePageAttributeStamp @ 0x1404CD228 (MiUpdatePageAttributeStamp.c)
 * Callees:
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x1402C9C14 (MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
 *     MiGetSlabRepurposedStandbyListWorker @ 0x1402C9C98 (MiGetSlabRepurposedStandbyListWorker.c)
 */

__int64 __fastcall MiGetSlabAllocatorRepurposedStandbyList(__int64 a1, int a2, char a3)
{
  __int64 v3; // rsi
  __int64 v6; // rbx
  unsigned int v7; // eax

  v3 = a2;
  if ( (a3 & 1) == 0 )
    return *(_QWORD *)(*(_QWORD *)(MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY() + 56) + 80LL);
  v6 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v7 = MiPageToNode((a1 + 0x220000000000LL) / 48);
  return MiGetSlabRepurposedStandbyListWorker(232 * v3 + 56320LL * v7 + *(_QWORD *)(v6 + 16) + 14752LL, a1);
}
