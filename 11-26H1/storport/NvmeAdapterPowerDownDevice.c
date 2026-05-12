/*
 * XREFs of NvmeAdapterPowerDownDevice @ 0x140124260
 * Callers:
 *     NvmeAdapterSetPowerIrp @ 0x1401265F4 (NvmeAdapterSetPowerIrp.c)
 * Callees:
 *     NvmeAdapterAcquireRemoveLock @ 0x14004B464 (NvmeAdapterAcquireRemoveLock.c)
 *     NvmeAdapterIsOutstandingRequest @ 0x1400D9360 (NvmeAdapterIsOutstandingRequest.c)
 *     NvmeAdapterLock @ 0x1400D9540 (NvmeAdapterLock.c)
 *     NvmeAdapterStopOnPowerdown @ 0x140126C80 (NvmeAdapterStopOnPowerdown.c)
 */

__int64 __fastcall NvmeAdapterPowerDownDevice(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  _QWORD *i; // rdi
  __int64 v6; // rcx

  NvmeAdapterAcquireRemoveLock(a1);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 1152);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 1288) + 40LL) + 192LL) )
    {
      KeCancelTimer((PKTIMER)(*(_QWORD *)(*(_QWORD *)(v4 + 1288) + 40LL) + 128LL));
      KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(*(_QWORD *)(v4 + 1288) + 40LL) + 64LL));
      _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v4 + 1288) + 40LL) + 192LL), 0, 1);
    }
  }
  else if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1192), 1u);
    for ( i = *(_QWORD **)(a1 + 1304); i != (_QWORD *)(a1 + 1304); i = (_QWORD *)*i )
    {
      if ( *(_DWORD *)(*(_QWORD *)(i[147] + 40LL) + 192LL) )
      {
        KeCancelTimer((PKTIMER)(*(_QWORD *)(i[147] + 40LL) + 128LL));
        KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(i[147] + 40LL) + 64LL));
        _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(i[147] + 40LL) + 192LL), 0, 1);
      }
    }
    ExReleaseResourceLite((PERESOURCE)(a1 + 1192));
    KeLeaveCriticalRegion();
  }
  NvmeAdapterLock(a1);
  *(_BYTE *)(a2[23] + 3LL) |= 1u;
  if ( NvmeAdapterIsOutstandingRequest(a1) )
  {
    v6 = *(_QWORD *)(a1 + 160);
    if ( v6 && *(_QWORD *)(v6 + 56) )
    {
      _InterlockedExchange64((volatile __int64 *)(v6 + 128), (__int64)NvmeAdapterStopOnPowerdown);
      IoQueueWorkItem(
        *(PIO_WORKITEM *)(*(_QWORD *)(a1 + 160) + 56LL),
        (PIO_WORKITEM_ROUTINE)NvmeAdapterWaitForOutstandingIoComplete,
        DelayedWorkQueue,
        a2);
    }
  }
  else
  {
    NvmeAdapterStopOnPowerdown(*(_QWORD *)(a1 + 8), a2, 0LL);
  }
  return 259LL;
}
