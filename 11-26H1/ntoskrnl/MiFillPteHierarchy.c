/*
 * XREFs of MiFillPteHierarchy @ 0x14039FA50
 * Callers:
 *     MiSynchronizeSystemVa @ 0x1402E3870 (MiSynchronizeSystemVa.c)
 *     MiFindActualFaultingPte @ 0x14031C6A4 (MiFindActualFaultingPte.c)
 *     MiCreateSystemPageTable @ 0x140339800 (MiCreateSystemPageTable.c)
 *     MmFreeContiguousMemory @ 0x140344580 (MmFreeContiguousMemory.c)
 *     MiLockAndConfirmFaultClusterDescriptor @ 0x14039F79C (MiLockAndConfirmFaultClusterDescriptor.c)
 *     MiPfCompleteInPageSupport @ 0x14039FB18 (MiPfCompleteInPageSupport.c)
 *     MiKcsanPopulateHierarchy @ 0x1406F55B4 (MiKcsanPopulateHierarchy.c)
 *     MiMapProcessExecutable @ 0x140962988 (MiMapProcessExecutable.c)
 *     MiUpdateForkMaps @ 0x140AF443C (MiUpdateForkMaps.c)
 *     MxMapVa @ 0x140CF7FB0 (MxMapVa.c)
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
