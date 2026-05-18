/*
 * XREFs of sub_18004D208 @ 0x18004D208
 * Callers:
 *     sub_18004C408 @ 0x18004C408 (sub_18004C408.c)
 * Callees:
 *     sub_18004D310 @ 0x18004D310 (sub_18004D310.c)
 */

__int64 __fastcall sub_18004D208(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_18004D310(v2 + 32);
  return sub_18003F1F0(a1);
}
