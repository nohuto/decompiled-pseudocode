/*
 * XREFs of EtwRegister @ 0x140917980
 * Callers:
 *     KiIntSteerConnect @ 0x140431CC8 (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x140504704 (BapdRegisterEtwProvider.c)
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     McGenEventRegister_EtwRegister @ 0x1405B5AA8 (McGenEventRegister_EtwRegister.c)
 *     HvlpEtwRegister @ 0x1405C39E4 (HvlpEtwRegister.c)
 *     IoInitializeLiveDump @ 0x1405CE8E8 (IoInitializeLiveDump.c)
 *     DifEtwRegisterWrapper @ 0x140652100 (DifEtwRegisterWrapper.c)
 *     HalpMiscInitializeTelemetry @ 0x140784478 (HalpMiscInitializeTelemetry.c)
 *     DbgkpStartSystemErrorHandler @ 0x14078DAAC (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14078DBB8 (DbgkCaptureLiveDump.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x1407927D0 (FsRtlpDedupChangeRegisterVolume.c)
 *     FsRtlpHeatRegisterVolume @ 0x14079305C (FsRtlpHeatRegisterVolume.c)
 *     PopDiagSleepStudyInitialize @ 0x1407D547C (PopDiagSleepStudyInitialize.c)
 *     SSHSupportEtwRegister @ 0x1407EA048 (SSHSupportEtwRegister.c)
 *     WdipSemEnableSemProvider @ 0x140827BB8 (WdipSemEnableSemProvider.c)
 *     PfSnBeginBootPhase @ 0x140BFEFAC (PfSnBeginBootPhase.c)
 *     BapdRecordFirmwareBootStats @ 0x140C0DC54 (BapdRecordFirmwareBootStats.c)
 *     SmInitSystem @ 0x140C852E8 (SmInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 *     KseInitialize @ 0x140CD3040 (KseInitialize.c)
 *     PopDiagInitialize @ 0x140CD7AF8 (PopDiagInitialize.c)
 *     PopBatteryInitPhaseTwo @ 0x140CDB010 (PopBatteryInitPhaseTwo.c)
 *     PpmEventInitialize @ 0x140CDC6AC (PpmEventInitialize.c)
 *     PerfDiagInitialize @ 0x140CE60F0 (PerfDiagInitialize.c)
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 *     WheapInitializeEventing @ 0x140CEE860 (WheapInitializeEventing.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterKMProvider @ 0x140916E38 (EtwpRegisterKMProvider.c)
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
