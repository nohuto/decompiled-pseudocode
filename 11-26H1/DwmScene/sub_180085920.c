/*
 * XREFs of sub_180085920 @ 0x180085920
 * Callers:
 *     sub_180063230 @ 0x180063230 (sub_180063230.c)
 * Callees:
 *     sub_180085A18 @ 0x180085A18 (sub_180085A18.c)
 */

__int64 __fastcall sub_180085920(__int64 a1, int a2, int a3, int a4)
{
  char v6; // [rsp+20h] [rbp-38h]

  v6 = a3;
  sub_180085A18(a1, a2, a3, a4, v6);
  return a1;
}
