/*
 * XREFs of ExpSizeHeapPool @ 0x1404FDF40
 * Callers:
 *     ObpTraceAllocateMemory @ 0x140531C58 (ObpTraceAllocateMemory.c)
 *     ObpTraceFreeMemory @ 0x140532F70 (ObpTraceFreeMemory.c)
 *     ViPostPoolAllocation @ 0x140C4A790 (ViPostPoolAllocation.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     ExpRemoveTagForBigPages @ 0x14029A3C0 (ExpRemoveTagForBigPages.c)
 */

__int64 __fastcall ExpSizeHeapPool(unsigned __int64 a1)
{
  ULONG_PTR v1; // rax
  ULONG_PTR v2; // r10
  int v4; // [rsp+50h] [rbp+8h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  v4 = 0;
  v7 = 0LL;
  v6 = 0LL;
  if ( (a1 & 0xFFF) != 0 )
    return 16LL * (unsigned __int8)*(_WORD *)(a1 - 14);
  v1 = MmDeterminePoolType(a1);
  ExpRemoveTagForBigPages(v2, v1, 0, &v4, &v7, &v5, (ULONG_PTR *)&v6);
  return v5;
}
