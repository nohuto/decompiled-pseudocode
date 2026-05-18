/*
 * XREFs of sub_1800315DC @ 0x1800315DC
 * Callers:
 *     sub_18002F964 @ 0x18002F964 (sub_18002F964.c)
 * Callees:
 *     sub_1800317FC @ 0x1800317FC (sub_1800317FC.c)
 */

__int64 __fastcall sub_1800315DC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1800317FC(v2 + 32);
  return sub_18001D5C8(a1);
}
