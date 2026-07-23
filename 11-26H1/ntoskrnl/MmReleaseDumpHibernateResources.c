/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x140B1D0CC
 * Callers:
 *     IopLiveDumpFreeMappingResources @ 0x1405D1E14 (IopLiveDumpFreeMappingResources.c)
 *     PopEnableHiberFile @ 0x1409BEEB4 (PopEnableHiberFile.c)
 *     PopFreeHiberContext @ 0x140B1CE40 (PopFreeHiberContext.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 */

unsigned __int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  unsigned __int64 *PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = (unsigned __int64 *)MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, PteAddress, v2);
}
