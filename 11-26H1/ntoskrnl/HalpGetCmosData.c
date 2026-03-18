/*
 * XREFs of HalpGetCmosData @ 0x14058C3AC
 * Callers:
 *     HalReadBootRegister @ 0x140BEF168 (HalReadBootRegister.c)
 * Callees:
 *     HalpGetSetCmosData @ 0x1404F4054 (HalpGetSetCmosData.c)
 */

__int64 __fastcall HalpGetCmosData(__int64 a1, unsigned int a2, _BYTE *a3, int a4)
{
  return HalpGetSetCmosData(a1, a2, a3, a4, 0);
}
