/*
 * XREFs of sub_140032F2C @ 0x140032F2C
 * Callers:
 *     sub_1400A7170 @ 0x1400A7170 (sub_1400A7170.c)
 *     sub_1400A7640 @ 0x1400A7640 (sub_1400A7640.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_140032F2C(__int64 a1)
{
  _DWORD *v1; // rax
  int v3; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_DWORD **)(a1 + 32);
  if ( *v1 == 28 )
  {
    if ( v1[2] )
    {
      if ( v1[6] == 1396785732 )
        return 0LL;
      v3 = 121;
    }
    else
    {
      v3 = 120;
    }
  }
  else
  {
    v3 = 119;
  }
  sub_14000C2A8(
    (int)retaddr,
    v3,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
    -2005139387);
  return 2289827909LL;
}
