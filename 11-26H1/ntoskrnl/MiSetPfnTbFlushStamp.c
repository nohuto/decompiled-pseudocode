/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x14036BAE0
 * Callers:
 *     MiTradeActivePage @ 0x140295898 (MiTradeActivePage.c)
 *     MiSwapNumaStandbyPage @ 0x1402C8D30 (MiSwapNumaStandbyPage.c)
 *     MiGetPageTablePages @ 0x140339E00 (MiGetPageTablePages.c)
 *     MiInitializeTransitionPfn @ 0x14036A9A4 (MiInitializeTransitionPfn.c)
 *     MiCopyOnWriteInitializeTargetPage @ 0x14036B648 (MiCopyOnWriteInitializeTargetPage.c)
 *     MiCopyDataPageToImagePage @ 0x14036C478 (MiCopyDataPageToImagePage.c)
 *     MiSwapStackPage @ 0x140415804 (MiSwapStackPage.c)
 *     MiMapPageFileHash @ 0x1404A0244 (MiMapPageFileHash.c)
 *     MiDeleteSubsectionLargePages @ 0x140510EFC (MiDeleteSubsectionLargePages.c)
 *     MiPerformFinalZeroing @ 0x140513B9C (MiPerformFinalZeroing.c)
 *     MiCreatePfnTemplate @ 0x1406E70E8 (MiCreatePfnTemplate.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406F02F0 (MiUpdateLargePageSectionPfns.c)
 *     MiAllocateDummyPage @ 0x140CF267C (MiAllocateDummyPage.c)
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
