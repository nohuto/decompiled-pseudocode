/*
 * XREFs of MiGetSlabAllocatorRepurposedStandbyList @ 0x1402AB91C
 * Callers:
 *     MiUnlinkProtoPages @ 0x140296F60 (MiUnlinkProtoPages.c)
 *     MiAcquirePageListSynchronization @ 0x1402999B0 (MiAcquirePageListSynchronization.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiUpdatePageAttributeStamp @ 0x1404C69C8 (MiUpdatePageAttributeStamp.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x1402AB9D4 (MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
 *     MiGetSlabRepurposedStandbyListWorker @ 0x1402ABA58 (MiGetSlabRepurposedStandbyListWorker.c)
 */

__int64 __fastcall MiGetSlabAllocatorRepurposedStandbyList(__int64 a1, int a2, char a3)
{
  __int64 v3; // rsi
  __int64 v6; // rbx
  unsigned int v7; // eax

  v3 = a2;
  if ( (a3 & 1) == 0 )
    return *(_QWORD *)(*(_QWORD *)(MI_GET_SLAB_STANDBY_PAGE_SLAB_ENTRY() + 56) + 80LL);
  v6 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v7 = MiPageToNode((a1 + 0x220000000000LL) / 48);
  return MiGetSlabRepurposedStandbyListWorker(232 * v3 + 56320LL * v7 + *(_QWORD *)(v6 + 16) + 14752LL, a1);
}
