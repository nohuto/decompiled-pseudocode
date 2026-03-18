/*
 * XREFs of ?StartDeadlockTrackers@DXGADAPTER@@QEAAXXZ @ 0x14030F698
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x14030E300 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     ?Activate@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1402FEBD4 (-Activate@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::StartDeadlockTrackers(DXGADAPTER *this)
{
  char *v2; // rdi
  char *v3; // rsi
  char *i; // rbx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 1243, 1, 0) )
  {
    WdLogSingleEntry0(9LL);
    WdLogGlobalForLineNumber = 12790;
    v2 = (char *)this + 4976;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 4976, 0LL);
    v3 = (char *)this + 5000;
    *((_QWORD *)this + 623) = KeGetCurrentThread();
    for ( i = (char *)*((_QWORD *)this + 625); i != v3; i = *(char **)i )
      DXGDEADLOCK_TRACKER::Activate((DXGDEADLOCK_TRACKER *)(i - 224));
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
