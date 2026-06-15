/*
 * XREFs of sub_140016EDC @ 0x140016EDC
 * Callers:
 *     sub_140016D5C @ 0x140016D5C (sub_140016D5C.c)
 *     sub_14001CF9C @ 0x14001CF9C (sub_14001CF9C.c)
 *     sub_140077F80 @ 0x140077F80 (sub_140077F80.c)
 *     sub_140077FC8 @ 0x140077FC8 (sub_140077FC8.c)
 *     sub_140078040 @ 0x140078040 (sub_140078040.c)
 *     sub_1400780C0 @ 0x1400780C0 (sub_1400780C0.c)
 *     sub_1400785D0 @ 0x1400785D0 (sub_1400785D0.c)
 * Callees:
 *     sub_14001DBF0 @ 0x14001DBF0 (sub_14001DBF0.c)
 */

__int64 __fastcall sub_140016EDC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 < 0 )
    sub_14001DBF0(2 * v2);
  return sub_1400125D4((__int64 *)(a1 + 40));
}
