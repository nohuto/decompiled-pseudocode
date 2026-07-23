/*
 * XREFs of PpmHeteroHgsUpdateWorker @ 0x1404F1120
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x140AD89F8 (PpmReinitializeHeteroEngine.c)
 */

__int64 __fastcall PpmHeteroHgsUpdateWorker(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, a2, a3);
  PpmHeteroHgsUpdateQueued = 0;
  LOBYTE(v3) = 1;
  return PpmReinitializeHeteroEngine(v3, 0LL);
}
