/*
 * XREFs of sub_1400A6C70 @ 0x1400A6C70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400AC500 @ 0x1400AC500 (sub_1400AC500.c)
 */

__int64 __fastcall sub_1400A6C70(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  signed __int32 v4; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 1536) + 1540LL);
  *a2 = 0;
  v3 = *(_QWORD *)(a1 + 1536);
  if ( !*(_BYTE *)(v3 + 96) )
  {
    v2 = -2005139437;
LABEL_13:
    sub_1400AC500(
      "CSpatialCrossProcessServerInputEndpointRT<class CSpatialCrossProcessServerInputEndpoint<struct SpatialStaticContro"
      "lData_V0,struct SpatialVolatileControlData_V0,struct SpatialControlData_V0>,struct CpuAudioEngine_typetraits>::Get"
      "AvailableObjectCount",
      206LL);
    return v2;
  }
  v4 = _InterlockedCompareExchange(
         (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v3 + 1336) + 1312LL) + 64LL),
         0,
         0);
  if ( (v4 & 0xFFFFFF81) == 1 && (v4 & 2) != 0 || *(_DWORD *)(*(_QWORD *)(a1 + 1536) + 1544LL) == 1 )
  {
    v5 = *(_QWORD *)(a1 + 1536);
    if ( *(_BYTE *)(v5 + 1536) )
      *a2 = *(_DWORD *)(v5 + 1532);
    else
      v2 = *(_DWORD *)(v5 + 1540);
    if ( v2 != -2005139433 && v2 != -2005139358 && v2 )
      goto LABEL_13;
  }
  else
  {
    return (unsigned int)-2005139433;
  }
  return v2;
}
