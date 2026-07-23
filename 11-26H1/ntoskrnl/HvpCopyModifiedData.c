/*
 * XREFs of HvpCopyModifiedData @ 0x140B10848
 * Callers:
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x140B10798 (HvpApplyLogEntryDataToFileBackedHive.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpMapEntryGetBlockAddress @ 0x1408BF840 (HvpMapEntryGetBlockAddress.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x140B10908 (HvpMapEntryReleaseBlockAddress.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 *     HvpGetBinContextInitialize @ 0x140C5EAA0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpCopyModifiedData(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int i; // ebx
  __int64 CellMap; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  unsigned int v13; // r10d
  void *BlockAddress; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int16 v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = 0;
  result = HvpGetBinContextInitialize(&v17);
  for ( i = 0; i < a4; i += 4096 )
  {
    CellMap = HvpGetCellMap(BugCheckParameter2, i + a2);
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v13, 0xC47uLL);
    BlockAddress = (void *)HvpMapEntryGetBlockAddress(v11, CellMap, (__int64)&v17, v12);
    memmove(BlockAddress, (const void *)(a3 + i), 0x1000uLL);
    result = HvpMapEntryReleaseBlockAddress(v16, v15, &v17);
  }
  return result;
}
