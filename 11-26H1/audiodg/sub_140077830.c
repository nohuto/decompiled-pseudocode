/*
 * XREFs of sub_140077830 @ 0x140077830
 * Callers:
 *     pfnwa @ 0x14007EB40 (pfnwa.c)
 * Callees:
 *     sub_14001821C @ 0x14001821C (sub_14001821C.c)
 *     sub_14001AF20 @ 0x14001AF20 (sub_14001AF20.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_140077830(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rdi

  v4 = a1 + 1;
  sub_14001AF20((__int64)(a1 + 1));
  a1[7] = 1LL;
  *a1 = off_1400BDFE8;
  *v4 = off_1400BDFC8;
  a1[2] = off_1400BDF80;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *a1 = off_1400BE328;
  *v4 = off_1400BE308;
  a1[2] = off_1400BE188;
  a1[8] = 0LL;
  sub_14001821C(a1 + 8, a2);
  return a1;
}
