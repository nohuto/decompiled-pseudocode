/*
 * XREFs of sub_1400779D0 @ 0x1400779D0
 * Callers:
 *     sub_140077080 @ 0x140077080 (sub_140077080.c)
 * Callees:
 *     sub_14001821C @ 0x14001821C (sub_14001821C.c)
 *     sub_14001AF20 @ 0x14001AF20 (sub_14001AF20.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1400779D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rsi

  v6 = a1 + 1;
  sub_14001AF20((__int64)(a1 + 1));
  a1[7] = 1LL;
  *a1 = off_1400BDEF0;
  *v6 = off_1400BDED0;
  a1[2] = off_1400BDE88;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *a1 = off_1400BE418;
  *v6 = off_1400BE2E8;
  a1[2] = off_1400BE2A0;
  a1[9] = 0LL;
  a1[8] = a2;
  if ( a2 )
    sub_1400B6010(a2);
  sub_14001821C(a1 + 9, a3);
  return a1;
}
