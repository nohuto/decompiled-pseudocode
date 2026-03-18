/*
 * XREFs of ExpPoolMgrResolveMaintenanceHint @ 0x140AC3850
 * Callers:
 *     ExpPoolMgrRebalanceWorker @ 0x140AC3610 (ExpPoolMgrRebalanceWorker.c)
 *     ExpPoolMgrCompactPools @ 0x140AC36CC (ExpPoolMgrCompactPools.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     ExpPoolMgrAcquirePoolListLockShared @ 0x1404C2094 (ExpPoolMgrAcquirePoolListLockShared.c)
 *     ExpPoolMgrReleasePoolListLockShared @ 0x1404CA9F4 (ExpPoolMgrReleasePoolListLockShared.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExpPoolMgrResolveMaintenanceHint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rsi
  struct _EX_RUNDOWN_REF *v6; // rbx

  v5 = (int)a2;
  ExpPoolMgrAcquirePoolListLockShared(a1, a2, a3, a4);
  v6 = *(struct _EX_RUNDOWN_REF **)(a1 + 8 * v5 + 112);
  if ( v6 && !ExAcquireRundownProtection_0(v6 + 3) )
  {
    *(_QWORD *)(a1 + 8 * v5 + 112) = 0LL;
    v6 = 0LL;
  }
  ExpPoolMgrReleasePoolListLockShared(a1);
  return v6;
}
