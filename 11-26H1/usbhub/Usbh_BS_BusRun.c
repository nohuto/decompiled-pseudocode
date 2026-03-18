/*
 * XREFs of Usbh_BS_BusRun @ 0x140011EF8
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x140012A78 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     UsbhReleaseBusStateLock @ 0x1400111B8 (UsbhReleaseBusStateLock.c)
 *     UsbhBusPnpStop_Action @ 0x140011CAC (UsbhBusPnpStop_Action.c)
 *     UsbhBusPause_Action @ 0x14001498C (UsbhBusPause_Action.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     UsbhSshBusBusy @ 0x140041448 (UsbhSshBusBusy.c)
 */

__int64 __fastcall Usbh_BS_BusRun(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r9
  unsigned int v11; // ebp
  volatile signed __int32 *DeviceExtension; // rcx
  signed __int32 v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  struct _DEVICE_OBJECT *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // ebx
  int v23; // esi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  int v31; // esi
  __int64 v32; // r8

  v4 = (int)a3;
  FdoExt(DeviceObject, a2, a3, a4);
  FdoExt(*(_QWORD *)(a2 + 8), v7, v8, v9);
  v11 = *(_DWORD *)(a2 + 80);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = (volatile signed __int32 *)DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v13 = _InterlockedExchangeAdd(DeviceExtension + 220, 0xFFFFFFFF);
        v14 = *((_DWORD *)DeviceExtension + 221);
        v15 = *((_QWORD *)DeviceExtension + 111);
        v16 = 32LL * ((v13 - 1) & v14);
        *(_DWORD *)(v16 + v15) = 1314026338;
        *(_QWORD *)(v16 + v15 + 8) = 0LL;
        *(_QWORD *)(v16 + v15 + 16) = a2;
        *(_QWORD *)(v16 + v15 + 24) = v4;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_c14d5bcd548e31c8cc373c847eff1ef0_Traceguids,
      v4);
  if ( (_DWORD)v4 != 7 )
  {
    *(_DWORD *)(a2 + 128) = 1;
    v23 = v4 - 3;
    if ( !v23 )
    {
      UsbhBusPause_Action(DeviceObject);
      UsbhBusPnpStop_Action((__int64)DeviceObject, a2, v24, v25);
      v21 = FdoExt(DeviceObject, v26, v27, v28);
      v22 = 2;
      goto LABEL_11;
    }
    v31 = v23 - 3;
    if ( v31 )
    {
      if ( v31 == 1 )
        goto LABEL_7;
      v32 = v11;
    }
    else
    {
      UsbhBusPause_Action(DeviceObject);
      UsbhSshBusBusy(DeviceObject, a2);
      v32 = 5LL;
    }
    v20 = DeviceObject;
    return (unsigned int)UsbhReleaseBusStateLock(v20, a2, v32, v10);
  }
LABEL_7:
  v17 = UsbhBusPause_Action(DeviceObject);
  v20 = DeviceObject;
  if ( (v17 & 0xC0000000) == 0xC0000000 )
  {
    v32 = 3LL;
    return (unsigned int)UsbhReleaseBusStateLock(v20, a2, v32, v10);
  }
  v21 = FdoExt(DeviceObject, v18, v19, v10);
  v22 = 4;
LABEL_11:
  if ( *(_DWORD *)(v21 + 2440) != v22 )
  {
    *(_DWORD *)(v21 + 2440) = v22;
    *(_DWORD *)(a2 + 80) = v22;
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v29 = 32LL * *(unsigned int *)(v21 + 832);
  *(_QWORD *)(v21 + 1336) = 0LL;
  *(_DWORD *)(v29 + v21 + 548) = v22;
  KeReleaseSemaphore((PRKSEMAPHORE)(v21 + 2448), 16, 1, 0);
  return v22;
}
