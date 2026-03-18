/*
 * XREFs of UsbhReleaseFdoPnpLock @ 0x1400283F4
 * Callers:
 *     UsbhIoctlGetDescriptorForPDO @ 0x1400275B4 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhEtwRundown @ 0x140028180 (UsbhEtwRundown.c)
 *     UsbhFdoSystemPowerState @ 0x140028454 (UsbhFdoSystemPowerState.c)
 *     UsbhInstallMsOs20RegistryProperties @ 0x1400430C0 (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1400431A4 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhAsyncStop @ 0x14004FC58 (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpAdd @ 0x140051970 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1400519F0 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x140051A90 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStart @ 0x140051C30 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051E30 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x140051FA0 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_PnpRemove @ 0x1400520E8 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
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
