/*
 * XREFs of sub_1400A9F60 @ 0x1400A9F60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400AC500 @ 0x1400AC500 (sub_1400AC500.c)
 */

__int64 __fastcall sub_1400A9F60(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_BYTE *)(a1 + 96) )
  {
    if ( a2 )
    {
      *a2 = *(_QWORD *)(a1 + 120);
      return v2;
    }
    v2 = -2147467261;
  }
  else
  {
    v2 = -2005139437;
  }
  sub_1400AC500(
    "CSpatialCrossProcessBaseEndpoint<struct SpatialStaticControlData_V1,struct SpatialVolatileControlData_V0,struct Spat"
    "ialControlData_V1>::GetLatency",
    317LL);
  return v2;
}
