/*
 * XREFs of sub_140077EA4 @ 0x140077EA4
 * Callers:
 *     sub_140077EC8 @ 0x140077EC8 (sub_140077EC8.c)
 *     sub_140078590 @ 0x140078590 (sub_140078590.c)
 * Callees:
 *     sub_14001DBF0 @ 0x14001DBF0 (sub_14001DBF0.c)
 */

__int64 __fastcall sub_140077EA4(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 < 0 )
    return sub_14001DBF0(2 * v1);
  return result;
}
