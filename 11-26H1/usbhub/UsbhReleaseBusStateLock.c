/*
 * XREFs of UsbhReleaseBusStateLock @ 0x1400111B8
 * Callers:
 *     Usbh_BS_BusRun @ 0x140011EF8 (Usbh_BS_BusRun.c)
 *     Usbh_BS_BusPause @ 0x140012DBC (Usbh_BS_BusPause.c)
 *     Usbh_BS_BusInit @ 0x140039B00 (Usbh_BS_BusInit.c)
 *     Usbh_BS_BusRemove @ 0x1400414EC (Usbh_BS_BusRemove.c)
 *     Usbh_BS_BusStop @ 0x1400415A4 (Usbh_BS_BusStop.c)
 *     Usbh_BS_BusSuspend @ 0x1400416B0 (Usbh_BS_BusSuspend.c)
 * Callees:
 *     UsbhBusResume_Action @ 0x140012FB0 (UsbhBusResume_Action.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhBusSuspend_Action @ 0x1400412BC (UsbhBusSuspend_Action.c)
 */

__int64 __fastcall UsbhReleaseBusStateLock(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax

  v4 = a3;
  v7 = FdoExt(a1, a2, a3, a4);
  v8 = v7;
  if ( *(_DWORD *)(v7 + 2440) != v4 )
  {
    *(_DWORD *)(v7 + 2440) = v4;
    *(_DWORD *)(a2 + 80) = v4;
    if ( v4 == 3 )
    {
      UsbhBusResume_Action(a1);
    }
    else if ( v4 == 5 )
    {
      UsbhBusSuspend_Action(a1, a2);
    }
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v9 = 32LL * *(unsigned int *)(v8 + 832);
  *(_QWORD *)(v8 + 1336) = 0LL;
  *(_DWORD *)(v9 + v8 + 548) = v4;
  KeReleaseSemaphore((PRKSEMAPHORE)(v8 + 2448), 16, 1, 0);
  return v4;
}
