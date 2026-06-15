/*
 * XREFs of sub_14000DD04 @ 0x14000DD04
 * Callers:
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 *     sub_140047144 @ 0x140047144 (sub_140047144.c)
 *     sub_140064B44 @ 0x140064B44 (sub_140064B44.c)
 *     sub_140080F10 @ 0x140080F10 (sub_140080F10.c)
 *     sub_140081F78 @ 0x140081F78 (sub_140081F78.c)
 *     sub_140082A00 @ 0x140082A00 (sub_140082A00.c)
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 *     sub_1400837C0 @ 0x1400837C0 (sub_1400837C0.c)
 *     sub_140085AA0 @ 0x140085AA0 (sub_140085AA0.c)
 *     sub_1400861E0 @ 0x1400861E0 (sub_1400861E0.c)
 * Callees:
 *     sub_14000DD74 @ 0x14000DD74 (sub_14000DD74.c)
 */

_QWORD *__fastcall sub_14000DD04(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rdi
  _QWORD *v5; // rdx
  __int64 v6; // r8
  _QWORD *result; // rax

  v2 = *a1;
  sub_14000DD74(a1);
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
