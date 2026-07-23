/*
 * XREFs of IoDiskIoAttributionDereference @ 0x14021EF64
 * Callers:
 *     IoGetIoRateControl @ 0x140207650 (IoGetIoRateControl.c)
 *     IoRecordIoAttribution @ 0x1402078B0 (IoRecordIoAttribution.c)
 *     CcCopyReadEx @ 0x14021E590 (CcCopyReadEx.c)
 *     IoDiskIoAttributionDereference @ 0x14021EF64 (IoDiskIoAttributionDereference.c)
 *     CcMapAndCopyInToCache @ 0x14026C7E0 (CcMapAndCopyInToCache.c)
 *     MiCheckAndUpdateIoAttribution @ 0x14026D4A0 (MiCheckAndUpdateIoAttribution.c)
 *     CcPerformReadAhead @ 0x140388BC8 (CcPerformReadAhead.c)
 *     CcUninitializeCacheMap @ 0x14039E1C0 (CcUninitializeCacheMap.c)
 *     CcCompleteAsyncRead @ 0x1403A05A8 (CcCompleteAsyncRead.c)
 *     MiGatherMappedPages @ 0x140490828 (MiGatherMappedPages.c)
 *     MiFlushSection @ 0x1404A70A8 (MiFlushSection.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1404C1C14 (IoSetDiskIoAttributionOnProcess.c)
 *     IoNotifyQuotaState @ 0x1404D0850 (IoNotifyQuotaState.c)
 *     MiSegmentDelete @ 0x140A8752C (MiSegmentDelete.c)
 *     PspIoRateEntryActivate @ 0x140ABECE0 (PspIoRateEntryActivate.c)
 *     PspRemoveIoAttribution @ 0x140ABF298 (PspRemoveIoAttribution.c)
 *     PspIoRateEntryDeactivate @ 0x140B3CA34 (PspIoRateEntryDeactivate.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14021EF64 (IoDiskIoAttributionDereference.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
