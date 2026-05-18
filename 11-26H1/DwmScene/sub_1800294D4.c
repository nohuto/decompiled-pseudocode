/*
 * XREFs of sub_1800294D4 @ 0x1800294D4
 * Callers:
 *     sub_180029BAC @ 0x180029BAC (sub_180029BAC.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800294D4(__int64 a1, __int64 a2)
{
  return *(_QWORD *)a1 == *(_QWORD *)a2 && *(_BYTE *)(a1 + 8) == *(_BYTE *)(a2 + 8);
}
