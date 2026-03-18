/*
 * XREFs of UsbhReleaseFdoPnpLock @ 0x140030244
 * Callers:
 *     UsbhIoctlGetDescriptorForPDO @ 0x14001F69C (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhFdoSystemPowerState @ 0x14002F8C0 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwRundown @ 0x14002FFDC (UsbhEtwRundown.c)
 *     UsbhInstallMsOs20RegistryProperties @ 0x1400435A0 (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x140043680 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhAsyncStop @ 0x14004F794 (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpAdd @ 0x140051480 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x140051500 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1400515A0 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStart @ 0x140051740 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051940 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x140051AB0 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_PnpRemove @ 0x140051BF4 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

LONG __fastcall UsbhReleaseFdoPnpLock(__int64 a1, __int64 a2)
{
  struct _KSEMAPHORE *v3; // rbx

  v3 = (struct _KSEMAPHORE *)FdoExt(a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  *(_DWORD *)(a2 + 48) = 1734964085;
  v3[41].Header.WaitListHead.Blink = 0LL;
  return KeReleaseSemaphore(v3 + 155, 16, 1, 0);
}
