/*
 * XREFs of sub_140133B9C @ 0x140133B9C
 * Callers:
 *     sub_1400068E0 @ 0x1400068E0 (sub_1400068E0.c)
 *     sub_14000DC80 @ 0x14000DC80 (sub_14000DC80.c)
 *     sub_140027C30 @ 0x140027C30 (sub_140027C30.c)
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_140054A1C @ 0x140054A1C (sub_140054A1C.c)
 *     sub_14006D7C4 @ 0x14006D7C4 (sub_14006D7C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140133B9C(unsigned __int8 *a1, int a2)
{
  __int64 v3; // [rsp+18h] [rbp+18h]

  if ( a2 != 16 )
    return a1[5] | ((a1[4] | ((a1[3] | (a1[2] << 8)) << 8)) << 8);
  HIBYTE(v3) = a1[2];
  BYTE6(v3) = a1[3];
  BYTE5(v3) = a1[4];
  BYTE4(v3) = a1[5];
  BYTE3(v3) = a1[6];
  BYTE2(v3) = a1[7];
  BYTE1(v3) = a1[8];
  LOBYTE(v3) = a1[9];
  return v3;
}
