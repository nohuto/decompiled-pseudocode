/*
 * XREFs of sub_1400A99B4 @ 0x1400A99B4
 * Callers:
 *     sub_1400A9838 @ 0x1400A9838 (sub_1400A9838.c)
 *     sub_1400A9FAC @ 0x1400A9FAC (sub_1400A9FAC.c)
 *     sub_1400AB298 @ 0x1400AB298 (sub_1400AB298.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_1400A99B4(unsigned int a1, unsigned int *a2)
{
  unsigned int v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = a1;
  if ( (a1 & 0x1F) == 0 )
    return 0LL;
  v2 = a1 - (a1 & 0x1F) + 32;
  if ( v2 >= a1 )
  {
    *a2 = v2;
    return 0LL;
  }
  *a2 = -1;
  sub_14000C2A8(
    (int)retaddr,
    244,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
    -2147024362);
  return 2147942934LL;
}
