/*
 * XREFs of sub_14001B398 @ 0x14001B398
 * Callers:
 *     sub_14001AF44 @ 0x14001AF44 (sub_14001AF44.c)
 *     sub_140078660 @ 0x140078660 (sub_140078660.c)
 * Callees:
 *     sub_14001DBF0 @ 0x14001DBF0 (sub_14001DBF0.c)
 */

__int64 __fastcall sub_14001B398(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 < 0 )
    sub_14001DBF0(2 * v2);
  return sub_1400125D4((__int64 *)(a1 + 40));
}
