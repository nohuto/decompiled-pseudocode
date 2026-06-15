/*
 * XREFs of sub_14005FC08 @ 0x14005FC08
 * Callers:
 *     sub_140060370 @ 0x140060370 (sub_140060370.c)
 * Callees:
 *     sub_14005F8C8 @ 0x14005F8C8 (sub_14005F8C8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_14005FC08(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v4 = xmmword_1400E8708;
  if ( (_QWORD)xmmword_1400E8708 == *((_QWORD *)&xmmword_1400E8708 + 1) )
    return sub_14005F8C8(a1, xmmword_1400E8708, a2, a3);
  *(_QWORD *)xmmword_1400E8708 = *a2;
  v5 = *a3;
  *(_QWORD *)(v4 + 8) = *a3;
  if ( v5 )
    sub_1400B6010(v5);
  v6 = xmmword_1400E8708;
  *(_QWORD *)&xmmword_1400E8708 = xmmword_1400E8708 + 16;
  return (_QWORD *)v6;
}
