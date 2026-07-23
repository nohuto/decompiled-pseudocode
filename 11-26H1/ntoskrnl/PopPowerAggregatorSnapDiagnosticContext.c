/*
 * XREFs of PopPowerAggregatorSnapDiagnosticContext @ 0x1407DA0A8
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1404E8B40 (PopIdlePhaseWatchdogCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopPowerAggregatorSnapDiagnosticContext(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  void *Pool2; // rax
  void *v6; // rbx

  *a1 = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v6 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, PopPowerAggregatorContext, 0x15F8uLL);
    *a1 = v6;
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
}
