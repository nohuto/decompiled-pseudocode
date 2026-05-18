/*
 * XREFs of sub_1800906B4 @ 0x1800906B4
 * Callers:
 *     sub_1800903A4 @ 0x1800903A4 (sub_1800903A4.c)
 *     sub_1800DE10F @ 0x1800DE10F (sub_1800DE10F.c)
 * Callees:
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 */

__int64 __fastcall sub_1800906B4(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1800129D0(v2 + 16);
  return sub_180027ACC(a1);
}
