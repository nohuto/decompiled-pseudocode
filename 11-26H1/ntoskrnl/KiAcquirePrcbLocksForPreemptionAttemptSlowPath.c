/*
 * XREFs of KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x140230F44
 * Callers:
 *     KiAcquirePrcbLocksForPreemptionAttempt @ 0x1402309E0 (KiAcquirePrcbLocksForPreemptionAttempt.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiSelectCandidateProcessor @ 0x140236870 (KiSelectCandidateProcessor.c)
 *     KiChooseTargetProcessor @ 0x1402370C0 (KiChooseTargetProcessor.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiDowngradeIsolationUnitLockHandle @ 0x1403ED6A0 (KiDowngradeIsolationUnitLockHandle.c)
 *     KiTryUpgradeIsolationUnitLockHandle @ 0x1404CE768 (KiTryUpgradeIsolationUnitLockHandle.c)
 */

__int64 __fastcall KiAcquirePrcbLocksForPreemptionAttemptSlowPath(__int64 a1, int a2, _DWORD *a3)
{
  int i; // r9d
  unsigned int v7; // ebx
  unsigned __int8 v8; // si
  __int64 result; // rax

  for ( i = *a3 & 1; ; i = v7 )
  {
    v7 = a2;
    v8 = **(_BYTE **)(a1 + 56);
    result = v8 >> 7;
    if ( a2 < (int)result )
      v7 = v8 >> 7;
    if ( v7 == i )
      break;
    if ( (int)v7 < i )
      return KiDowngradeIsolationUnitLockHandle(a3, v7);
    result = KiTryUpgradeIsolationUnitLockHandle(a3, v7);
    if ( (_BYTE)result )
      return result;
    KiReleasePrcbLocksForIsolationUnit(a3);
    KiAcquirePrcbLocksForIsolationUnit(a1, v7, a3);
    result = *(_QWORD *)(a1 + 56);
    if ( ((*(_BYTE *)result ^ v8) & 0x80u) == 0 )
      return result;
  }
  return result;
}
