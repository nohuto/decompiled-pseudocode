/*
 * XREFs of sub_1400181B4 @ 0x1400181B4
 * Callers:
 *     sub_1400180E8 @ 0x1400180E8 (sub_1400180E8.c)
 * Callees:
 *     sub_14001821C @ 0x14001821C (sub_14001821C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400181B4(__int64 a1)
{
  __int64 v2; // rcx

  sub_14001821C(a1 + 24);
  v2 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v2 )
    sub_1400B6010(v2);
  sub_1400B6010(*(_QWORD *)(a1 + 24));
  return 0LL;
}
