/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20
 * Callers:
 *     IoInitializeLiveDump @ 0x1405CE8E8 (IoInitializeLiveDump.c)
 *     IopInitializeSystemVariableService @ 0x1405D6288 (IopInitializeSystemVariableService.c)
 *     CarEtwRegister @ 0x14064C674 (CarEtwRegister.c)
 *     PrExtLogToTelemetry @ 0x1406E0FF4 (PrExtLogToTelemetry.c)
 *     UcInitialize @ 0x14071752C (UcInitialize.c)
 *     HalpMiscInitializeTelemetry @ 0x140784478 (HalpMiscInitializeTelemetry.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407E44EC (PopAdaptiveStandbyInitialize.c)
 *     TtmInit @ 0x1407EBF08 (TtmInit.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x140814CB0 (RtlpCapChkTelemetryRunOnce.c)
 *     EtwpInitializeCoverage @ 0x1408305C0 (EtwpInitializeCoverage.c)
 *     VRegSetup @ 0x1408AB680 (VRegSetup.c)
 *     TlgRegisterAggregateProviderEx @ 0x140B7192C (TlgRegisterAggregateProviderEx.c)
 *     BapdRecordFirmwareBootStats @ 0x140C0DC54 (BapdRecordFirmwareBootStats.c)
 *     CcInitializeTelemetry @ 0x140C85A64 (CcInitializeTelemetry.c)
 *     VmInitSystem @ 0x140C86258 (VmInitSystem.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 *     VslpIumInitializeTelemetry @ 0x140CBFAF4 (VslpIumInitializeTelemetry.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 *     KasanInitSystem @ 0x140CCDE10 (KasanInitSystem.c)
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 *     KiRegisterTraceLoggingProvider @ 0x140CD0434 (KiRegisterTraceLoggingProvider.c)
 *     PopDiagInitialize @ 0x140CD7AF8 (PopDiagInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140CDCFB0 (PopDirectedDripsDiagInitialize.c)
 *     SshInitialize @ 0x140CDD7A8 (SshInitialize.c)
 *     PspInitPhase2 @ 0x140CDE7AC (PspInitPhase2.c)
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 *     EtwpInitializeCoverageSampler @ 0x140CE8670 (EtwpInitializeCoverageSampler.c)
 *     ObInitSystem @ 0x140D0F63C (ObInitSystem.c)
 *     SeRmInitPhase1 @ 0x140D1143C (SeRmInitPhase1.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwSetInformation @ 0x14082E9F0 (EtwSetInformation.c)
 *     EtwpRegisterKMProvider @ 0x140916E38 (EtwpRegisterKMProvider.c)
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
