/*
 * XREFs of sub_140077EC8 @ 0x140077EC8
 * Callers:
 *     sub_1400786A0 @ 0x1400786A0 (sub_1400786A0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140077EC8(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    sub_1400B6010(v2);
  }
  return sub_140077EA4(a1);
}
