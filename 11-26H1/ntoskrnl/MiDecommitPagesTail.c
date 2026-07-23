/*
 * XREFs of MiDecommitPagesTail @ 0x1404438DC
 * Callers:
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiDeleteEmptyPageTableTail @ 0x140443810 (MiDeleteEmptyPageTableTail.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070F118 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiDecommitFreePagesTail @ 0x1402BC510 (MiDecommitFreePagesTail.c)
 *     MiRemoveWsleList @ 0x1402CC5B0 (MiRemoveWsleList.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiReducePteUseCount @ 0x1403631B0 (MiReducePteUseCount.c)
 *     MiDecayPfnFullyInitialized @ 0x140491EA8 (MiDecayPfnFullyInitialized.c)
 */

void __fastcall MiDecommitPagesTail(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi
  _SLIST_ENTRY *v7; // rcx
  char v8; // di
  unsigned __int64 v9; // rdx

  v2 = *(_DWORD *)(a1 + 96);
  if ( v2 )
  {
    v5 = *(_QWORD *)(a1 + 80) - 8LL;
    if ( (v5 < 0xFFFFF6FB7DBED000uLL || v5 > 0xFFFFF6FB7DBEDFFFuLL) && (unsigned int)MiReducePteUseCount(a1, v5, v2) )
      *(_DWORD *)(a1 + 100) |= 2u;
    *(_DWORD *)(a1 + 96) = 0;
  }
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    MiFlushTbList(*(_QWORD *)(a1 + 16));
    MiDecommitFreePagesTail(a1);
    if ( *(_DWORD *)(v6 + 16488) )
    {
      if ( (*(_DWORD *)(a1 + 116) & 0x100) == 0 )
        MiRemoveWsleList(*(_QWORD *)(a1 + 32), v6);
      *(_DWORD *)(v6 + 16488) = 0;
    }
    *(_DWORD *)(v6 + 12376) = 0;
    MiReleaseProcessorFlushList();
    v7 = *(_SLIST_ENTRY **)(a1 + 104);
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( v7 )
    {
      MiDecayPfnFullyInitialized(v7);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
  }
  v8 = *(_BYTE *)(a1 + 101);
  if ( v8 != 17 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
        MiUnlockWorkingSetExclusive(*(_QWORD *)(a1 + 32), *(_BYTE *)(a1 + 101));
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 56);
      if ( v9 )
      {
        MiUnlockPageTableInternal(*(_QWORD *)(a1 + 32), v9);
        *(_QWORD *)(a1 + 56) = 0LL;
      }
      LOBYTE(v9) = v8;
      MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 32), v9);
    }
    *(_BYTE *)(a1 + 101) = 17;
  }
}
