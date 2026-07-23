/*
 * XREFs of MiGetNextPageColor @ 0x140442ED0
 * Callers:
 *     MmAllocateMemoryRanges @ 0x14086E160 (MmAllocateMemoryRanges.c)
 *     MiPartitionTransferAllocateHugeRange @ 0x140882D00 (MiPartitionTransferAllocateHugeRange.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A5B120 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x140ABFDA0 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x140AEDA3C (MiAllocateDriverPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x140AF6D60 (MiDoneWithThisPageGetAnother.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3F88C (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextPageColor(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 8);
  return v1 ^ (unsigned int)(unsigned __int8)(v1 ^ _InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u));
}
