/*
 * XREFs of MiGetNextPageColor @ 0x14044ADA0
 * Callers:
 *     MmAllocateMemoryRanges @ 0x140867D80 (MmAllocateMemoryRanges.c)
 *     MiPartitionTransferAllocateHugeRange @ 0x14087C900 (MiPartitionTransferAllocateHugeRange.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A51E30 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x140ABD7B0 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x140AEAC6C (MiAllocateDriverPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x140AF46EC (MiDoneWithThisPageGetAnother.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3D7BC (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextPageColor(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 8);
  return v1 ^ (unsigned int)(unsigned __int8)(v1 ^ _InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u));
}
