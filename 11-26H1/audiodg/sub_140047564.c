/*
 * XREFs of sub_140047564 @ 0x140047564
 * Callers:
 *     sub_1400AE6B8 @ 0x1400AE6B8 (sub_1400AE6B8.c)
 *     sub_1400B3839 @ 0x1400B3839 (sub_1400B3839.c)
 * Callees:
 *     sub_14000C544 @ 0x14000C544 (sub_14000C544.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_140047564(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    sub_14000C544((_QWORD *)(**(_QWORD **)a1 + 120LL), **(_QWORD **)(a1 + 8));
  }
}
