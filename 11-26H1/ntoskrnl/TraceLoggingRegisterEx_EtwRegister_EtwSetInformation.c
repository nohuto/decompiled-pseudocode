/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80
 * Callers:
 *     IoInitializeLiveDump @ 0x1405CC0D4 (IoInitializeLiveDump.c)
 *     IopInitializeSystemVariableService @ 0x1405D3A98 (IopInitializeSystemVariableService.c)
 *     CarEtwRegister @ 0x140648A94 (CarEtwRegister.c)
 *     PrExtLogToTelemetry @ 0x1406DCD54 (PrExtLogToTelemetry.c)
 *     UcInitialize @ 0x140712834 (UcInitialize.c)
 *     HalpMiscInitializeTelemetry @ 0x140781978 (HalpMiscInitializeTelemetry.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407DFAF8 (PopAdaptiveStandbyInitialize.c)
 *     TtmInit @ 0x1407E63A8 (TtmInit.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x14080F220 (RtlpCapChkTelemetryRunOnce.c)
 *     EtwpInitializeCoverage @ 0x14082A380 (EtwpInitializeCoverage.c)
 *     VRegSetup @ 0x1408A5210 (VRegSetup.c)
 *     TlgRegisterAggregateProviderEx @ 0x140B6E47C (TlgRegisterAggregateProviderEx.c)
 *     BapdRecordFirmwareBootStats @ 0x140C07A44 (BapdRecordFirmwareBootStats.c)
 *     CcInitializeTelemetry @ 0x140C7FA64 (CcInitializeTelemetry.c)
 *     VmInitSystem @ 0x140C80258 (VmInitSystem.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 *     VslpIumInitializeTelemetry @ 0x140CB9AB4 (VslpIumInitializeTelemetry.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     KasanInitSystem @ 0x140CC7D20 (KasanInitSystem.c)
 *     KeInitSystem @ 0x140CC82B8 (KeInitSystem.c)
 *     KiRegisterTraceLoggingProvider @ 0x140CCA354 (KiRegisterTraceLoggingProvider.c)
 *     PopDiagInitialize @ 0x140CD1950 (PopDiagInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140CD6C5C (PopDirectedDripsDiagInitialize.c)
 *     SshInitialize @ 0x140CD7428 (SshInitialize.c)
 *     PspInitPhase2 @ 0x140CD842C (PspInitPhase2.c)
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 *     EtwpInitializeCoverageSampler @ 0x140CE22D0 (EtwpInitializeCoverageSampler.c)
 *     ObInitSystem @ 0x140D0936C (ObInitSystem.c)
 *     SeRmInitPhase1 @ 0x140D0B16C (SeRmInitPhase1.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     EtwSetInformation @ 0x1408287B0 (EtwSetInformation.c)
 *     EtwpRegisterKMProvider @ 0x14093B298 (EtwpRegisterKMProvider.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(__int64 a1, __int64 a2, __int64 a3)
{
  REGHANDLE *v3; // rsi
  bool v4; // zf
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF

  v3 = (REGHANDLE *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 32) == 0LL;
  v10 = *(_OWORD *)(*(_QWORD *)(a1 + 8) - 16LL);
  if ( !v4 )
    __fastfail(5u);
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 48) = a3;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v8 = EtwpRegisterKMProvider(
         (__int64)CurrentServerSiloGlobals[52].Flink,
         (ULONGLONG)&v10,
         3,
         (__int64)tlgEnableCallback,
         a1,
         v7,
         v3);
  if ( !v8 )
    EtwSetInformation(*v3, EventProviderSetTraits, *(PVOID *)(a1 + 8), **(unsigned __int16 **)(a1 + 8));
  return v8;
}
