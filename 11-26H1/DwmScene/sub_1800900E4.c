/*
 * XREFs of sub_1800900E4 @ 0x1800900E4
 * Callers:
 *     sub_1800923D0 @ 0x1800923D0 (sub_1800923D0.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 */

__int64 __fastcall sub_1800900E4(__int64 a1, __int64 a2, _BYTE *a3)
{
  sub_1800181BC((_QWORD *)a1, a2);
  *(_BYTE *)(a1 + 32) = *a3;
  return a1;
}
