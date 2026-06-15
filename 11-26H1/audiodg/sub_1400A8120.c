/*
 * XREFs of sub_1400A8120 @ 0x1400A8120
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400AC500 @ 0x1400AC500 (sub_1400AC500.c)
 */

__int64 __fastcall sub_1400A8120(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 1568) + 96LL) )
  {
    v1 = -2005139437;
    sub_1400AC500(
      "CSpatialCrossProcessServerInputEndpointRT<class CSpatialCrossProcessServerInputEndpoint<struct SpatialStaticContro"
      "lData_V1,struct SpatialVolatileControlData_V0,struct SpatialControlData_V1>,struct CpuAudioEngine_typetraits>::ProcessComplete",
      287LL);
  }
  return v1;
}
