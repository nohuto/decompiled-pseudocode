/*
 * XREFs of ExTryConvertSharedSpinLockExclusive @ 0x14029B680
 * Callers:
 *     ?KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140299AB0 (-KiAbEntryGetLockedHeadEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@KPEAU_KLOCK_QUEUE_HANDLE.c)
 *     ExpAddTagForBigPages @ 0x14029B070 (ExpAddTagForBigPages.c)
 *     ?KiAbAcquireLocksForEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@PEAU_KI_AB_TREE_LOCK_HANDLE@1@KK@Z @ 0x1404856CC (-KiAbAcquireLocksForEntry@LegacyAutoBoost@@YAPEAU_KLOCK_ENTRY@@PEAU2@PEAU_KI_AB_TREE_LOCK_HANDLE.c)
 *     ViDeadlockDetectionTryConvertSharedToExclusive @ 0x1406470A8 (ViDeadlockDetectionTryConvertSharedToExclusive.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14029B710 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 */

LOGICAL __stdcall ExTryConvertSharedSpinLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  volatile LONG v2; // ecx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !LODWORD(stru_140F11D08.WaitStatus) )
    return ExpTryConvertSharedSpinLockExclusiveInstrumented(SpinLock, retaddr);
  if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    return 0;
  v2 = *SpinLock;
  if ( (v2 & 0xBFFFFFFF) != 0x80000001 )
  {
    do
    {
      if ( (v2 & 0x40000000) == 0 )
        _InterlockedOr(SpinLock, 0x40000000u);
      KeYieldProcessorEx(&v5);
      v2 = *SpinLock;
    }
    while ( (*SpinLock & 0xBFFFFFFF) != 0x80000001 );
  }
  return 1;
}
