/*
 * XREFs of sub_140011318 @ 0x140011318
 * Callers:
 *     sub_1400103B0 @ 0x1400103B0 (sub_1400103B0.c)
 *     sub_1400109C4 @ 0x1400109C4 (sub_1400109C4.c)
 *     sub_140010AA0 @ 0x140010AA0 (sub_140010AA0.c)
 *     sub_1400110B8 @ 0x1400110B8 (sub_1400110B8.c)
 *     sub_140011180 @ 0x140011180 (sub_140011180.c)
 *     sub_1400112A8 @ 0x1400112A8 (sub_1400112A8.c)
 *     sub_140011D40 @ 0x140011D40 (sub_140011D40.c)
 *     sub_140012430 @ 0x140012430 (sub_140012430.c)
 *     sub_14001285C @ 0x14001285C (sub_14001285C.c)
 *     sub_14005BF90 @ 0x14005BF90 (sub_14005BF90.c)
 *     sub_140061CB0 @ 0x140061CB0 (sub_140061CB0.c)
 *     sub_140061DAC @ 0x140061DAC (sub_140061DAC.c)
 *     sub_140063214 @ 0x140063214 (sub_140063214.c)
 *     sub_140063FBC @ 0x140063FBC (sub_140063FBC.c)
 *     sub_14006BFEC @ 0x14006BFEC (sub_14006BFEC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140011318(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v5; // r9
  _QWORD *result; // rax

  v3 = a2;
  if ( a2 )
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % a2;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v3 < a3 )
      return 0LL;
    v5 = a3 * v3;
    if ( ~v5 < 8 )
      return 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  result = (_QWORD *)_o_malloc(v5 + 8, a2);
  if ( result )
  {
    *result = *a1;
    *a1 = result;
    return result;
  }
  return 0LL;
}
