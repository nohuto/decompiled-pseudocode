/*
 * XREFs of MiPartitionTransferAllocateLargePages @ 0x140882E30
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x140B632C4 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiZeroLargePage @ 0x1402A0F54 (MiZeroLargePage.c)
 *     MiFreeMdlPageRun @ 0x1403CE04C (MiFreeMdlPageRun.c)
 *     MiFindLargeNodePage @ 0x1403D3884 (MiFindLargeNodePage.c)
 *     MiHugePageOperation @ 0x140709E08 (MiHugePageOperation.c)
 *     MiAddRangeToPartitionTree @ 0x14070CED0 (MiAddRangeToPartitionTree.c)
 */

__int64 __fastcall MiPartitionTransferAllocateLargePages(__int64 a1)
{
  BOOL v2; // edi
  unsigned int v3; // esi
  __int64 LargeNodePage; // rax
  __int64 v5; // r14
  unsigned int v7; // edi
  __int64 PfnPageSizeIndex; // rbp
  __int64 v9; // r8
  unsigned __int64 v10; // rbp

  LOBYTE(v2) = 1;
  v3 = (*(_DWORD *)(a1 + 28) & 0x580) == 0;
  if ( (*(_DWORD *)(a1 + 28) & 0x60) == 0 )
    v2 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 64) < 0x40000uLL;
  while ( 1 )
  {
    LargeNodePage = MiFindLargeNodePage(*(_QWORD *)a1, **(_DWORD **)(a1 + 48), v2, v3, *(_DWORD *)(a1 + 32), 1, a1 + 88);
    v5 = LargeNodePage;
    if ( LargeNodePage )
      break;
    *(_QWORD *)(a1 + 48) += 4LL;
    if ( *(_QWORD *)(a1 + 48) == *(_QWORD *)(a1 + 56) )
      return 3221225495LL;
  }
  v7 = 0;
  PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(LargeNodePage);
  if ( (*(_QWORD *)(v5 + 16) & 0x3E0LL) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 1) != 0 )
      goto LABEL_12;
    if ( (_DWORD)PfnPageSizeIndex )
      MiZeroLargePage(0LL, v5, PfnPageSizeIndex, 1u, 0);
    else
      MiHugePageOperation(*(_QWORD *)a1, (v5 + 0x220000000000LL) / 48, v9, 0);
  }
  v7 = 1;
LABEL_12:
  v10 = MiPageSizes[PfnPageSizeIndex];
  if ( (unsigned int)MiAddRangeToPartitionTree((unsigned __int64 *)(a1 + 40), (v5 + 0x220000000000LL) / 48, v10, v7) )
  {
    *(_QWORD *)(a1 + 64) += v10;
    return 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 72) += MiFreeMdlPageRun((v5 + 0x220000000000LL) / 48, v10, v7, 5, 0LL);
    return 3221225626LL;
  }
}
