/*
 * XREFs of HalpcSetCmosDataByType @ 0x1405997D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmosRangeHandler @ 0x1404CA914 (HalpCmosRangeHandler.c)
 */

__int64 __fastcall HalpcSetCmosDataByType(int a1, unsigned int a2, __int64 a3, int a4)
{
  return HalpCmosRangeHandler(1u, a1, a2, a3, a4);
}
