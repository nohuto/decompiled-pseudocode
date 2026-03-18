/*
 * XREFs of MiRemoveDecayClusterTimer @ 0x1404625B8
 * Callers:
 *     MiUnlinkSingleBatchPage @ 0x1402F80B0 (MiUnlinkSingleBatchPage.c)
 *     MiDecayNodeNowEmpty @ 0x140462438 (MiDecayNodeNowEmpty.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkDecayClusterTimer @ 0x140462634 (MiUnlinkDecayClusterTimer.c)
 */

__int64 __fastcall MiRemoveDecayClusterTimer(__int64 a1)
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E347D0);
  result = *(_QWORD *)(a1 + 8);
  if ( (result & 0x100000000LL) == 0 )
  {
    *(_QWORD *)(a1 + 8) = result | 0x100000000LL;
    result = MiUnlinkDecayClusterTimer(a1);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = LODWORD(stru_140F11D08.WaitStatus);
    if ( !LODWORD(stru_140F11D08.WaitStatus) )
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E347D0, retaddr);
  }
  dword_140E347D0 = 0;
  return result;
}
