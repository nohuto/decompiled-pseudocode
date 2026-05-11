/*
 * XREFs of DriverEntry @ 0x14002F13C
 * Callers:
 *     GsDriverEntry @ 0x140043010 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qZ @ 0x14000C5DC (WPP_RECORDER_AND_TRACE_SF_qZ.c)
 *     DriverCopyRegistryString @ 0x14002D9DC (DriverCopyRegistryString.c)
 *     WppLoadTracingSupport @ 0x14002E17C (WppLoadTracingSupport.c)
 *     DriverUnload @ 0x14002F2F0 (DriverUnload.c)
 *     WppInitKm @ 0x1400406DC (WppInitKm.c)
 *     wil_InitializeFeatureStaging @ 0x140043078 (wil_InitializeFeatureStaging.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  char v4; // di
  __int64 v5; // rcx
  NTSTATUS v6; // edi
  int v8; // [rsp+20h] [rbp-38h]
  int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+38h] [rbp-20h]

  KeInitializeSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey = 0;
  WPP_MAIN_CB.Queue.Wcb.DeviceContext = &WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  v4 = 1;
  WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_EXBUSAUD;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(DriverObject, RegistryPath);
  wil_InitializeFeatureStaging();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qZ(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      v9,
      v10,
      v11,
      (char)DriverObject,
      &RegistryPath->Length);
  pExtBusDeviceDispatchTable = (__int64)USBDeviceDispatchTable;
  v6 = KsInitializeDriver(DriverObject, RegistryPath, &KsDeviceDescriptor);
  if ( v6 < 0 || (v6 = DriverCopyRegistryString(v5, (const void **)RegistryPath), v6 < 0) )
  {
    DriverUnload(DriverObject);
  }
  else
  {
    PerfSystemControlDispatch = (__int64)DriverObject->MajorFunction[23];
    DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)WmiDispatchSystemControl;
    DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)UsbAudioIrpDispatcher;
    DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)UsbAudioIrpDispatcher;
    DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)UsbAudioIrpDispatcher;
    DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)UsbAudioIrpDispatcher;
    DriverObject->MajorFunction[27] = (PDRIVER_DISPATCH)UsbAudioIrpDispatcher;
    DriverObject->DriverUnload = (PDRIVER_UNLOAD)DriverUnload;
  }
  return v6;
}
