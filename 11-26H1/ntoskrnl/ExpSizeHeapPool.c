/*
 * XREFs of ExpSizeHeapPool @ 0x14025ECFC
 * Callers:
 *     ObpTraceAllocateMemory @ 0x14052F738 (ObpTraceAllocateMemory.c)
 *     ObpTraceFreeMemory @ 0x140530A70 (ObpTraceFreeMemory.c)
 *     ViPostPoolAllocation @ 0x140C44780 (ViPostPoolAllocation.c)
 * Callees:
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     ExpRemoveTagForBigPages @ 0x14029AE60 (ExpRemoveTagForBigPages.c)
 */

__int64 __fastcall ExpSizeHeapPool(__int64 a1)
{
  ULONG_PTR v1; // rax
  ULONG_PTR v2; // r10
  __int64 v4; // [rsp+58h] [rbp+10h] BYREF
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v6 = 0LL;
  v5 = 0LL;
  if ( (a1 & 0xFFF) != 0 )
    return 16LL * (unsigned __int8)*(_WORD *)(a1 - 14);
  v1 = MmDeterminePoolType();
  ExpRemoveTagForBigPages(v2, v1, (__int64)&v6, (__int64)&v4, (__int64)&v5);
  return v4;
}
