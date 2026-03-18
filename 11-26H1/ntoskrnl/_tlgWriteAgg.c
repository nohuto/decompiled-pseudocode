/*
 * XREFs of _tlgWriteAgg @ 0x1404599C0
 * Callers:
 *     MiLogSlabEntryAllocateFailure @ 0x140206FC8 (MiLogSlabEntryAllocateFailure.c)
 *     CmpGetSharedLockHandle @ 0x1402619C0 (CmpGetSharedLockHandle.c)
 *     CmpTestRegistryLockExclusive @ 0x140261C30 (CmpTestRegistryLockExclusive.c)
 *     CmpTestRegistryLock @ 0x140261EB0 (CmpTestRegistryLock.c)
 *     CmpIsRegistryLockAcquiredRecursively @ 0x140262130 (CmpIsRegistryLockAcquiredRecursively.c)
 *     CmpRecordRegistryLockRelease @ 0x1402623A0 (CmpRecordRegistryLockRelease.c)
 *     CmpRecordRegistryLockSharedAcquire @ 0x140262610 (CmpRecordRegistryLockSharedAcquire.c)
 *     CmpIsRegistryLockAcquired @ 0x140262890 (CmpIsRegistryLockAcquired.c)
 *     CmpGetThreadInfo @ 0x140262B00 (CmpGetThreadInfo.c)
 *     MiLogPeriodicTelemetry @ 0x1402A8770 (MiLogPeriodicTelemetry.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403FC3F4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1403FEDE8 (FsRtlpRequestShareableOplock.c)
 *     MiLogNonStealNonPagedPoolWorker @ 0x1404591C0 (MiLogNonStealNonPagedPoolWorker.c)
 *     MiLogPeriodicTelemetryForSlabAllocator @ 0x1404596F0 (MiLogPeriodicTelemetryForSlabAllocator.c)
 *     MiLogSlabEntriesDemote @ 0x140508C70 (MiLogSlabEntriesDemote.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x1405B75A0 (FsRtlpOplockAckTimeoutWorker.c)
 *     KiLogFlushQueuedDpcsCalledAtDispatchLevel @ 0x1405F11A4 (KiLogFlushQueuedDpcsCalledAtDispatchLevel.c)
 *     NtCreateIoRing @ 0x140798AC0 (NtCreateIoRing.c)
 *     CmLoadAppKey @ 0x1408B2250 (CmLoadAppKey.c)
 *     CmpLogHiveFileInaccessible @ 0x1408B5990 (CmpLogHiveFileInaccessible.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     NtQueryValueKey @ 0x1408F2A10 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1408F4C30 (NtQueryKey.c)
 *     PnpTraceDmaGuardDevicePolicy @ 0x14091467C (PnpTraceDmaGuardDevicePolicy.c)
 *     PnpTraceClearDevNodeProblem @ 0x140914E48 (PnpTraceClearDevNodeProblem.c)
 *     PnpTraceSetDevNodeProblem @ 0x140916CF0 (PnpTraceSetDevNodeProblem.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140937CC0 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1409546CC (EtwpWriteAppStateChangeSummary.c)
 *     CmpBounceContextStart @ 0x14097E7D0 (CmpBounceContextStart.c)
 *     NtEnumerateValueKey @ 0x14097F290 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140A5B7C0 (NtEnumerateKey.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 *     PnpTraceInterruptConnection @ 0x140A98FBC (PnpTraceInterruptConnection.c)
 *     MiLogPinDriverAddressesWorker @ 0x140AB3130 (MiLogPinDriverAddressesWorker.c)
 *     MiLogPinDriverAddress @ 0x140AB3234 (MiLogPinDriverAddress.c)
 *     HvAnalyzeLogFiles @ 0x140ADF748 (HvAnalyzeLogFiles.c)
 *     HvpIsReadErrorTransient @ 0x140ADFBC4 (HvpIsReadErrorTransient.c)
 *     CmLoadKey @ 0x140AE15E4 (CmLoadKey.c)
 *     FsRtlpOplockPerfSendData @ 0x140AE8CD4 (FsRtlpOplockPerfSendData.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140B1F4E0 (MiLogNonRetpolineImageLoadEvent.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x140B3D1C0 (FsRtlCheckOplockForFsFilterCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     ExtractAggregateFieldTypes @ 0x140459D30 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x140459DC4 (InsertEventEntryInLookUpTable.c)
 */

NTSTATUS __fastcall tlgWriteAgg(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned __int8 a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int64 v7; // rax
  unsigned __int16 *v8; // rdx
  NTSTATUS result; // eax
  char AggregateFieldTypes; // al
  int v11; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v7 = *(_QWORD *)(a2 + 3);
  v8 = (unsigned __int16 *)(a2 + 11);
  EventDescriptor.Keyword = v7;
  UserData->Ptr = *(_QWORD *)(a1 + 8);
  UserData->Size = **(unsigned __int16 **)(a1 + 8);
  UserData->Reserved = 2;
  UserData[1].Ptr = (ULONGLONG)v8;
  UserData[1].Size = *v8;
  UserData[1].Reserved = 1;
  result = -1073741811;
  if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(a1 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    AggregateFieldTypes = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, UserData);
    if ( AggregateFieldTypes )
    {
      LOBYTE(v11) = a4;
      return InsertEventEntryInLookUpTable(
               a1,
               (unsigned int)&EventDescriptor,
               v11,
               (_DWORD)UserData,
               AggregateFieldTypes);
    }
    else
    {
      return EtwWriteEx(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0, 0LL, 0LL, a4, UserData);
    }
  }
  return result;
}
