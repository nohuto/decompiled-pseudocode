/*
 * XREFs of sub_1400078F4 @ 0x1400078F4
 * Callers:
 *     sub_1400075D4 @ 0x1400075D4 (sub_1400075D4.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400078F4(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(_QWORD *)(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = sub_1400B6010(v3);
  return a1;
}
