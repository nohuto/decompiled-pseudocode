/*
 * XREFs of MmFreeIsrStack @ 0x140875EE8
 * Callers:
 *     KiFreeProcessorStacks @ 0x1405EB2E0 (KiFreeProcessorStacks.c)
 * Callees:
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     MmFreeIndependentPages @ 0x140308D40 (MmFreeIndependentPages.c)
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     KasanMarkAddressValidNoInline @ 0x140523160 (KasanMarkAddressValidNoInline.c)
 */

unsigned __int64 __fastcall MmFreeIsrStack(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 *PteAddress; // rax

  v1 = a1 - (unsigned int)KeIsrStackSize;
  if ( byte_140FC7BE8 )
    KasanMarkAddressValidNoInline(a1 - (unsigned int)KeIsrStackSize, (unsigned int)KeIsrStackSize);
  MmFreeIndependentPages(v1, (unsigned int)KeIsrStackSize);
  PteAddress = (unsigned __int64 *)MiGetPteAddress(v1 - 4096);
  return MiReleasePtes((__int64)&stru_140E36558.WaitBlockList, PteAddress, 1u);
}
