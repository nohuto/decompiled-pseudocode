/*
 * XREFs of VidMmIsAllocationSysmemOnly @ 0x140039850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall VidMmIsAllocationSysmemOnly(__int64 a1)
{
  return (*(_DWORD *)(**(_QWORD **)a1 + 24LL) & 2) != 0;
}
