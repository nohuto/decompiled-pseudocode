/*
 * XREFs of sub_140007360 @ 0x140007360
 * Callers:
 *     pfnwk @ 0x140007280 (pfnwk.c)
 *     sub_1400075D4 @ 0x1400075D4 (sub_1400075D4.c)
 *     sub_140033C84 @ 0x140033C84 (sub_140033C84.c)
 * Callees:
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140007360(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    sub_140007588();
  j_j__o_free(a1, 24LL);
  return a1;
}
