/*
 * XREFs of Usbh_BS_BusRun @ 0x140001DE4
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x14000DD84 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     UsbhReleaseBusStateLock @ 0x140001008 (UsbhReleaseBusStateLock.c)
 *     UsbhBusPnpStop_Action @ 0x140001FCC (UsbhBusPnpStop_Action.c)
 *     UsbhBusPause_Action @ 0x14000333C (UsbhBusPause_Action.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     UsbhSshBusBusy @ 0x14004190C (UsbhSshBusBusy.c)
 */

__int64 __fastcall Usbh_BS_BusRun(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  unsigned int v6; // ebp
  void *DeviceExtension; // rdx
  __int64 v8; // rcx
  int v9; // eax
  struct _DEVICE_OBJECT *v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // ebx
  int v13; // esi
  __int64 v14; // rcx
  int v16; // esi
  unsigned int v17; // r8d

  v3 = a3;
  FdoExt(a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  v6 = *(_DWORD *)(a2 + 80);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        v8 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v8 = 1314026338;
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
      12,
      (__int64)&WPP_c14d5bcd548e31c8cc373c847eff1ef0_Traceguids,
      v3);
  if ( (_DWORD)v3 != 7 )
  {
    *(_DWORD *)(a2 + 128) = 1;
    v13 = v3 - 3;
    if ( !v13 )
    {
      UsbhBusPause_Action(a1);
      UsbhBusPnpStop_Action(a1, a2);
      v11 = FdoExt(a1);
      v12 = 2;
      goto LABEL_11;
    }
    v16 = v13 - 3;
    if ( v16 )
    {
      if ( v16 == 1 )
        goto LABEL_7;
      v17 = v6;
    }
    else
    {
      UsbhBusPause_Action(a1);
      UsbhSshBusBusy(a1, a2);
      v17 = 5;
    }
    v10 = a1;
    return (unsigned int)UsbhReleaseBusStateLock(v10, a2, v17);
  }
LABEL_7:
  v9 = UsbhBusPause_Action(a1);
  v10 = a1;
  if ( (v9 & 0xC0000000) == 0xC0000000 )
  {
    v17 = 3;
    return (unsigned int)UsbhReleaseBusStateLock(v10, a2, v17);
  }
  v11 = FdoExt(a1);
  v12 = 4;
LABEL_11:
  if ( *(_DWORD *)(v11 + 2440) != v12 )
  {
    *(_DWORD *)(v11 + 2440) = v12;
    *(_DWORD *)(a2 + 80) = v12;
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v14 = 32LL * *(unsigned int *)(v11 + 832);
  *(_QWORD *)(v11 + 1336) = 0LL;
  *(_DWORD *)(v14 + v11 + 548) = v12;
  KeReleaseSemaphore((PRKSEMAPHORE)(v11 + 2448), 16, 1, 0);
  return v12;
}
