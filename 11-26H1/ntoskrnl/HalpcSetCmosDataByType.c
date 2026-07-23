/*
 * XREFs of HalpcSetCmosDataByType @ 0x14059BF50
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmosRangeHandler @ 0x1404C4344 (HalpCmosRangeHandler.c)
 */

__int64 __fastcall HalpcSetCmosDataByType(int a1, unsigned int a2, __int64 a3, int a4)
{
  return HalpCmosRangeHandler(1u, a1, a2, a3, a4);
}
