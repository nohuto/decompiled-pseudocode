/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x14036D880
 * Callers:
 *     MiTradeActivePage @ 0x140294DF8 (MiTradeActivePage.c)
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiGetPageTablePages @ 0x14033BE80 (MiGetPageTablePages.c)
 *     MiInitializeTransitionPfn @ 0x14036C744 (MiInitializeTransitionPfn.c)
 *     MiCopyOnWriteInitializeTargetPage @ 0x14036D3E8 (MiCopyOnWriteInitializeTargetPage.c)
 *     MiCopyDataPageToImagePage @ 0x14036E218 (MiCopyDataPageToImagePage.c)
 *     MiSwapStackPage @ 0x140409E34 (MiSwapStackPage.c)
 *     MiMapPageFileHash @ 0x140499D94 (MiMapPageFileHash.c)
 *     MiDeleteSubsectionLargePages @ 0x14050A96C (MiDeleteSubsectionLargePages.c)
 *     MiPerformFinalZeroing @ 0x14050D60C (MiPerformFinalZeroing.c)
 *     MiCreatePfnTemplate @ 0x1406EBD98 (MiCreatePfnTemplate.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406F4F60 (MiUpdateLargePageSectionPfns.c)
 *     MiAllocateDummyPage @ 0x140CF89FC (MiAllocateDummyPage.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnTbFlushStamp(__int64 a1, __int64 a2, int a3)
{
  signed __int64 v3; // r9
  unsigned __int64 v5; // r10
  signed __int64 v6; // rax
  signed __int64 v7; // rcx

  v3 = *(_QWORD *)(a1 + 24);
  v5 = (a2 << 59) ^ (v3 ^ (a2 << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 24) = v5;
  }
  else
  {
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v5, v3);
    if ( v3 != v6 )
    {
      do
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(a1 + 24),
               (a2 << 59) ^ (v6 ^ (a2 << 59)) & 0xC7FFFFFFFFFFFFFFuLL,
               v6);
      }
      while ( v7 != v6 );
    }
  }
}
