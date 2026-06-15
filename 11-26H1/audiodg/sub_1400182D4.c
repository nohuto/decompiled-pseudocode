/*
 * XREFs of sub_1400182D4 @ 0x1400182D4
 * Callers:
 *     sub_140012C9C @ 0x140012C9C (sub_140012C9C.c)
 *     sub_14001727C @ 0x14001727C (sub_14001727C.c)
 *     sub_14001826C @ 0x14001826C (sub_14001826C.c)
 *     sub_140019100 @ 0x140019100 (sub_140019100.c)
 *     sub_140040EE0 @ 0x140040EE0 (sub_140040EE0.c)
 *     sub_140044864 @ 0x140044864 (sub_140044864.c)
 * Callees:
 *     sub_140017D8C @ 0x140017D8C (sub_140017D8C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_1400182D4(_QWORD *a1)
{
  sub_140017D8C((__int64)a1);
  *a1 = off_1400B8720;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  return a1;
}
