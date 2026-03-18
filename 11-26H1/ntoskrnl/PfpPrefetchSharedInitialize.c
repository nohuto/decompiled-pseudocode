/*
 * XREFs of PfpPrefetchSharedInitialize @ 0x1409B70A4
 * Callers:
 *     PfpQueryFileExtentsRequest @ 0x1407C589C (PfpQueryFileExtentsRequest.c)
 *     PfpPrefetchRequestPerform @ 0x1409AF298 (PfpPrefetchRequestPerform.c)
 *     PfSnAsyncPrefetchWorker @ 0x1409B77C0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall PfpPrefetchSharedInitialize(__int64 a1)
{
  memset_0((void *)a1, 0, 0x90uLL);
  *(_QWORD *)(a1 + 48) = a1;
  *(_QWORD *)(a1 + 40) = PfpPrefetchSharedConflictNotifyStart;
  KeInitializeEvent((PRKEVENT)(a1 + 88), NotificationEvent, 0);
  *(_QWORD *)(a1 + 120) = 1LL;
}
