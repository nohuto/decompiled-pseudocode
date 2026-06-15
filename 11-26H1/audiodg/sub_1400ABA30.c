/*
 * XREFs of sub_1400ABA30 @ 0x1400ABA30
 * Callers:
 *     sub_1400ABA70 @ 0x1400ABA70 (sub_1400ABA70.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1400ABA30(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    sub_1400B6010(v2);
    *(_BYTE *)(a1 + 16) = 1;
  }
}
