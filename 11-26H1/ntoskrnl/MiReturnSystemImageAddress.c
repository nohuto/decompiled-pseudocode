/*
 * XREFs of MiReturnSystemImageAddress @ 0x140A85E84
 * Callers:
 *     MiReturnImageBase @ 0x140A85CA8 (MiReturnImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140AC89E4 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiReleaseDriverPtes @ 0x140A85EA8 (MiReleaseDriverPtes.c)
 */

__int64 __fastcall MiReturnSystemImageAddress(unsigned __int64 a1)
{
  __int64 PteAddress; // rax
  __int64 v2; // rdx

  PteAddress = MiGetPteAddress(a1);
  return MiReleaseDriverPtes(PteAddress, v2);
}
