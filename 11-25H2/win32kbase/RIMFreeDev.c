/*
 * XREFs of RIMFreeDev @ 0x1401D5288
 * Callers:
 *     rimDoRimDevChangeAsyncWorkItem @ 0x14002B53C (rimDoRimDevChangeAsyncWorkItem.c)
 *     RIMIDERemoveInjectionDevice @ 0x1400339A4 (RIMIDERemoveInjectionDevice.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x140035294 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMOnPnpNotification @ 0x140039E20 (RIMOnPnpNotification.c)
 *     RIMDoOnPnpNotification @ 0x140113F30 (RIMDoOnPnpNotification.c)
 *     rimOnPnpArrived @ 0x140181640 (rimOnPnpArrived.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401D8A10 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1401D9660 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401D9BA0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMRemoveInjectionDevice @ 0x1401DBD60 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1401DC2CC (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EFCCC (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDiscoverSpecificDevice @ 0x1401F0D54 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1401140A0 (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeSpecificDev @ 0x1401D5330 (RIMFreeSpecificDev.c)
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
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 946);
      *i = (struct RIMDEV *)*((_QWORD *)a2 + 5);
      *((_QWORD *)a2 + 5) = 0LL;
      RIMFreeSpecificDev(a1);
      return 0LL;
    }
  }
  return 0LL;
}
