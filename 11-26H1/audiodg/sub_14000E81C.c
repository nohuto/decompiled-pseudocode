/*
 * XREFs of sub_14000E81C @ 0x14000E81C
 * Callers:
 *     sub_140080F10 @ 0x140080F10 (sub_140080F10.c)
 *     sub_1400840C8 @ 0x1400840C8 (sub_1400840C8.c)
 *     sub_140085AA0 @ 0x140085AA0 (sub_140085AA0.c)
 * Callees:
 *     sub_14000DD74 @ 0x14000DD74 (sub_14000DD74.c)
 */

_QWORD *__fastcall sub_14000E81C(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  _QWORD *v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rax
  _QWORD *result; // rax

  v2 = a1[1];
  sub_14000DD74((__int64)a1, (unsigned __int64)a2);
  v5 = (_QWORD *)a1[4];
  v6 = *v5;
  v5[2] = *a2;
  a1[4] = v6;
  v5[1] = v2;
  *v5 = 0LL;
  ++a1[2];
  v7 = (_QWORD *)a1[1];
  if ( v7 )
    *v7 = v5;
  else
    *a1 = v5;
  result = v5;
  a1[1] = v5;
  return result;
}
