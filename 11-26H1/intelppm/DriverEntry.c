/*
 * XREFs of DriverEntry @ 0x14004A5E0
 * Callers:
 *     FxDriverEntryWorker @ 0x140007F24 (FxDriverEntryWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     WppLoadTracingSupport @ 0x1400298DC (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x14002A188 (WppInitKm.c)
 *     ProcLibDriverCleanup @ 0x14002D250 (ProcLibDriverCleanup.c)
 *     WppCleanupKm @ 0x14002D2AC (WppCleanupKm.c)
 *     wil_UninitializeFeatureStaging @ 0x14002D5EC (wil_UninitializeFeatureStaging.c)
 *     wil_InitializeFeatureStaging @ 0x14004A794 (wil_InitializeFeatureStaging.c)
 *     ProcLibGlobalInit @ 0x14004B8C0 (ProcLibGlobalInit.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS v4; // ebx
  unsigned __int16 v5; // r9
  unsigned int v6; // r8d
  __int64 v8; // [rsp+28h] [rbp-40h]
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF

  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_ProcessorDriverTraceGuid;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  wil_InitializeFeatureStaging();
  v9[0] = 32LL;
  v9[1] = EvtDriverDeviceAdd;
  v9[3] = 0LL;
  v9[2] = EvtDriverUnload;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, _QWORD, _QWORD *, _QWORD))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         0LL,
         v9,
         0LL);
  if ( v4 >= 0 )
  {
    KeInitializeAffinityEx2(&unk_140019238, 32LL);
    dword_1400191A4 = KeQueryActiveProcessorAffinity2(&unk_140019238);
    KeInitializeAffinityEx2(&unk_1400195E8, 32LL);
    v4 = ProcLibGlobalInit((PDEVICE_OBJECT)DriverObject);
    if ( v4 >= 0 )
      return 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 11;
      v6 = 3;
      goto LABEL_7;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = 10;
    v6 = 4;
LABEL_7:
    LODWORD(v8) = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v6,
      v5,
      (__int64)&WPP_2180814116133f7fef7f45f5db7b6d6f_Traceguids,
      v8);
  }
  ProcLibDriverCleanup();
  WppCleanupKm((__int64)DriverObject);
  wil_UninitializeFeatureStaging();
  return v4;
}
