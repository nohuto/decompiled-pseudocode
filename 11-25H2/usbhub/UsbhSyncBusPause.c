/*
 * XREFs of UsbhSyncBusPause @ 0x140029CD4
 * Callers:
 *     UsbhSshSuspendHub @ 0x1400297BC (UsbhSshSuspendHub.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1400325B8 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhHardReset_Action @ 0x14004C548 (UsbhHardReset_Action.c)
 *     Usbh_HRS_Queued @ 0x14004CD8C (Usbh_HRS_Queued.c)
 *     UsbhAsyncStop @ 0x14004F794 (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051940 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDispatch_BusEvent @ 0x14000DD84 (UsbhDispatch_BusEvent.c)
 */

__int64 __fastcall UsbhSyncBusPause(PDEVICE_OBJECT DeviceObject, __int64 a2, int a3)
{
  __int64 v3; // rsi
  void *DeviceExtension; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  void *v9; // rdx
  __int64 v10; // rcx

  v3 = a3;
  FdoExt((__int64)DeviceObject);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v7 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_DWORD *)v7 = 1045578064;
        *(_QWORD *)(v7 + 16) = v3;
        *(_QWORD *)(v7 + 24) = a2;
      }
    }
  }
  *(_DWORD *)(a2 + 128) = v3;
  v8 = (int)UsbhDispatch_BusEvent(DeviceObject, a2, 7);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( DeviceObject )
    {
      v9 = DeviceObject->DeviceExtension;
      if ( v9 )
      {
        v10 = *((_QWORD *)v9 + 111)
            + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v9 + 220) & *((_DWORD *)v9 + 221));
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_DWORD *)v10 = 1012023632;
        *(_QWORD *)(v10 + 24) = v8;
      }
    }
  }
  return (unsigned int)v8;
}
