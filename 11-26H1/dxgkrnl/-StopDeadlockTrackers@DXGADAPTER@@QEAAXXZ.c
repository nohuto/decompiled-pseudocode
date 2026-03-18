/*
 * XREFs of ?StopDeadlockTrackers@DXGADAPTER@@QEAAXXZ @ 0x1402FE2F4
 * Callers:
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x14030DB28 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 * Callees:
 *     ?Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1402FE8A8 (-Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::StopDeadlockTrackers(DXGADAPTER *this)
{
  char *v2; // rdi
  char *v3; // rsi
  char *i; // rbx

  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 1243, 0, 1) == 1 )
  {
    WdLogSingleEntry0(9LL);
    WdLogGlobalForLineNumber = 12813;
    v2 = (char *)this + 4976;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 4976, 0LL);
    v3 = (char *)this + 5000;
    *((_QWORD *)this + 623) = KeGetCurrentThread();
    for ( i = (char *)*((_QWORD *)this + 625); i != v3; i = *(char **)i )
      DXGDEADLOCK_TRACKER::Cancel((DXGDEADLOCK_TRACKER *)(i - 224));
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
