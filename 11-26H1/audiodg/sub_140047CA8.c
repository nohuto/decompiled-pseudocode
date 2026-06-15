/*
 * XREFs of sub_140047CA8 @ 0x140047CA8
 * Callers:
 *     sub_1400228C0 @ 0x1400228C0 (sub_1400228C0.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_140047CA8(__int64 a1)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (int)sub_1400B6010(a1) >= 0 && (int)sub_1400B6010(0LL) >= 0 )
    sub_140007934((int)retaddr, 515, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", -2147418113);
  return 0;
}
