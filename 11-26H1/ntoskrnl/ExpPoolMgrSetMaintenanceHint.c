/*
 * XREFs of ExpPoolMgrSetMaintenanceHint @ 0x140AC38B0
 * Callers:
 *     ExpPoolMgrRebalanceWorker @ 0x140AC3610 (ExpPoolMgrRebalanceWorker.c)
 *     ExpPoolMgrCompactPools @ 0x140AC36CC (ExpPoolMgrCompactPools.c)
 * Callees:
 *     ExpPoolMgrAcquirePoolListLockExclusive @ 0x1404D0CB0 (ExpPoolMgrAcquirePoolListLockExclusive.c)
 *     ExpPoolMgrReleasePoolListLockExclusive @ 0x1404D15DC (ExpPoolMgrReleasePoolListLockExclusive.c)
 */

void __fastcall ExpPoolMgrSetMaintenanceHint(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rbx

  v5 = (int)a2;
  ExpPoolMgrAcquirePoolListLockExclusive(a1, a2, a3, a4);
  *(_QWORD *)(a1 + 8 * v5 + 112) = a3;
  ExpPoolMgrReleasePoolListLockExclusive(a1);
}
