/*
 * XREFs of MmGrowKernelStack @ 0x1406F3800
 * Callers:
 *     <none>
 * Callees:
 *     MmGrowKernelStackEx @ 0x1403D1450 (MmGrowKernelStackEx.c)
 */

__int64 __fastcall MmGrowKernelStack(__int64 a1)
{
  return MmGrowKernelStackEx(a1, (unsigned int)KeKernelLargeStackCommit);
}
