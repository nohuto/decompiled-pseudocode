/*
 * XREFs of IoDiskIoAttributionDereference @ 0x14021D5D4
 * Callers:
 *     IoGetIoRateControl @ 0x140207570 (IoGetIoRateControl.c)
 *     IoRecordIoAttribution @ 0x1402077D0 (IoRecordIoAttribution.c)
 *     CcCopyReadEx @ 0x14021CC00 (CcCopyReadEx.c)
 *     IoDiskIoAttributionDereference @ 0x14021D5D4 (IoDiskIoAttributionDereference.c)
 *     CcMapAndCopyInToCache @ 0x14026D270 (CcMapAndCopyInToCache.c)
 *     MiCheckAndUpdateIoAttribution @ 0x14026DF30 (MiCheckAndUpdateIoAttribution.c)
 *     CcPerformReadAhead @ 0x140386E18 (CcPerformReadAhead.c)
 *     CcUninitializeCacheMap @ 0x14039C460 (CcUninitializeCacheMap.c)
 *     CcCompleteAsyncRead @ 0x14039E848 (CcCompleteAsyncRead.c)
 *     MiGatherMappedPages @ 0x140496CD8 (MiGatherMappedPages.c)
 *     MiFlushSection @ 0x1404ADA20 (MiFlushSection.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1404C7ED4 (IoSetDiskIoAttributionOnProcess.c)
 *     IoNotifyQuotaState @ 0x1404D7080 (IoNotifyQuotaState.c)
 *     MiSegmentDelete @ 0x140A816BC (MiSegmentDelete.c)
 *     PspIoRateEntryActivate @ 0x140AFB4A4 (PspIoRateEntryActivate.c)
 *     PspRemoveIoAttribution @ 0x140AFC3A8 (PspRemoveIoAttribution.c)
 *     PspIoRateEntryDeactivate @ 0x140B3A694 (PspIoRateEntryDeactivate.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14021D5D4 (IoDiskIoAttributionDereference.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall IoDiskIoAttributionDereference(__int64 a1)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  __int64 v5; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = *(_QWORD *)(a1 + 176);
    if ( v5 )
      IoDiskIoAttributionDereference(v5);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}
