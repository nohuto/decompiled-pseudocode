/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x140B1AE1C
 * Callers:
 *     IopLiveDumpFreeMappingResources @ 0x1405CF604 (IopLiveDumpFreeMappingResources.c)
 *     PopEnableHiberFile @ 0x14094353C (PopEnableHiberFile.c)
 *     PopFreeHiberContext @ 0x140B1AB90 (PopFreeHiberContext.c)
 * Callees:
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 */

unsigned __int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  unsigned __int64 *PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = (unsigned __int64 *)MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&stru_140E36558.WaitBlockList, PteAddress, v2);
}
