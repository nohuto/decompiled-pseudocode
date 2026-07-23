/*
 * XREFs of MiFillPteHierarchy @ 0x1403A17B0
 * Callers:
 *     MiSynchronizeSystemVa @ 0x1402C58B0 (MiSynchronizeSystemVa.c)
 *     MiFindActualFaultingPte @ 0x14031E6D4 (MiFindActualFaultingPte.c)
 *     MiCreateSystemPageTable @ 0x14033B880 (MiCreateSystemPageTable.c)
 *     MmFreeContiguousMemory @ 0x140346600 (MmFreeContiguousMemory.c)
 *     MiLockAndConfirmFaultClusterDescriptor @ 0x1403A14FC (MiLockAndConfirmFaultClusterDescriptor.c)
 *     MiPfCompleteInPageSupport @ 0x1403A1878 (MiPfCompleteInPageSupport.c)
 *     MiKcsanPopulateHierarchy @ 0x1406FA224 (MiKcsanPopulateHierarchy.c)
 *     MiMapProcessExecutable @ 0x140A08810 (MiMapProcessExecutable.c)
 *     MiUpdateForkMaps @ 0x140AF6AB0 (MiUpdateForkMaps.c)
 *     MxMapVa @ 0x140CFE330 (MxMapVa.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFillPteHierarchy(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx
  unsigned __int64 result; // rax

  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a2 = v3;
  v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  a2[1] = v4;
  v5 = (v4 >> 9) & 0x7FFFFFFFF8LL;
  result = 0xFFFFF68000000000uLL;
  a2[2] = v5 - 0x98000000000LL;
  a2[3] = (((unsigned __int64)(v5 - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  return result;
}
