/*
 * XREFs of UsbhHubStart @ 0x140050D10
 * Callers:
 *     Usbh_FDO_WaitPnpRestart @ 0x140051A90 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStart @ 0x140051C30 (Usbh_FDO_WaitPnpStart.c)
 * Callees:
 *     UsbhDisableTimerObject @ 0x140007330 (UsbhDisableTimerObject.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhDispatch_BusEvent @ 0x140012A78 (UsbhDispatch_BusEvent.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEnableTimerObject @ 0x14002BB10 (UsbhEnableTimerObject.c)
 *     UsbhFdoSetD0Cold @ 0x140030750 (UsbhFdoSetD0Cold.c)
 *     UsbhReinitialize @ 0x14003DAF8 (UsbhReinitialize.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     UsbhFinishStart @ 0x140046A70 (UsbhFinishStart.c)
 *     Usbh_HubRootHubInitNotification @ 0x14004B738 (Usbh_HubRootHubInitNotification.c)
 */

__int64 __fastcall UsbhHubStart(__int64 a1, int a2)
{
  _DWORD *v4; // rsi
  int v5; // edi
  __int64 inited; // rdi
  _DWORD *v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v14; // [rsp+28h] [rbp-20h]

  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        Log(*(_QWORD *)(a1 + 8), 2, 1919243092, 0LL, 0LL);
        LODWORD(inited) = UsbhReinitialize(*(_QWORD *)(a1 + 8), (_UNICODE_STRING *)a1);
        if ( (int)inited >= 0 )
          LODWORD(inited) = UsbhFdoSetD0Cold(*(PDEVICE_OBJECT *)(a1 + 8), a1, 0);
      }
      else
      {
        LODWORD(inited) = -1073741823;
      }
    }
    else
    {
      v7 = FdoExt(*(_QWORD *)(a1 + 8));
      v8 = (__int64 *)(v7 + 390);
      Log(*((_QWORD *)v7 + 196), 2, 1635341140, 0LL, (__int64)(v7 + 390));
      LODWORD(inited) = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), v8, File, 1u, 0x20u);
      if ( (inited & 0xC0000000) != 0xC0000000 )
      {
        Log(v8[1], 8, 1700023634, *((_QWORD *)v4 + 346), 0LL);
        UsbhEnableTimerObject(v8[1], *((_QWORD *)v4 + 346), 1000, 0, (__int64)v8, 0x49577473u);
        inited = (int)Usbh_HubRootHubInitNotification(v8[1], (__int64)v8, (__int64)UsbhInitCallback);
        Log(v8[1], 8, 1919445358, inited, 0LL);
        if ( (inited & 0xC0000000) == 0xC0000000 && (_DWORD)inited != -1073741536 )
        {
          Log(v8[1], 8, 2018790738, *((_QWORD *)v4 + 346), 0LL);
          UsbhDisableTimerObject(v8[1], *((_QWORD *)v4 + 346), v9, v10);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v14) = inited;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              0,
              1u,
              0xEu,
              (__int64)&WPP_e515ed24217c325a0d538c98f1498d1a_Traceguids,
              v14);
          }
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), v8, 0x20u);
        }
      }
    }
  }
  else
  {
    Log(*(_QWORD *)(a1 + 8), 2, 1937331028, 0LL, 0LL);
    LODWORD(inited) = UsbhFinishStart(*(_QWORD *)(a1 + 8), a1);
    v12 = 5LL;
    if ( (int)inited < 0 )
      v12 = 9LL;
    UsbhDispatch_BusEvent(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, v12, v11);
  }
  return (unsigned int)inited;
}
