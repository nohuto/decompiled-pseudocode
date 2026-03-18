/*
 * XREFs of EtwRegister @ 0x14093BDE0
 * Callers:
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 *     KiIntSteerConnect @ 0x140424BD8 (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x14050AC94 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister_EtwRegister @ 0x1405B3298 (McGenEventRegister_EtwRegister.c)
 *     HvlpEtwRegister @ 0x1405C1174 (HvlpEtwRegister.c)
 *     IoInitializeLiveDump @ 0x1405CC0D4 (IoInitializeLiveDump.c)
 *     DifEtwRegisterWrapper @ 0x14064E520 (DifEtwRegisterWrapper.c)
 *     HalpMiscInitializeTelemetry @ 0x140781978 (HalpMiscInitializeTelemetry.c)
 *     DbgkpStartSystemErrorHandler @ 0x14078AF7C (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14078B088 (DbgkCaptureLiveDump.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x14078FCA0 (FsRtlpDedupChangeRegisterVolume.c)
 *     FsRtlpHeatRegisterVolume @ 0x14079052C (FsRtlpHeatRegisterVolume.c)
 *     PopDiagSleepStudyInitialize @ 0x1407D23DC (PopDiagSleepStudyInitialize.c)
 *     SSHSupportEtwRegister @ 0x1407E44D8 (SSHSupportEtwRegister.c)
 *     WdipSemEnableSemProvider @ 0x1408219A8 (WdipSemEnableSemProvider.c)
 *     PfSnBeginBootPhase @ 0x140BF8FAC (PfSnBeginBootPhase.c)
 *     BapdRecordFirmwareBootStats @ 0x140C07A44 (BapdRecordFirmwareBootStats.c)
 *     SmInitSystem @ 0x140C7F2E8 (SmInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     KseInitialize @ 0x140CCCEE0 (KseInitialize.c)
 *     PopDiagInitialize @ 0x140CD1950 (PopDiagInitialize.c)
 *     PopBatteryInitPhaseTwo @ 0x140CD4C90 (PopBatteryInitPhaseTwo.c)
 *     PpmEventInitialize @ 0x140CD6358 (PpmEventInitialize.c)
 *     PerfDiagInitialize @ 0x140CDFD58 (PerfDiagInitialize.c)
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 *     WheapInitializeEventing @ 0x140CE84C0 (WheapInitializeEventing.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterKMProvider @ 0x14093B298 (EtwpRegisterKMProvider.c)
 */

NTSTATUS __stdcall EtwRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // r9
  __int64 v8; // r10
  ULONGLONG v9; // r11

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return EtwpRegisterKMProvider((__int64)CurrentServerSiloGlobals[52].Flink, v9, 3, v5, v6, v8, v7);
}
