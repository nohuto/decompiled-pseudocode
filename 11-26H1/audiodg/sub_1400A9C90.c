/*
 * XREFs of sub_1400A9C90 @ 0x1400A9C90
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006BCC @ 0x140006BCC (sub_140006BCC.c)
 *     sub_1400AC500 @ 0x1400AC500 (sub_1400AC500.c)
 */

__int64 __fastcall sub_1400A9C90(__int64 a1, _QWORD *a2)
{
  int v2; // ebx

  if ( !*(_BYTE *)(a1 + 96) )
  {
    v2 = -2005139437;
LABEL_6:
    sub_1400AC500(
      "CSpatialCrossProcessBaseEndpoint<struct SpatialStaticControlData_V0,struct SpatialVolatileControlData_V0,struct Sp"
      "atialControlData_V0>::GetFrameFormat",
      359LL);
    return (unsigned int)v2;
  }
  if ( !a2 )
  {
    v2 = -2147467261;
    goto LABEL_6;
  }
  v2 = sub_140006BCC((unsigned __int16 *)(a1 + 300), a2);
  if ( v2 < 0 )
    goto LABEL_6;
  return (unsigned int)v2;
}
