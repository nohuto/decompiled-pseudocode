/*
 * XREFs of DriverEntry @ 0x140044148
 * Callers:
 *     FxDriverEntryWorker @ 0x140004F54 (FxDriverEntryWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     ProcLibDriverCleanup @ 0x1400255E0 (ProcLibDriverCleanup.c)
 *     WppCleanupKm @ 0x14002563C (WppCleanupKm.c)
 *     WppInitKm @ 0x1400256F0 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1400257D0 (WppLoadTracingSupport.c)
 *     wil_UninitializeFeatureStaging @ 0x140025BAC (wil_UninitializeFeatureStaging.c)
 *     wil_InitializeFeatureStaging @ 0x1400442FC (wil_InitializeFeatureStaging.c)
 *     ProcLibGlobalInit @ 0x140045428 (ProcLibGlobalInit.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  int v4; // edx
  NTSTATUS v5; // ebx
  int v6; // r9d
  int v7; // r8d
  __int64 v9; // [rsp+28h] [rbp-40h]
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF

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
  v10[0] = 32LL;
  v10[1] = EvtDriverDeviceAdd;
  v10[3] = 0LL;
  v10[2] = EvtDriverUnload;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, _QWORD, _QWORD *, _QWORD))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         0LL,
         v10,
         0LL);
  if ( v5 >= 0 )
  {
    KeInitializeAffinityEx2(&unk_140015668, 32LL);
    dword_1400155D4 = KeQueryActiveProcessorAffinity2(&unk_140015668);
    KeInitializeAffinityEx2(&unk_140015A18, 32LL);
    v5 = ProcLibGlobalInit((PDEVICE_OBJECT)DriverObject);
    if ( v5 >= 0 )
      return 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 11;
      v7 = 3;
      goto LABEL_7;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 10;
    v7 = 4;
LABEL_7:
    LODWORD(v9) = v5;
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      v7,
      v6,
      (__int64)&WPP_2180814116133f7fef7f45f5db7b6d6f_Traceguids,
      v9);
  }
  ProcLibDriverCleanup();
  WppCleanupKm((__int64)DriverObject);
  wil_UninitializeFeatureStaging();
  return v5;
}
