/*
 * XREFs of sub_180090324 @ 0x180090324
 * Callers:
 *     sub_1800903A4 @ 0x1800903A4 (sub_1800903A4.c)
 * Callees:
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 */

char __fastcall sub_180090324(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  sub_1800181BC((_QWORD *)a2, a3);
  result = *(_BYTE *)(a3 + 32);
  *(_BYTE *)(a2 + 32) = result;
  return result;
}
