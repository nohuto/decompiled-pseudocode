/*
 * XREFs of RIMFreeDev @ 0x140092664
 * Callers:
 *     RIMIDERemoveInjectionDevice @ 0x14005A710 (RIMIDERemoveInjectionDevice.c)
 *     RIMOnPnpNotification @ 0x14005B7D0 (RIMOnPnpNotification.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x14009050C (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDoOnPnpNotification @ 0x140091548 (RIMDoOnPnpNotification.c)
 *     rimOnPnpArrived @ 0x140093AC0 (rimOnPnpArrived.c)
 *     rimDoRimDevChangeAsyncWorkItem @ 0x140096618 (rimDoRimDevChangeAsyncWorkItem.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401A4390 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDiscoverSpecificDevice @ 0x1401BC738 (RIMDiscoverSpecificDevice.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401FFA30 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1402006B0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1402027BC (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 * Callees:
 *     RIMFreeSpecificDev @ 0x14009270C (RIMFreeSpecificDev.c)
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x140096FAC (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMFreeDev(struct RawInputManagerObject *a1, struct RIMDEV *a2)
{
  struct RIMDEV **i; // rdi
  struct RIMDEV *v5; // rax

  RimTelemetry::ReportRimDevice(0, -__CFSHR__(*((_DWORD *)a2 + 46), 8), a2);
  for ( i = (struct RIMDEV **)((char *)a1 + 424); ; i = (struct RIMDEV **)((char *)v5 + 40) )
  {
    v5 = *i;
    if ( !*i )
      break;
    if ( v5 == a2 )
    {
      if ( *((_QWORD *)a2 + 29) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 943LL);
      *i = (struct RIMDEV *)*((_QWORD *)a2 + 5);
      *((_QWORD *)a2 + 5) = 0LL;
      RIMFreeSpecificDev(a1);
      return 0LL;
    }
  }
  return 0LL;
}
