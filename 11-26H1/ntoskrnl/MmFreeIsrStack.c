/*
 * XREFs of MmFreeIsrStack @ 0x14087C2CC
 * Callers:
 *     KiFreeProcessorStacks @ 0x1405EDC50 (KiFreeProcessorStacks.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MmFreeIndependentPages @ 0x1402EADC0 (MmFreeIndependentPages.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     KasanMarkAddressValidNoInline @ 0x1405257D0 (KasanMarkAddressValidNoInline.c)
 */

unsigned __int64 __fastcall MmFreeIsrStack(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 *PteAddress; // rax

  v1 = a1 - (unsigned int)KeIsrStackSize;
  if ( byte_140FC8BD8 )
    KasanMarkAddressValidNoInline(a1 - (unsigned int)KeIsrStackSize, (unsigned int)KeIsrStackSize);
  MmFreeIndependentPages(v1, (unsigned int)KeIsrStackSize);
  PteAddress = (unsigned __int64 *)MiGetPteAddress(v1 - 4096);
  return MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, PteAddress, 1u);
}
