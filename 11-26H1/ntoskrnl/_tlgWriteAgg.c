/*
 * XREFs of _tlgWriteAgg @ 0x140451240
 * Callers:
 *     MiLogSlabEntryAllocateFailure @ 0x1402070A8 (MiLogSlabEntryAllocateFailure.c)
 *     CmpGetSharedLockHandle @ 0x140260F30 (CmpGetSharedLockHandle.c)
 *     CmpTestRegistryLockExclusive @ 0x1402611A0 (CmpTestRegistryLockExclusive.c)
 *     CmpTestRegistryLock @ 0x140261420 (CmpTestRegistryLock.c)
 *     CmpIsRegistryLockAcquiredRecursively @ 0x1402616A0 (CmpIsRegistryLockAcquiredRecursively.c)
 *     CmpRecordRegistryLockRelease @ 0x140261910 (CmpRecordRegistryLockRelease.c)
 *     CmpRecordRegistryLockSharedAcquire @ 0x140261B80 (CmpRecordRegistryLockSharedAcquire.c)
 *     CmpIsRegistryLockAcquired @ 0x140261E00 (CmpIsRegistryLockAcquired.c)
 *     CmpGetThreadInfo @ 0x140262070 (CmpGetThreadInfo.c)
 *     MiLogPeriodicTelemetry @ 0x1402A7B80 (MiLogPeriodicTelemetry.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403F8BE4 (FsRtlpRequestExclusiveOplock.c)
 *     MiLogNonStealNonPagedPoolWorker @ 0x140450A40 (MiLogNonStealNonPagedPoolWorker.c)
 *     MiLogPeriodicTelemetryForSlabAllocator @ 0x140450F70 (MiLogPeriodicTelemetryForSlabAllocator.c)
 *     MiLogSlabEntriesDemote @ 0x140502720 (MiLogSlabEntriesDemote.c)
 *     FsRtlpRequestShareableOplock @ 0x140514FAC (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x1405B9E10 (FsRtlpOplockAckTimeoutWorker.c)
 *     KiLogFlushQueuedDpcsCalledAtDispatchLevel @ 0x1405F3B14 (KiLogFlushQueuedDpcsCalledAtDispatchLevel.c)
 *     NtCreateIoRing @ 0x14079B5F0 (NtCreateIoRing.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     CmpLogHiveFileInaccessible @ 0x1408BBF64 (CmpLogHiveFileInaccessible.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     NtQueryValueKey @ 0x1408F8FD0 (NtQueryValueKey.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140913860 (EtwpUpdateGuidEnableInfo.c)
 *     NtQueryKey @ 0x140924BC0 (NtQueryKey.c)
 *     CmpBounceContextStart @ 0x1409407E0 (CmpBounceContextStart.c)
 *     NtEnumerateValueKey @ 0x1409412A0 (NtEnumerateValueKey.c)
 *     PnpTraceDmaGuardDevicePolicy @ 0x14096F0E8 (PnpTraceDmaGuardDevicePolicy.c)
 *     PnpTraceClearDevNodeProblem @ 0x14096F8B4 (PnpTraceClearDevNodeProblem.c)
 *     PnpTraceSetDevNodeProblem @ 0x14097175C (PnpTraceSetDevNodeProblem.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1409D0688 (EtwpWriteAppStateChangeSummary.c)
 *     NtEnumerateKey @ 0x140A68780 (NtEnumerateKey.c)
 *     PnpTraceInterruptConnection @ 0x140A9D13C (PnpTraceInterruptConnection.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 *     MiLogPinDriverAddressesWorker @ 0x140AB44D0 (MiLogPinDriverAddressesWorker.c)
 *     MiLogPinDriverAddress @ 0x140AB45D4 (MiLogPinDriverAddress.c)
 *     HvAnalyzeLogFiles @ 0x140ADCF88 (HvAnalyzeLogFiles.c)
 *     HvpIsReadErrorTransient @ 0x140ADD404 (HvpIsReadErrorTransient.c)
 *     CmLoadKey @ 0x140ADEAD4 (CmLoadKey.c)
 *     FsRtlpOplockPerfSendData @ 0x140AEAF28 (FsRtlpOplockPerfSendData.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140B21560 (MiLogNonRetpolineImageLoadEvent.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x140B3F290 (FsRtlCheckOplockForFsFilterCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     ExtractAggregateFieldTypes @ 0x1404515B0 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x140451644 (InsertEventEntryInLookUpTable.c)
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
