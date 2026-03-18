/*
 * XREFs of UsbhReleaseBusStateLock @ 0x140001008
 * Callers:
 *     Usbh_BS_BusRun @ 0x140001DE4 (Usbh_BS_BusRun.c)
 *     Usbh_BS_BusPause @ 0x14000D538 (Usbh_BS_BusPause.c)
 *     Usbh_BS_BusInit @ 0x14003A0D8 (Usbh_BS_BusInit.c)
 *     Usbh_BS_BusRemove @ 0x1400419B0 (Usbh_BS_BusRemove.c)
 *     Usbh_BS_BusStop @ 0x140041A68 (Usbh_BS_BusStop.c)
 *     Usbh_BS_BusSuspend @ 0x140041B74 (Usbh_BS_BusSuspend.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhBusResume_Action @ 0x14000CC28 (UsbhBusResume_Action.c)
 *     UsbhBusSuspend_Action @ 0x14004178C (UsbhBusSuspend_Action.c)
 */

__int64 __fastcall UsbhReleaseBusStateLock(PDEVICE_OBJECT DeviceObject, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax

  v6 = FdoExt();
  v7 = v6;
  if ( *(_DWORD *)(v6 + 2440) != a3 )
  {
    *(_DWORD *)(v6 + 2440) = a3;
    *(_DWORD *)(a2 + 80) = a3;
    if ( a3 == 3 )
    {
      UsbhBusResume_Action(DeviceObject);
    }
    else if ( a3 == 5 )
    {
      UsbhBusSuspend_Action(DeviceObject, a2);
    }
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v8 = *(unsigned int *)(v7 + 832);
  *(_QWORD *)(v7 + 1336) = 0LL;
  *(_DWORD *)(32 * v8 + v7 + 548) = a3;
  KeReleaseSemaphore((PRKSEMAPHORE)(v7 + 2448), 16, 1, 0);
  return a3;
}
