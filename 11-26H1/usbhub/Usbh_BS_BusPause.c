/*
 * XREFs of Usbh_BS_BusPause @ 0x140012DBC
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x140012A78 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     UsbhReleaseBusStateLock @ 0x1400111B8 (UsbhReleaseBusStateLock.c)
 *     UsbhBusPnpStop_Action @ 0x140011CAC (UsbhBusPnpStop_Action.c)
 *     UsbhBusResume_Action @ 0x140012FB0 (UsbhBusResume_Action.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     UsbhBusDisconnect_Action @ 0x14004118C (UsbhBusDisconnect_Action.c)
 *     Usbh_BusRemove_PdoEvent @ 0x140049018 (Usbh_BusRemove_PdoEvent.c)
 */

__int64 __fastcall Usbh_BS_BusPause(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r14d
  volatile signed __int32 *DeviceExtension; // rcx
  signed __int32 v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rcx
  unsigned int v18; // edi
  int v19; // ebx
  int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  __int64 v30; // rdx
  int v31; // ebx
  __int64 v32; // r8

  v4 = (int)a3;
  FdoExt(a1, a2, a3, a4);
  FdoExt(*(_QWORD *)(a2 + 8), v7, v8, v9);
  v13 = *(_DWORD *)(a2 + 80);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = (volatile signed __int32 *)a1->DeviceExtension;
      if ( DeviceExtension )
      {
        v15 = _InterlockedExchangeAdd(DeviceExtension + 220, 0xFFFFFFFF);
        v16 = *((_DWORD *)DeviceExtension + 221);
        v17 = *((_QWORD *)DeviceExtension + 111);
        v10 = 32LL * ((v15 - 1) & v16);
        *(_DWORD *)(v10 + v17) = 1397781346;
        *(_QWORD *)(v10 + v17 + 8) = 0LL;
        *(_QWORD *)(v10 + v17 + 16) = a2;
        *(_QWORD *)(v10 + v17 + 24) = v4;
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
      v4);
  v18 = 3;
  v19 = v4 - 3;
  if ( !v19 )
  {
    UsbhBusPnpStop_Action((__int64)a1, a2, v11, v12);
LABEL_29:
    v32 = 2LL;
    goto LABEL_30;
  }
  v20 = v19 - 2;
  if ( v20 )
  {
    v25 = v20 - 1;
    if ( !v25 )
    {
      v32 = 5LL;
      goto LABEL_30;
    }
    v26 = v25 - 1;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( !v27 )
      {
        v32 = 3LL;
        goto LABEL_30;
      }
      v28 = v27 - 1;
      if ( !v28 )
      {
        v32 = v13;
        goto LABEL_30;
      }
      v29 = v28 - 1;
      if ( v29 )
      {
        v30 = a2;
        v31 = v29 - 1;
        if ( v31 )
        {
          if ( v31 != 1 )
          {
            v32 = v13;
            return (unsigned int)UsbhReleaseBusStateLock(a1, v30, v32, v12);
          }
          Usbh_BusRemove_PdoEvent(*(_QWORD *)(a2 + 8), a2);
          goto LABEL_29;
        }
        UsbhBusDisconnect_Action(a1, a2);
      }
    }
    v32 = 4LL;
LABEL_30:
    v30 = a2;
    return (unsigned int)UsbhReleaseBusStateLock(a1, v30, v32, v12);
  }
  v21 = FdoExt(a1, v10, v11, v12);
  v22 = v21;
  if ( *(_DWORD *)(v21 + 2440) != 3 )
  {
    *(_DWORD *)(v21 + 2440) = 3;
    *(_DWORD *)(a2 + 80) = 3;
    UsbhBusResume_Action(a1);
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v23 = 32LL * *(unsigned int *)(v22 + 832);
  *(_QWORD *)(v22 + 1336) = 0LL;
  *(_DWORD *)(v23 + v22 + 548) = 3;
  KeReleaseSemaphore((PRKSEMAPHORE)(v22 + 2448), 16, 1, 0);
  return v18;
}
