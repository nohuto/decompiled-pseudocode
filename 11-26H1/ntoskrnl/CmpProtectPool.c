/*
 * XREFs of CmpProtectPool @ 0x14024E81C
 * Callers:
 *     HvpFreeBin @ 0x1408B78AC (HvpFreeBin.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     ExProtectPoolEx @ 0x14024CE7C (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
