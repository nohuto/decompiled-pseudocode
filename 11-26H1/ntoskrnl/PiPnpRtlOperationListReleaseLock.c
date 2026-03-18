/*
 * XREFs of PiPnpRtlOperationListReleaseLock @ 0x1409A7E68
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x140990D44 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 */

__int64 PiPnpRtlOperationListReleaseLock()
{
  __int64 v0; // rdx
  __int64 v1; // r8

  ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v0, v1);
}
