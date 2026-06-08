/*
 * XREFs of AcpiPStateNotifyWorker @ 0x140043200
 * Callers:
 *     <none>
 * Callees:
 *     ProcLibTraceProcessorSpecificEvent @ 0x14000318C (ProcLibTraceProcessorSpecificEvent.c)
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     FireWmiEvent @ 0x140003A18 (FireWmiEvent.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     AcpiEval_PPC @ 0x14004336C (AcpiEval_PPC.c)
 *     ProcLibCapChange @ 0x1400436DC (ProcLibCapChange.c)
 */

void __fastcall AcpiPStateNotifyWorker(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  char v3; // si
  int v4; // edx
  _DWORD *DeviceExtension; // rdi
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v3 = 0;
  IoFreeWorkItem(Context);
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( (DeviceExtension[70] & 0x70000000) != 0 )
  {
    if ( (int)AcpiEval_PPC(DeviceObject->DeviceExtension, &v6) >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1400191A8,
        0LL);
      v3 = 1;
      ProcLibCapChange(DeviceExtension, v6, (unsigned int)DeviceExtension[128], 100LL);
      ((void (__fastcall *)(_DWORD *))qword_140019700)(DeviceExtension);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      1,
      90,
      (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
  }
  v6 = DeviceExtension[116];
  ProcLibTraceProcessorSpecificEvent(
    (__int64)DeviceExtension,
    (const EVENT_DESCRIPTOR *)L"'",
    &PPM_ETW_NOTIFY_80_HV,
    4,
    (__int64)&v6);
  FireWmiEvent((_QWORD *)DeviceExtension + 83, (__int64)(DeviceExtension + 116));
  if ( v3 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1400191A8);
}
