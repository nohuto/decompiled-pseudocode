/*
 * XREFs of sub_140077E70 @ 0x140077E70
 * Callers:
 *     sub_140078134 @ 0x140078134 (sub_140078134.c)
 *     sub_140078550 @ 0x140078550 (sub_140078550.c)
 * Callees:
 *     sub_14001DBF0 @ 0x14001DBF0 (sub_14001DBF0.c)
 */

__int64 __fastcall sub_140077E70(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 168);
  if ( v2 < 0 )
    sub_14001DBF0(2 * v2);
  return sub_140077DA0(a1 + 16);
}
