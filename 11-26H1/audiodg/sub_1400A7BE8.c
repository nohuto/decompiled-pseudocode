/*
 * XREFs of sub_1400A7BE8 @ 0x1400A7BE8
 * Callers:
 *     sub_1400A7B30 @ 0x1400A7B30 (sub_1400A7B30.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14002EE04 @ 0x14002EE04 (sub_14002EE04.c)
 *     sub_1400AC500 @ 0x1400AC500 (sub_1400AC500.c)
 */

__int64 __fastcall sub_1400A7BE8(__int64 *a1, unsigned int a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v8; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v6 = *a1;
  if ( *(_BYTE *)(*a1 + 96) )
  {
    if ( *(_BYTE *)(v6 + 1568) )
    {
      if ( a2 < *(_DWORD *)(v6 + 1564) )
      {
        v8 = sub_14002EE04(*(_QWORD *)(*(_QWORD *)(v6 + 1368) + 1352LL), *(_DWORD *)(v6 + 1560), a2, a3, a4);
        v7 = v8;
        if ( v8 >= 0 )
          return 0;
        sub_14000C2A8(
          (int)retaddr,
          327,
          (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialCPBaseEndpoint_rtcore.h",
          v8);
      }
      else
      {
        v7 = -2147024809;
      }
    }
    else
    {
      v7 = -2147418113;
    }
  }
  else
  {
    v7 = -2005139437;
  }
  sub_1400AC500(
    "CSpatialCrossProcessServerInputEndpointRT<class CSpatialCrossProcessServerInputEndpoint<struct SpatialStaticControlD"
    "ata_V1,struct SpatialVolatileControlData_V0,struct SpatialControlData_V1>,struct CpuAudioEngine_typetraits>::GetObjectMetadata",
    274LL);
  return v7;
}
