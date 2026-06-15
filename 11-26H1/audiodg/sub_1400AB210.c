/*
 * XREFs of sub_1400AB210 @ 0x1400AB210
 * Callers:
 *     <none>
 * Callees:
 *     sub_140032D48 @ 0x140032D48 (sub_140032D48.c)
 *     sub_1400A972C @ 0x1400A972C (sub_1400A972C.c)
 *     sub_1400AC500 @ 0x1400AC500 (sub_1400AC500.c)
 */

__int64 __fastcall sub_1400AB210(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int32 v5; // ebx
  unsigned int v7; // ebx

  v5 = a3;
  sub_140032D48(a1 + 800, a2, a3, a4);
  if ( a2 + v5 > *(_DWORD *)(a1 - 24 + 296) )
  {
    v7 = -2005139346;
    sub_1400AC500(
      "CSpatialCrossProcessBaseEndpoint<struct SpatialStaticControlData_V1,struct SpatialVolatileControlData_V0,struct Sp"
      "atialControlData_V1>::SetObjectUsageCounts",
      704LL);
  }
  else
  {
    _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 1320) + 56LL), __SPAIR64__(v5, a2));
    sub_1400A972C(a1 - 24, v5);
    return 0;
  }
  return v7;
}
