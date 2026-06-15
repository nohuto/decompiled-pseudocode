/*
 * XREFs of sub_1400A7F90 @ 0x1400A7F90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400AC500 @ 0x1400AC500 (sub_1400AC500.c)
 */

__int64 __fastcall sub_1400A7F90(__int64 a1, int *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  signed __int32 v5; // eax
  int v6; // edx

  v2 = *(_QWORD *)(a1 + 1536);
  v3 = 0;
  if ( !*(_BYTE *)(v2 + 96) )
  {
    v3 = -2005139437;
LABEL_5:
    sub_1400AC500(
      "CSpatialCrossProcessServerInputEndpointRT<class CSpatialCrossProcessServerInputEndpoint<struct SpatialStaticContro"
      "lData_V0,struct SpatialVolatileControlData_V0,struct SpatialControlData_V0>,struct CpuAudioEngine_typetraits>::GetStreamStatus",
      331LL);
    return v3;
  }
  if ( !a2 )
  {
    v3 = -2147467261;
    goto LABEL_5;
  }
  v5 = _InterlockedCompareExchange(
         (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v2 + 1336) + 1312LL) + 64LL),
         0,
         0);
  v6 = 1;
  if ( (v5 & 0xFFFFFF81) != 1 || (v5 & 2) == 0 )
    v6 = 0;
  *a2 = v6;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 1536) + 1537LL) )
    *a2 = v6 | 2;
  return v3;
}
