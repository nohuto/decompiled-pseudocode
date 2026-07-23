/*
 * XREFs of MmGrowKernelStack @ 0x1406F8470
 * Callers:
 *     <none>
 * Callees:
 *     MmGrowKernelStackEx @ 0x1403D4420 (MmGrowKernelStackEx.c)
 */

__int64 __fastcall MmGrowKernelStack(__int64 a1)
{
  return MmGrowKernelStackEx(a1, (unsigned int)KeKernelLargeStackCommit);
}
