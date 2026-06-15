/*
 * XREFs of sub_140048510 @ 0x140048510
 * Callers:
 *     sub_14002B8B0 @ 0x14002B8B0 (sub_14002B8B0.c)
 *     sub_1400825E0 @ 0x1400825E0 (sub_1400825E0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140048510(__int64 a1)
{
  return GetTickCount64() > *(_QWORD *)(a1 + 8);
}
