/*
 * XREFs of PpmCheckDelayedPeriodicStart @ 0x1404B54E0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x1404B5550 (PpmCheckCustomRun.c)
 */

__int64 __fastcall PpmCheckDelayedPeriodicStart(int a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, a2, a3);
  PpmCheckMakeupCount = a1;
  result = PpmCheckCustomRun(0LL);
  PpmCheckDelayedStartWorkerQueued = 0;
  return result;
}
