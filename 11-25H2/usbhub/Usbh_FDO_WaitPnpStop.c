/*
 * XREFs of Usbh_FDO_WaitPnpStop @ 0x140051940
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140029630 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhSyncBusPause @ 0x140029CD4 (UsbhSyncBusPause.c)
 *     UsbhReleaseFdoPnpLock @ 0x140030244 (UsbhReleaseFdoPnpLock.c)
 *     UsbhTrapFatal_Dbg @ 0x14003A52C (UsbhTrapFatal_Dbg.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x140049308 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     UsbhDisableHardReset @ 0x14004C430 (UsbhDisableHardReset.c)
 *     UsbhModuleDispatch @ 0x140050E7C (UsbhModuleDispatch.c)
 *     UsbhSetFdoPnpState @ 0x1400512E4 (UsbhSetFdoPnpState.c)
 *     Usbh_PnpRemove @ 0x140051BF4 (Usbh_PnpRemove.c)
 *     UsbhSshDisabled @ 0x14005E850 (UsbhSshDisabled.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpStop(ULONG_PTR a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  int v8; // ebp
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  Log(*(_QWORD *)(a1 + 8), 2, 2001949776, a1, a2);
  if ( a2 == 2 )
  {
    UsbhModuleDispatch(0LL, v4, *(struct _DRIVER_OBJECT **)(a1 + 8), 6, 0LL, a1);
    return Usbh_PnpRemove(a1, 2LL);
  }
  else
  {
    if ( a2 == 3 )
    {
      v8 = UsbhFdoCheckUpstreamConnectionState(*(_QWORD *)(a1 + 8), &v10);
      if ( v8 >= 0 )
        Usbh_SSH_Event(*(struct _DEVICE_OBJECT **)(a1 + 8), 6u, a1);
      UsbhModuleDispatch(0LL, v7, *(struct _DRIVER_OBJECT **)(a1 + 8), 6, 0LL, a1);
      v6 = 4;
      if ( v8 >= 0 )
        Usbh_BusPnpFreeResources_PdoEvent(*(_QWORD *)(a1 + 8), a1);
    }
    else if ( a2 == 4 )
    {
      v6 = 5;
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 8);
      if ( a2 != 5 )
        UsbhTrapFatal_Dbg(v5, a1);
      UsbhDisableHardReset(v5);
      Usbh_SSH_Event(*(struct _DEVICE_OBJECT **)(a1 + 8), 6u, a1);
      UsbhSshDisabled(*(_QWORD *)(a1 + 8), a1);
      UsbhSyncBusPause(*(PDEVICE_OBJECT *)(a1 + 8), a1, 4);
      Usbh_BusPnpFreeResources_PdoEvent(*(_QWORD *)(a1 + 8), a1);
      v6 = 7;
    }
    UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), v6, a2);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
    return 0LL;
  }
}
