/*
 * XREFs of _tlgWriteAgg @ 0x1403BAC2C
 * Callers:
 *     CmpThreadInfoLogStack @ 0x14020704C (CmpThreadInfoLogStack.c)
 *     MiLogPeriodicTelemetry @ 0x1403BA494 (MiLogPeriodicTelemetry.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1404E552C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1404E5DD0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x14057DE00 (FsRtlpOplockAckTimeoutWorker.c)
 *     MiLogSlabEntriesDemote @ 0x14067CCEC (MiLogSlabEntriesDemote.c)
 *     FsRtlpOplockPerfSendData @ 0x1406FFED4 (FsRtlpOplockPerfSendData.c)
 *     NtCreateIoRing @ 0x14070B060 (NtCreateIoRing.c)
 *     PnpTraceSetDevNodeProblem @ 0x140831A60 (PnpTraceSetDevNodeProblem.c)
 *     NtEnumerateValueKey @ 0x140840320 (NtEnumerateValueKey.c)
 *     NtQueryKey @ 0x14084D9C0 (NtQueryKey.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpLogHiveFileInaccessible @ 0x14091005C (CmpLogHiveFileInaccessible.c)
 *     CmLoadKey @ 0x140910E98 (CmLoadKey.c)
 *     CmLoadAppKey @ 0x1409122B0 (CmLoadAppKey.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140920364 (EtwpWriteAppStateChangeSummary.c)
 *     CmpBounceContextStart @ 0x140996800 (CmpBounceContextStart.c)
 *     PnpTraceInterruptConnection @ 0x1409A28D0 (PnpTraceInterruptConnection.c)
 *     PnpTraceClearDevNodeProblem @ 0x1409AD48C (PnpTraceClearDevNodeProblem.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1409E53C0 (EtwpUpdateGuidEnableInfo.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1409F2950 (FsRtlCheckOplockForFsFilterCallback.c)
 *     HvAnalyzeLogFiles @ 0x1409F9BC4 (HvAnalyzeLogFiles.c)
 *     HvpIsReadErrorTransient @ 0x1409FA200 (HvpIsReadErrorTransient.c)
 *     MiLogPinDriverAddressesWorker @ 0x140A2F6F0 (MiLogPinDriverAddressesWorker.c)
 *     MiLogPinDriverAddress @ 0x140A2F7F4 (MiLogPinDriverAddress.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140A7F0B8 (MiLogNonRetpolineImageLoadEvent.c)
 *     PnpTraceDmaGuardDevicePolicy @ 0x140AB46EC (PnpTraceDmaGuardDevicePolicy.c)
 * Callees:
 *     TlgAggregateAbsorbEvent @ 0x1403BACC0 (TlgAggregateAbsorbEvent.c)
 */

__int64 __fastcall tlgWriteAgg(__int64 a1, unsigned __int8 *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned __int16 *v6; // rdx
  _DWORD v8[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v8[0] = *a2 << 24;
  v8[1] = *(unsigned __int16 *)(a2 + 1);
  v5 = *(_QWORD *)(a2 + 3);
  v6 = (unsigned __int16 *)(a2 + 11);
  v9 = v5;
  *(_QWORD *)a5 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a5 + 8) = **(unsigned __int16 **)(a1 + 8);
  *(_QWORD *)(a5 + 16) = v6;
  *(_DWORD *)(a5 + 12) = 2;
  *(_DWORD *)(a5 + 24) = *v6;
  *(_DWORD *)(a5 + 28) = 1;
  return TlgAggregateAbsorbEvent(a1, v8, a4);
}
