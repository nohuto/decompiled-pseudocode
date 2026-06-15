/*
 * XREFs of sub_1400AB354 @ 0x1400AB354
 * Callers:
 *     sub_1400AA1A8 @ 0x1400AA1A8 (sub_1400AA1A8.c)
 * Callees:
 *     sub_1400AC448 @ 0x1400AC448 (sub_1400AC448.c)
 *     sub_1400AC500 @ 0x1400AC500 (sub_1400AC500.c)
 */

__int64 __fastcall sub_1400AB354(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !a2 )
  {
    v2 = -2147467261;
LABEL_8:
    sub_1400AC500(
      "CSpatialCrossProcessBaseEndpoint<struct SpatialStaticControlData_V0,struct SpatialVolatileControlData_V0,struct Sp"
      "atialControlData_V0>::ValidateControlData",
      473LL);
    sub_1400AC448(a1 + 792, 2LL);
    return v2;
  }
  if ( *a2 != 806 || a2[1] != 1396785988 || !(a2[130] + a2[131]) || a2[132] < 0x340u )
  {
    v2 = -2005139387;
    goto LABEL_8;
  }
  return v2;
}
