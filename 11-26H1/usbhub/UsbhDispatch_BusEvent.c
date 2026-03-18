/*
 * XREFs of UsbhDispatch_BusEvent @ 0x140012A78
 * Callers:
 *     UsbhSyncBusPause @ 0x140006D64 (UsbhSyncBusPause.c)
 *     UsbhSyncBusResume @ 0x140009A74 (UsbhSyncBusResume.c)
 *     UsbhFdoSetD0Cold @ 0x140030750 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoSetPowerDx_Action @ 0x14003743C (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSyncBusDisconnect @ 0x140039D40 (UsbhSyncBusDisconnect.c)
 *     UsbhBusAdd @ 0x140045B30 (UsbhBusAdd.c)
 *     UsbhBusPnpStart @ 0x140045C80 (UsbhBusPnpStart.c)
 *     UsbhBusPnpStop @ 0x1400461F0 (UsbhBusPnpStop.c)
 *     UsbhBusRemove @ 0x140046230 (UsbhBusRemove.c)
 *     UsbhAsyncStartComplete @ 0x14004FB94 (UsbhAsyncStartComplete.c)
 *     UsbhHubStart @ 0x140050D10 (UsbhHubStart.c)
 *     Usbh_PnpRemove @ 0x1400520E8 (Usbh_PnpRemove.c)
 * Callees:
 *     Usbh_BS_BusRun @ 0x140011EF8 (Usbh_BS_BusRun.c)
 *     Usbh_BS_BusPause @ 0x140012DBC (Usbh_BS_BusPause.c)
 *     UsbhBusResume_Action @ 0x140012FB0 (UsbhBusResume_Action.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_BS_BusInit @ 0x140039B00 (Usbh_BS_BusInit.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     UsbhBusSuspend_Action @ 0x1400412BC (UsbhBusSuspend_Action.c)
 *     UsbhSshBusBusy @ 0x140041448 (UsbhSshBusBusy.c)
 *     Usbh_BS_BusRemove @ 0x1400414EC (Usbh_BS_BusRemove.c)
 *     Usbh_BS_BusStop @ 0x1400415A4 (Usbh_BS_BusStop.c)
 *     Usbh_BS_BusSuspend @ 0x1400416B0 (Usbh_BS_BusSuspend.c)
 */

__int64 __fastcall UsbhDispatch_BusEvent(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  volatile signed __int32 *DeviceExtension; // rcx
  signed __int32 v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  char v19; // cl
  __int64 v20; // rcx
  volatile signed __int32 *v21; // rcx
  signed __int32 v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx

  v4 = (int)a3;
  FdoExt(a1, a2, a3, a4);
  if ( (_DWORD)v4 == 3 )
    UsbhSshBusBusy(a1, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_c14d5bcd548e31c8cc373c847eff1ef0_Traceguids,
      v4);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = (volatile signed __int32 *)a1->DeviceExtension;
      if ( DeviceExtension )
      {
        v11 = _InterlockedExchangeAdd(DeviceExtension + 220, 0xFFFFFFFF);
        v12 = *((_DWORD *)DeviceExtension + 221);
        v13 = *((_QWORD *)DeviceExtension + 111);
        v7 = 32LL * ((v11 - 1) & v12);
        *(_DWORD *)(v7 + v13) = 724267874;
        *(_QWORD *)(v7 + v13 + 8) = 0LL;
        *(_QWORD *)(v7 + v13 + 16) = a2;
        *(_QWORD *)(v7 + v13 + 24) = v4;
      }
    }
  }
  v14 = FdoExt(a1, v7, v8, v9);
  KeWaitForSingleObject((PVOID)(v14 + 2448), Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 76) = 2020889410;
  *(_DWORD *)(a2 + 84) = v4;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  v18 = *(int *)(v14 + 2440);
  *(_DWORD *)(a2 + 80) = v18;
  v19 = *(_DWORD *)(v14 + 832) + 1;
  *(_QWORD *)(v14 + 1336) = a2;
  v20 = v19 & 7;
  *(_DWORD *)(v14 + 832) = v20;
  v20 *= 32LL;
  *(_DWORD *)(v20 + v14 + 540) = v4;
  *(_DWORD *)(v20 + v14 + 544) = *(_DWORD *)(v14 + 2440);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( a1 )
    {
      v21 = (volatile signed __int32 *)a1->DeviceExtension;
      if ( v21 )
      {
        v22 = _InterlockedExchangeAdd(v21 + 220, 0xFFFFFFFF);
        v23 = *((_DWORD *)v21 + 221);
        v24 = *((_QWORD *)v21 + 111);
        v15 = 32LL * ((v22 - 1) & v23);
        *(_DWORD *)(v15 + v24) = 757953378;
        *(_QWORD *)(v15 + v24 + 8) = 0LL;
        *(_QWORD *)(v15 + v24 + 16) = a2;
        *(_QWORD *)(v15 + v24 + 24) = v18;
      }
    }
  }
  switch ( (_DWORD)v18 )
  {
    case 1:
      return Usbh_BS_BusInit(a1, a2, (unsigned int)v4);
    case 2:
      return Usbh_BS_BusStop(a1, a2, (unsigned int)v4);
    case 3:
      return Usbh_BS_BusRun(a1, a2, (unsigned int)v4, v17);
    case 4:
      return Usbh_BS_BusPause(a1, a2, (unsigned int)v4);
    case 5:
      return Usbh_BS_BusSuspend(a1, a2, (unsigned int)v4);
    case 6:
      return Usbh_BS_BusRemove(a1, a2, (unsigned int)v4);
  }
  v26 = FdoExt(a1, v15, v16, v17);
  if ( *(_DWORD *)(v26 + 2440) != (_DWORD)v18 )
  {
    *(_DWORD *)(v26 + 2440) = v18;
    *(_DWORD *)(a2 + 80) = v18;
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v27 = 32LL * *(unsigned int *)(v26 + 832);
  *(_QWORD *)(v26 + 1336) = 0LL;
  *(_DWORD *)(v27 + v26 + 548) = v18;
  KeReleaseSemaphore((PRKSEMAPHORE)(v26 + 2448), 16, 1, 0);
  return (unsigned int)v18;
}
