/*
 * XREFs of _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18006A8B0
 * Callers:
 *     RtlpHpLfhContextCompact @ 0x1800163FC (RtlpHpLfhContextCompact.c)
 *     EtwDeliverDataBlock @ 0x1800525B0 (EtwDeliverDataBlock.c)
 *     RtlpHpSegPageRangeCommit @ 0x180069850 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18006A960 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegFreeRangeRemove @ 0x18006AF00 (RtlpHpSegFreeRangeRemove.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18006D830 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18006FB5C (LdrpLogEtwHotPatchStatus.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800707C0 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x180070918 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x180070AA4 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     RtlpHpTlLogVAChange @ 0x18008BD58 (RtlpHpTlLogVAChange.c)
 *     RtlpHpTlLogGCScheduled @ 0x180096B64 (RtlpHpTlLogGCScheduled.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x18009BBF0 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     EtwSendNotification @ 0x1800E0E80 (EtwSendNotification.c)
 *     RtlpHpTlLogMemStats @ 0x180107458 (RtlpHpTlLogMemStats.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x18011272C (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     RtlpHpTlLogGCTimerFinished @ 0x1801508D0 (RtlpHpTlLogGCTimerFinished.c)
 *     UcOnUnexpectedCodePath @ 0x180157830 (UcOnUnexpectedCodePath.c)
 *     UcpFindOrCreateTelemetryRecord @ 0x180157B98 (UcpFindOrCreateTelemetryRecord.c)
 *     LdrpCgLogFailure @ 0x18015CE90 (LdrpCgLogFailure.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x18015D73C (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x18015D848 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x18015DB44 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x18015DC1C (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18000F040 (EtwEventWriteTransfer.c)
 */

__int64 __fastcall tlgWriteTransfer_EtwEventWriteTransfer(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 v6; // rax
  unsigned __int16 *v7; // rdx
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(v9) = *a2 << 24;
  DWORD1(v9) = *(unsigned __int16 *)(a2 + 1);
  v6 = *(_QWORD *)(a2 + 3);
  v7 = (unsigned __int16 *)(a2 + 11);
  *((_QWORD *)&v9 + 1) = v6;
  *(_QWORD *)a6 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a6 + 8) = **(unsigned __int16 **)(a1 + 8);
  *(_QWORD *)(a6 + 16) = v7;
  *(_DWORD *)(a6 + 12) = 2;
  *(_DWORD *)(a6 + 24) = *v7;
  *(_DWORD *)(a6 + 28) = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), &v9, 0LL, 0LL, a5, a6);
}
