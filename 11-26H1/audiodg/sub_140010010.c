/*
 * XREFs of sub_140010010 @ 0x140010010
 * Callers:
 *     sub_14000FFE4 @ 0x14000FFE4 (sub_14000FFE4.c)
 *     sub_140010230 @ 0x140010230 (sub_140010230.c)
 *     sub_14001DA2C @ 0x14001DA2C (sub_14001DA2C.c)
 *     sub_14003DBDC @ 0x14003DBDC (sub_14003DBDC.c)
 *     sub_1400574A0 @ 0x1400574A0 (sub_1400574A0.c)
 *     sub_140069B3C @ 0x140069B3C (sub_140069B3C.c)
 * Callees:
 *     sub_14001003C @ 0x14001003C (sub_14001003C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140010010(__int64 a1)
{
  sub_14001003C();
  j_j__o_free(a1, 344LL);
  return a1;
}
