/*
 * XREFs of HalpcGetCmosDataByType @ 0x1404C4320
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmosRangeHandler @ 0x1404C4344 (HalpCmosRangeHandler.c)
 */

__int64 __fastcall HalpcGetCmosDataByType(int a1, int a2, int a3, int a4)
{
  return HalpCmosRangeHandler(0, a1, a2, a3, a4);
}
