/*
 * XREFs of sub_1400840C8 @ 0x1400840C8
 * Callers:
 *     sub_140080F10 @ 0x140080F10 (sub_140080F10.c)
 *     sub_140085AA0 @ 0x140085AA0 (sub_140085AA0.c)
 * Callees:
 *     sub_14000DCA4 @ 0x14000DCA4 (sub_14000DCA4.c)
 *     sub_14000E81C @ 0x14000E81C (sub_14000E81C.c)
 */

__int64 *__fastcall sub_1400840C8(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 *result; // rax

  if ( !a2 )
    return sub_14000E81C(a1, a3);
  result = sub_14000DCA4((__int64)a1, a3, (__int64)a2, *a2);
  if ( *a2 )
    *(_QWORD *)(*a2 + 8) = result;
  else
    a1[1] = result;
  *a2 = (__int64)result;
  return result;
}
