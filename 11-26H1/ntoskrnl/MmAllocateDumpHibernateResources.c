/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x140B2A818
 * Callers:
 *     IopLiveDumpAllocateMappingResources @ 0x1405CDE40 (IopLiveDumpAllocateMappingResources.c)
 *     PopEnableHiberFile @ 0x14094353C (PopEnableHiberFile.c)
 *     PopHiberInitializeResources @ 0x140B2A4B4 (PopHiberInitializeResources.c)
 * Callees:
 *     MiReservePtes @ 0x14035DE50 (MiReservePtes.c)
 */

unsigned __int64 __fastcall MmAllocateDumpHibernateResources(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 result; // rax

  result = MiReservePtes((__int64)&stru_140E36558.WaitBlockList, (unsigned int)(a1 >> 12) + ((a1 & 0xFFF) != 0), a3, a4);
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
