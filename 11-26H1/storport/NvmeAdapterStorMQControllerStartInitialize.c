/*
 * XREFs of NvmeAdapterStorMQControllerStartInitialize @ 0x1400DF680
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 * Callees:
 *     NvmeControllerAcquireRundown @ 0x1400C5B84 (NvmeControllerAcquireRundown.c)
 */

__int64 __fastcall NvmeAdapterStorMQControllerStartInitialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // edi

  v2 = *(_QWORD *)(a2 - 64);
  v3 = NvmeControllerAcquireRundown(v2);
  if ( v3 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 976), 1, 0) )
    {
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 552));
      return (unsigned int)-1073741436;
    }
    else
    {
      IoQueueWorkItemEx(
        *(PIO_WORKITEM *)(v2 + 176),
        (PIO_WORKITEM_ROUTINE_EX)NvmeAdapterStorMQControllerInitializeWorker,
        DelayedWorkQueue,
        (PVOID)v2);
    }
  }
  return (unsigned int)v3;
}
