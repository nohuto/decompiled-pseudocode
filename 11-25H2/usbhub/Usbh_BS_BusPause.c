/*
 * XREFs of Usbh_BS_BusPause @ 0x14000D538
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x14000DD84 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     UsbhReleaseBusStateLock @ 0x140001008 (UsbhReleaseBusStateLock.c)
 *     UsbhBusPnpStop_Action @ 0x140001FCC (UsbhBusPnpStop_Action.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhBusResume_Action @ 0x14000CC28 (UsbhBusResume_Action.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     UsbhBusDisconnect_Action @ 0x14004165C (UsbhBusDisconnect_Action.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1400494A8 (Usbh_BusRemove_PdoEvent.c)
 */

__int64 __fastcall Usbh_BS_BusPause(PDEVICE_OBJECT DeviceObject, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // r14d
  void *DeviceExtension; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  int v10; // ebx
  int v11; // ebx
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  __int64 v14; // rax
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  __int64 v21; // rdx
  int v22; // ebx
  unsigned int v23; // r8d

  v3 = a3;
  FdoExt((__int64)DeviceObject);
  FdoExt(*(_QWORD *)(a2 + 8));
  v6 = *(_DWORD *)(a2 + 80);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v8 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v8 = 1397781346;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = a2;
        *(_QWORD *)(v8 + 24) = v3;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_c14d5bcd548e31c8cc373c847eff1ef0_Traceguids,
      v3);
  v9 = 3;
  v10 = v3 - 3;
  if ( !v10 )
  {
    UsbhBusPnpStop_Action((__int64)DeviceObject, a2);
LABEL_29:
    v23 = 2;
    goto LABEL_30;
  }
  v11 = v10 - 2;
  if ( v11 )
  {
    v16 = v11 - 1;
    if ( !v16 )
    {
      v23 = 5;
      goto LABEL_30;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
        v23 = 3;
        goto LABEL_30;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        v23 = v6;
        goto LABEL_30;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = a2;
        v22 = v20 - 1;
        if ( v22 )
        {
          if ( v22 != 1 )
          {
            v23 = v6;
            return (unsigned int)UsbhReleaseBusStateLock(DeviceObject, v21, v23);
          }
          Usbh_BusRemove_PdoEvent(*(_QWORD *)(a2 + 8), a2);
          goto LABEL_29;
        }
        UsbhBusDisconnect_Action(DeviceObject, a2);
      }
    }
    v23 = 4;
LABEL_30:
    v21 = a2;
    return (unsigned int)UsbhReleaseBusStateLock(DeviceObject, v21, v23);
  }
  v12 = FdoExt((__int64)DeviceObject);
  v13 = v12;
  if ( v12[610] != 3 )
  {
    v12[610] = 3;
    *(_DWORD *)(a2 + 80) = 3;
    UsbhBusResume_Action(DeviceObject, a2);
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v14 = 8LL * (unsigned int)v13[208];
  *((_QWORD *)v13 + 167) = 0LL;
  v13[v14 + 137] = 3;
  KeReleaseSemaphore((PRKSEMAPHORE)(v13 + 612), 16, 1, 0);
  return v9;
}
