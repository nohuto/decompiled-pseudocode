/*
 * XREFs of CmpProtectPool @ 0x14025017C
 * Callers:
 *     HvpFreeBin @ 0x1408BDE7C (HvpFreeBin.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     ExProtectPoolEx @ 0x14024E7DC (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
