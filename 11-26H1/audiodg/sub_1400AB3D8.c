/*
 * XREFs of sub_1400AB3D8 @ 0x1400AB3D8
 * Callers:
 *     sub_1400AA844 @ 0x1400AA844 (sub_1400AA844.c)
 * Callees:
 *     sub_1400AC448 @ 0x1400AC448 (sub_1400AC448.c)
 *     sub_1400AC500 @ 0x1400AC500 (sub_1400AC500.c)
 */

__int64 __fastcall sub_1400AB3D8(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !a2 )
  {
    v2 = -2147467261;
LABEL_8:
    sub_1400AC500(
      "CSpatialCrossProcessBaseEndpoint<struct SpatialStaticControlData_V1,struct SpatialVolatileControlData_V0,struct Sp"
      "atialControlData_V1>::ValidateControlData",
      473LL);
    sub_1400AC448(a1 + 824, 2LL);
    return v2;
  }
  if ( a2[3] != 852 || a2[4] != 1396785988 || !(a2[135] + a2[136]) || a2[137] < 0x360u )
  {
    v2 = -2005139387;
    goto LABEL_8;
  }
  return v2;
}
