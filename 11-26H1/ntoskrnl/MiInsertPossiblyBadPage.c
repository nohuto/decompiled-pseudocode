/*
 * XREFs of MiInsertPossiblyBadPage @ 0x1403D04D4
 * Callers:
 *     MiProbeUnlockPage @ 0x14028AE60 (MiProbeUnlockPage.c)
 *     MiRebuildLargePage @ 0x14028F484 (MiRebuildLargePage.c)
 *     MiFreeLargeZeroPages @ 0x1402A4B50 (MiFreeLargeZeroPages.c)
 *     MiFinishLargePageFree @ 0x1403CFEB0 (MiFinishLargePageFree.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403D1950 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiFreeLargePageChain @ 0x1403D35CC (MiFreeLargePageChain.c)
 *     MiObtainedPageIsGood @ 0x14042B75C (MiObtainedPageIsGood.c)
 *     MiEnableNewPfns @ 0x1406ED114 (MiEnableNewPfns.c)
 *     MiTransferPartitionPageRun @ 0x14070E734 (MiTransferPartitionPageRun.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x14028D4F0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertDemotedPages @ 0x14042B7D0 (MiInsertDemotedPages.c)
 */

__int64 __fastcall MiInsertPossiblyBadPage(ULONG_PTR a1, int a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v9; // rax
  unsigned __int64 DemandZeroPte; // rax
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = MI_PAGE_TO_FULL_COLOR(a1);
  v5 = 48 * a1 - 0x220000000000LL;
  v11 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL)) + 16LL)
     + 56320 * ((v4 >> 9) & 0x3F);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v11);
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  if ( (*(_QWORD *)(v5 + 40) & 0x10000000000LL) == 0 )
  {
    v7 = (*(_DWORD *)(v5 + 32) & 0x40000000) == 0LL;
LABEL_7:
    MiInsertPageInFreeOrZeroedList(a1);
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return v7;
  }
  v7 = MiPageSizes[(unsigned int)MiGetPfnPageSizeIndex(48 * a1 - 0x220000000000LL)];
  if ( (*(_QWORD *)(v5 + 40) & 0x20000000000LL) == 0 )
    goto LABEL_7;
  *(_DWORD *)(v5 + 32) = *(_DWORD *)(v5 + 32) & 0xFFF8FFFF | 0x50000;
  v9 = *(_QWORD *)(v5 + 16);
  if ( a2 == 1 )
  {
    DemandZeroPte = v9 & 0xFFFFFFFFFFFFFC1FuLL;
  }
  else if ( v9 )
  {
    DemandZeroPte = v9 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
  }
  else
  {
    DemandZeroPte = MiMakeDemandZeroPte(4);
  }
  *(_QWORD *)(v5 + 16) = DemandZeroPte;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return MiInsertDemotedPages(v6, 48 * a1 - 0x220000000000LL, 0LL, 3LL);
}
