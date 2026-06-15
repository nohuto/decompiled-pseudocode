/*
 * XREFs of sub_1400A6FCC @ 0x1400A6FCC
 * Callers:
 *     sub_1400A6EA0 @ 0x1400A6EA0 (sub_1400A6EA0.c)
 * Callees:
 *     sub_1400AC500 @ 0x1400AC500 (sub_1400AC500.c)
 */

__int64 __fastcall sub_1400A6FCC(__int64 *a1, unsigned __int32 *a2)
{
  unsigned int v2; // ebx
  signed __int32 v4; // eax
  __int64 v5; // r8
  unsigned int v6; // eax
  unsigned __int32 v7; // edx
  unsigned __int32 v8; // r8d
  __int64 v9; // rdx

  v2 = 0;
  if ( !*(_BYTE *)(*a1 + 96) )
  {
    v2 = -2005139437;
LABEL_5:
    sub_1400AC500(
      "CSpatialCrossProcessServerInputEndpointRT<class CSpatialCrossProcessServerInputEndpoint<struct SpatialStaticContro"
      "lData_V1,struct SpatialVolatileControlData_V0,struct SpatialControlData_V1>,struct CpuAudioEngine_typetraits>::GetFrameCount",
      361LL);
    return v2;
  }
  if ( !a2 )
  {
    v2 = -2147467261;
    goto LABEL_5;
  }
  v4 = _InterlockedCompareExchange(
         (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*a1 + 1368) + 1344LL) + 64LL),
         0,
         0);
  if ( (v4 & 0xFFFFFF81) == 1 && (v4 & 2) != 0 && (v5 = *a1, *(_BYTE *)(*a1 + 1568)) )
  {
    v6 = *(_DWORD *)(v5 + 1560);
    if ( v6 >= 2 )
      v7 = 0;
    else
      v7 = _InterlockedCompareExchange(
             (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 1368) + 1344LL) + 4LL * v6 + 48),
             0,
             0);
    v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 1368) + 608LL) + 132LL);
    if ( v8 >= v7 )
      v8 = v7;
  }
  else
  {
    v9 = *a1;
    v8 = _InterlockedCompareExchange(
           (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*a1 + 1368) + 1344LL) + 44LL),
           0,
           0);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 1368) + 608LL) + 132LL) < v8 )
      v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 1368) + 608LL) + 132LL);
  }
  *a2 = v8;
  if ( !v8 )
    *a2 = *(_DWORD *)(*(_QWORD *)(*a1 + 608) + 132LL);
  return v2;
}
