/*
 * XREFs of CmpProtectPoolEx @ 0x1404C3198
 * Callers:
 *     HvpProtectBinPartial @ 0x1408BFB2C (HvpProtectBinPartial.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408E23B0 (HvpRemapAndEnlistHiveBins.c)
 * Callees:
 *     ExProtectPoolEx @ 0x14024E7DC (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPoolEx(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  return ExProtectPoolEx(a1, a2, a3, a4);
}
