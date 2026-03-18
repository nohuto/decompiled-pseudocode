/*
 * XREFs of UsbhDispatch_BusEvent @ 0x14000DD84
 * Callers:
 *     UsbhSyncBusPause @ 0x140029CD4 (UsbhSyncBusPause.c)
 *     UsbhSyncBusResume @ 0x14002AAB4 (UsbhSyncBusResume.c)
 *     UsbhFdoSetD0Cold @ 0x14002C4AC (UsbhFdoSetD0Cold.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1400325B8 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSyncBusDisconnect @ 0x14003A318 (UsbhSyncBusDisconnect.c)
 *     UsbhBusAdd @ 0x140045FE0 (UsbhBusAdd.c)
 *     UsbhBusPnpStart @ 0x140046130 (UsbhBusPnpStart.c)
 *     UsbhBusPnpStop @ 0x1400466B0 (UsbhBusPnpStop.c)
 *     UsbhBusRemove @ 0x1400466F0 (UsbhBusRemove.c)
 *     UsbhAsyncStartComplete @ 0x14004F6D0 (UsbhAsyncStartComplete.c)
 *     UsbhHubStart @ 0x140050830 (UsbhHubStart.c)
 *     Usbh_PnpRemove @ 0x140051BF4 (Usbh_PnpRemove.c)
 * Callees:
 *     Usbh_BS_BusRun @ 0x140001DE4 (Usbh_BS_BusRun.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhBusResume_Action @ 0x14000CC28 (UsbhBusResume_Action.c)
 *     Usbh_BS_BusPause @ 0x14000D538 (Usbh_BS_BusPause.c)
 *     Usbh_BS_BusInit @ 0x14003A0D8 (Usbh_BS_BusInit.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     UsbhBusSuspend_Action @ 0x14004178C (UsbhBusSuspend_Action.c)
 *     UsbhSshBusBusy @ 0x14004190C (UsbhSshBusBusy.c)
 *     Usbh_BS_BusRemove @ 0x1400419B0 (Usbh_BS_BusRemove.c)
 *     Usbh_BS_BusStop @ 0x140041A68 (Usbh_BS_BusStop.c)
 *     Usbh_BS_BusSuspend @ 0x140041B74 (Usbh_BS_BusSuspend.c)
 */

__int64 __fastcall UsbhDispatch_BusEvent(PDEVICE_OBJECT DeviceObject, __int64 a2, int a3)
{
  __int64 v3; // rbp
  void *DeviceExtension; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  __int64 v9; // r14
  char v10; // cl
  __int64 v11; // rcx
  void *v12; // rdx
  __int64 v13; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rcx

  v3 = a3;
  FdoExt((__int64)DeviceObject);
  if ( (_DWORD)v3 == 3 )
    UsbhSshBusBusy(DeviceObject, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_c14d5bcd548e31c8cc373c847eff1ef0_Traceguids,
      v3);
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
        *(_DWORD *)v7 = 724267874;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = a2;
        *(_QWORD *)(v7 + 24) = v3;
      }
    }
  }
  v8 = FdoExt((__int64)DeviceObject);
  KeWaitForSingleObject(v8 + 612, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 76) = 2020889410;
  *(_DWORD *)(a2 + 84) = v3;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  v9 = (int)v8[610];
  *(_DWORD *)(a2 + 80) = v9;
  v10 = v8[208] + 1;
  *((_QWORD *)v8 + 167) = a2;
  v11 = v10 & 7;
  v8[208] = v11;
  v11 *= 32LL;
  *(_DWORD *)((char *)v8 + v11 + 540) = v3;
  *(_DWORD *)((char *)v8 + v11 + 544) = v8[610];
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( DeviceObject )
    {
      v12 = DeviceObject->DeviceExtension;
      if ( v12 )
      {
        v13 = *((_QWORD *)v12 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v12 + 220) & *((_DWORD *)v12 + 221));
        *(_DWORD *)v13 = 757953378;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = a2;
        *(_QWORD *)(v13 + 24) = v9;
      }
    }
  }
  switch ( (_DWORD)v9 )
  {
    case 1:
      return Usbh_BS_BusInit(DeviceObject, a2, (unsigned int)v3);
    case 2:
      return Usbh_BS_BusStop(DeviceObject, a2, (unsigned int)v3);
    case 3:
      return Usbh_BS_BusRun(DeviceObject, a2, v3);
    case 4:
      return Usbh_BS_BusPause(DeviceObject, a2, v3);
    case 5:
      return Usbh_BS_BusSuspend(DeviceObject, a2, (unsigned int)v3);
    case 6:
      return Usbh_BS_BusRemove(DeviceObject, a2, (unsigned int)v3);
  }
  v15 = FdoExt((__int64)DeviceObject);
  if ( v15[610] != (_DWORD)v9 )
  {
    v15[610] = v9;
    *(_DWORD *)(a2 + 80) = v9;
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v16 = 8LL * (unsigned int)v15[208];
  *((_QWORD *)v15 + 167) = 0LL;
  v15[v16 + 137] = v9;
  KeReleaseSemaphore((PRKSEMAPHORE)(v15 + 612), 16, 1, 0);
  return (unsigned int)v9;
}
