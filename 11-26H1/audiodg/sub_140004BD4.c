/*
 * XREFs of sub_140004BD4 @ 0x140004BD4
 * Callers:
 *     sub_1400041F8 @ 0x1400041F8 (sub_1400041F8.c)
 * Callees:
 *     sub_140004B3C @ 0x140004B3C (sub_140004B3C.c)
 */

_QWORD *__fastcall sub_140004BD4(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rdi
  _QWORD *v5; // rdx
  __int64 v6; // r8
  _QWORD *result; // rax

  v2 = *a1;
  sub_140004B3C((__int64)a1, (unsigned __int64)a2);
  v5 = (_QWORD *)a1[4];
  v6 = *v5;
  v5[2] = *a2;
  a1[4] = v6;
  v5[1] = 0LL;
  *v5 = v2;
  ++a1[2];
  if ( *a1 )
    *(_QWORD *)(*a1 + 8LL) = v5;
  else
    a1[1] = v5;
  result = v5;
  *a1 = v5;
  return result;
}
