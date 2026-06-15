/*
 * XREFs of sub_1400A9EC0 @ 0x1400A9EC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400AC500 @ 0x1400AC500 (sub_1400AC500.c)
 */

__int64 __fastcall sub_1400A9EC0(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    *a2 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 1320) + 20LL), 0, 0);
  }
  else
  {
    v2 = -2147467261;
    sub_1400AC500(
      "CSpatialCrossProcessBaseEndpoint<struct SpatialStaticControlData_V1,struct SpatialVolatileControlData_V0,struct Sp"
      "atialControlData_V1>::GetGrantedObjectCount",
      733LL);
  }
  return v2;
}
