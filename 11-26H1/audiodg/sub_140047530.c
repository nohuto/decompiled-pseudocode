/*
 * XREFs of sub_140047530 @ 0x140047530
 * Callers:
 *     sub_1400AE6CA @ 0x1400AE6CA (sub_1400AE6CA.c)
 *     sub_1400B384B @ 0x1400B384B (sub_1400B384B.c)
 * Callees:
 *     sub_14000C448 @ 0x14000C448 (sub_14000C448.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_140047530(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    sub_14000C448((_QWORD *)(**(_QWORD **)a1 + 248LL), **(_QWORD **)(a1 + 8));
  }
}
