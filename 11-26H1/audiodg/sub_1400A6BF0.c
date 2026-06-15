/*
 * XREFs of sub_1400A6BF0 @ 0x1400A6BF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400AC500 @ 0x1400AC500 (sub_1400AC500.c)
 */

__int64 __fastcall sub_1400A6BF0(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx

  v3 = *(_QWORD *)(a1 + 1568);
  v4 = 0;
  if ( *(_BYTE *)(v3 + 96) )
  {
    if ( a2 && a3 )
    {
      *a2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 1368) + 608LL) + 136LL);
      *a3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 1368) + 608LL) + 140LL);
      return v4;
    }
    v4 = -2147467261;
  }
  else
  {
    v4 = -2005139437;
  }
  sub_1400AC500(
    "CSpatialCrossProcessServerInputEndpointRT<class CSpatialCrossProcessServerInputEndpoint<struct SpatialStaticControlD"
    "ata_V1,struct SpatialVolatileControlData_V0,struct SpatialControlData_V1>,struct CpuAudioEngine_typetraits>::GetAllo"
    "catedObjectCount",
    308LL);
  return v4;
}
