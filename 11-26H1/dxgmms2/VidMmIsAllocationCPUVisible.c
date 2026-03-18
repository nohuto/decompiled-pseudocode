/*
 * XREFs of VidMmIsAllocationCPUVisible @ 0x14011B4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall VidMmIsAllocationCPUVisible(__int64 a1)
{
  return **(_BYTE **)(a1 + 368) & 1;
}
