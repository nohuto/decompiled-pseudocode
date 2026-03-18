/*
 * XREFs of ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402E5E00
 * Callers:
 *     MiWalkLevelCompleted @ 0x140247EA0 (MiWalkLevelCompleted.c)
 *     MiSetVaAgeListEx @ 0x14029D300 (MiSetVaAgeListEx.c)
 *     MmMapViewInSystemCache @ 0x1402E29A0 (MmMapViewInSystemCache.c)
 *     MiSynchronizeSystemVa @ 0x1402E3870 (MiSynchronizeSystemVa.c)
 *     MiUnlockSystemVa @ 0x1402E5200 (MiUnlockSystemVa.c)
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiReleaseCachedPageLocks @ 0x1402E9F30 (MiReleaseCachedPageLocks.c)
 *     MiPerformFaultClusterMaintenance @ 0x1402EB0D0 (MiPerformFaultClusterMaintenance.c)
 *     MiLockPageLeafPageTable @ 0x1402EEB90 (MiLockPageLeafPageTable.c)
 *     MiReacquireWalkLocks @ 0x140301220 (MiReacquireWalkLocks.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     MiCaptureDeleteHierarchy @ 0x140303880 (MiCaptureDeleteHierarchy.c)
 *     MiSectionProtectAllPtes @ 0x140303F00 (MiSectionProtectAllPtes.c)
 *     MiQueryAddressState @ 0x140305180 (MiQueryAddressState.c)
 *     MiWalkPageTablesPrepareToDescend @ 0x140325B20 (MiWalkPageTablesPrepareToDescend.c)
 *     MiGetNextPageTablePte @ 0x140328700 (MiGetNextPageTablePte.c)
 *     MiDeleteVaDirect @ 0x140361EF0 (MiDeleteVaDirect.c)
 *     MiReleaseWalkLocks @ 0x140362F00 (MiReleaseWalkLocks.c)
 *     MiCommitPoolMemory @ 0x140364AE0 (MiCommitPoolMemory.c)
 *     MiUnlockPoolCommitWs @ 0x140365110 (MiUnlockPoolCommitWs.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1403A0340 (MiUnlockProbePacketWorkingSet.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseSpinLockRegardlessFromDpcLevel(volatile signed __int32 *BugCheckParameter1)
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  result = *(unsigned int *)BugCheckParameter1;
  if ( (result & 0x3FFFFFFF) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = LODWORD(stru_140F11D08.WaitStatus), LODWORD(stru_140F11D08.WaitStatus)) )
    {
      _InterlockedAnd(BugCheckParameter1, 0xBFFFFFFF);
      _InterlockedDecrement(BugCheckParameter1);
    }
    else
    {
      return ExpReleaseSpinLockSharedFromDpcLevelInstrumented(BugCheckParameter1, retaddr);
    }
  }
  else
  {
    if ( (int)result >= 0 )
      KeBugCheckEx(0x10u, (ULONG_PTR)BugCheckParameter1, 0x100uLL, 0LL, 0LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = LODWORD(stru_140F11D08.WaitStatus), LODWORD(stru_140F11D08.WaitStatus)) )
    {
      *BugCheckParameter1 = 0;
    }
    else
    {
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(BugCheckParameter1, retaddr);
    }
  }
  return result;
}
