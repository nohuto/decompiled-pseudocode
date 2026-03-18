/*
 * XREFs of PpmHeteroHgsUpdateWorker @ 0x1404F7B10
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x140A9CE8C (PpmReinitializeHeteroEngine.c)
 */

__int64 __fastcall PpmHeteroHgsUpdateWorker(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rcx

  PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, a2, a3);
  PpmHeteroHgsUpdateQueued = 0;
  LOBYTE(v3) = 1;
  return PpmReinitializeHeteroEngine(v3, 0LL);
}
