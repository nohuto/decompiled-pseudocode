/*
 * XREFs of sub_140047144 @ 0x140047144
 * Callers:
 *     sub_140080F10 @ 0x140080F10 (sub_140080F10.c)
 *     sub_140085AA0 @ 0x140085AA0 (sub_140085AA0.c)
 * Callees:
 *     sub_14000DCA4 @ 0x14000DCA4 (sub_14000DCA4.c)
 *     sub_14000DD04 @ 0x14000DD04 (sub_14000DD04.c)
 */

__int64 *__fastcall sub_140047144(__int64 **a1, __int64 a2, __int64 *a3)
{
  __int64 *result; // rax
  __int64 **v6; // rcx

  if ( !a2 )
    return sub_14000DD04(a1, a3);
  result = sub_14000DCA4((__int64)a1, a3, *(_QWORD *)(a2 + 8), a2);
  v6 = *(__int64 ***)(a2 + 8);
  if ( v6 )
    *v6 = result;
  else
    *a1 = result;
  *(_QWORD *)(a2 + 8) = result;
  return result;
}
