/*
 * XREFs of HvpTruncateBins @ 0x1408BEFE0
 * Callers:
 *     HvStoreModifiedData @ 0x1408BD840 (HvStoreModifiedData.c)
 * Callees:
 *     CmpTestRegistryLockExclusive @ 0x1402611A0 (CmpTestRegistryLockExclusive.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HvFreeHivePartial @ 0x1408BE014 (HvFreeHivePartial.c)
 *     HvpMapEntryGetFreeBin @ 0x1408BF5C0 (HvpMapEntryGetFreeBin.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 */

char __fastcall HvpTruncateBins(ULONG_PTR BugCheckParameter2)
{
  unsigned int *v2; // r14
  signed int i; // ebx
  unsigned int j; // edi
  __int64 CellMap; // rax
  unsigned int v6; // r10d
  __int64 FreeBin; // rax

  v2 = (unsigned int *)(BugCheckParameter2 + 280);
  for ( i = 0; i < 2; ++i )
  {
    for ( j = *v2; j; j = *(_DWORD *)(FreeBin + 20) )
    {
      CellMap = HvpGetCellMap(BugCheckParameter2, j + (i << 31) - 4096);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v6, 0x13B6uLL);
      FreeBin = HvpMapEntryGetFreeBin(CellMap);
      if ( !FreeBin )
        break;
    }
    if ( i || j + 0x10000 <= *(_DWORD *)(BugCheckParameter2 + 1800) && CmpTestRegistryLockExclusive() )
      HvFreeHivePartial(BugCheckParameter2, j, i);
    v2 += 158;
  }
  return 0;
}
