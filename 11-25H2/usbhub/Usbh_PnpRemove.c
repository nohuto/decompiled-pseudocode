/*
 * XREFs of Usbh_PnpRemove @ 0x140051BF4
 * Callers:
 *     Usbh_FDO_WaitPnpAdd @ 0x140051480 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x140051500 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1400515A0 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStart @ 0x140051740 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051940 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x140051AB0 (Usbh_FDO_WaitPnpStop_CB.c)
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x14000DD84 (UsbhDispatch_BusEvent.c)
 *     UsbhReleaseFdoPnpLock @ 0x140030244 (UsbhReleaseFdoPnpLock.c)
 *     GET_FDO_PNPSTATE @ 0x14003A93C (GET_FDO_PNPSTATE.c)
 *     UsbhReferenceListClose @ 0x14004EA2C (UsbhReferenceListClose.c)
 *     UsbhModuleDispatch @ 0x140050E7C (UsbhModuleDispatch.c)
 *     UsbhSetFdoPnpState @ 0x1400512E4 (UsbhSetFdoPnpState.c)
 */

__int64 __fastcall Usbh_PnpRemove(__int64 a1, int a2)
{
  __int64 v4; // rdx

  GET_FDO_PNPSTATE(a1);
  UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 3, a2);
  UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
  UsbhDispatch_BusEvent(*(PDEVICE_OBJECT *)(a1 + 8), a1, 12);
  UsbhReferenceListClose(*(_QWORD *)(a1 + 8));
  UsbhModuleDispatch(0LL, v4, *(struct _DRIVER_OBJECT **)(a1 + 8), 2, 0LL, a1);
  return 0LL;
}
