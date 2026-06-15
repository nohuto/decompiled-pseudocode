/*
 * XREFs of sub_1400A9DE0 @ 0x1400A9DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400AC500 @ 0x1400AC500 (sub_1400AC500.c)
 */

__int64 __fastcall sub_1400A9DE0(__int64 a1, unsigned __int32 *a2)
{
  unsigned int v2; // ebx
  unsigned __int32 v4; // edx

  v2 = 0;
  if ( !*(_BYTE *)(a1 + 96) )
  {
    v2 = -2005139437;
LABEL_5:
    sub_1400AC500(
      "CSpatialCrossProcessBaseEndpoint<struct SpatialStaticControlData_V1,struct SpatialVolatileControlData_V0,struct Sp"
      "atialControlData_V1>::GetFramesPerPacket",
      405LL);
    return v2;
  }
  if ( !a2 )
  {
    v2 = -2147467261;
    goto LABEL_5;
  }
  v4 = _InterlockedCompareExchange(
         (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1368) + 1344LL) + 44LL),
         0,
         0);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1368) + 608LL) + 132LL) < v4 )
    v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1368) + 608LL) + 132LL);
  if ( !v4 )
    v4 = *(_DWORD *)(a1 + 288);
  *a2 = v4;
  return v2;
}
