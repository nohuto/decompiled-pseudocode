/*
 * XREFs of _tlgKeywordOn @ 0x1800EB8E8
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800525B0 (EtwDeliverDataBlock.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x180070AA4 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x18011272C (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     UcOnUnexpectedCodePath @ 0x180157830 (UcOnUnexpectedCodePath.c)
 *     UcpFindOrCreateTelemetryRecord @ 0x180157B98 (UcpFindOrCreateTelemetryRecord.c)
 *     LdrpCgLogFailure @ 0x18015CE90 (LdrpCgLogFailure.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x18015D73C (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x18015D848 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x18015DB44 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x18015DC1C (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 * Callees:
 *     <none>
 */

char __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
