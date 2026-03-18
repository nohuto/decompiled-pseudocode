/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4
 * Callers:
 *     IoInitializeLiveDump @ 0x14059433C (IoInitializeLiveDump.c)
 *     IopInitializeSystemVariableService @ 0x14059BB40 (IopInitializeSystemVariableService.c)
 *     KcsanInitSystem @ 0x1405AA910 (KcsanInitSystem.c)
 *     PdcInitializeETW @ 0x1405FB724 (PdcInitializeETW.c)
 *     CarEtwRegister @ 0x140609A04 (CarEtwRegister.c)
 *     PrExtLogToTelemetry @ 0x140657F84 (PrExtLogToTelemetry.c)
 *     UcInitialize @ 0x1406890D8 (UcInitialize.c)
 *     HalpMiscInitializeTelemetry @ 0x1406F2894 (HalpMiscInitializeTelemetry.c)
 *     TtmInit @ 0x14075A160 (TtmInit.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x14077DB40 (RtlpCapChkTelemetryRunOnce.c)
 *     EtwpInitializeCoverage @ 0x14079C038 (EtwpInitializeCoverage.c)
 *     VRegSetup @ 0x140819310 (VRegSetup.c)
 *     TlgRegisterAggregateProviderEx @ 0x140ABE9A4 (TlgRegisterAggregateProviderEx.c)
 *     BapdRecordFirmwareBootStats @ 0x140B50B80 (BapdRecordFirmwareBootStats.c)
 *     CcInitializeTelemetry @ 0x140BCD6B0 (CcInitializeTelemetry.c)
 *     VmInitSystem @ 0x140BCD898 (VmInitSystem.c)
 *     VslpIumInitializeTelemetry @ 0x140C08BD4 (VslpIumInitializeTelemetry.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 *     KasanInitSystem @ 0x140C15600 (KasanInitSystem.c)
 *     PopDiagInitialize @ 0x140C1DDA4 (PopDiagInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140C22748 (PopDirectedDripsDiagInitialize.c)
 *     SshInitialize @ 0x140C22EE0 (SshInitialize.c)
 *     PspInitPhase2 @ 0x140C23EA0 (PspInitPhase2.c)
 *     EtwpInitialize @ 0x140C2BE1C (EtwpInitialize.c)
 *     EtwpInitializeCoverageSampler @ 0x140C2D7F4 (EtwpInitializeCoverageSampler.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 *     SeRmInitPhase1 @ 0x140C4EBE4 (SeRmInitPhase1.c)
 *     KeInitSystem @ 0x140C4FA10 (KeInitSystem.c)
 *     ObInitSystem @ 0x140C4FF98 (ObInitSystem.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     EtwpRegisterKMProvider @ 0x1408B74C4 (EtwpRegisterKMProvider.c)
 *     EtwSetInformation @ 0x140A9F290 (EtwSetInformation.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(__int64 a1, __int64 a2, __int64 a3)
{
  REGHANDLE *v3; // rdi
  bool v4; // zf
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned int v7; // esi
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v3 = (REGHANDLE *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 32) == 0LL;
  v9 = *(_OWORD *)(*(_QWORD *)(a1 + 8) - 16LL);
  if ( !v4 )
    __fastfail(5u);
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 48) = a3;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = EtwpRegisterKMProvider(
         CurrentServerSiloGlobals[52].Flink,
         (unsigned int)&v9,
         3,
         (unsigned int)tlgEnableCallback,
         a1,
         retaddr,
         (__int64)v3);
  if ( !v7 )
    EtwSetInformation(*v3, EventProviderSetTraits, *(PVOID *)(a1 + 8), **(unsigned __int16 **)(a1 + 8));
  return v7;
}
