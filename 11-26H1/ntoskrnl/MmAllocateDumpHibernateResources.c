/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x140B2C898
 * Callers:
 *     IopLiveDumpAllocateMappingResources @ 0x1405D0650 (IopLiveDumpAllocateMappingResources.c)
 *     PopEnableHiberFile @ 0x1409BEEB4 (PopEnableHiberFile.c)
 *     PopHiberInitializeResources @ 0x140B2C534 (PopHiberInitializeResources.c)
 * Callees:
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 */

unsigned __int64 __fastcall MmAllocateDumpHibernateResources(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 result; // rax

  result = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, (unsigned int)(a1 >> 12) + ((a1 & 0xFFF) != 0), a3, a4);
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
