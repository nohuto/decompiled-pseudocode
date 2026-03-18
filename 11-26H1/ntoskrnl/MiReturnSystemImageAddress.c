/*
 * XREFs of MiReturnSystemImageAddress @ 0x140A80014
 * Callers:
 *     MiReturnImageBase @ 0x140A7FE38 (MiReturnImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140AC6DF4 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     MiReleaseDriverPtes @ 0x140A80038 (MiReleaseDriverPtes.c)
 */

__int64 __fastcall MiReturnSystemImageAddress(unsigned __int64 a1)
{
  __int64 PteAddress; // rax
  __int64 v2; // rdx

  PteAddress = MiGetPteAddress(a1);
  return MiReleaseDriverPtes(PteAddress, v2);
}
