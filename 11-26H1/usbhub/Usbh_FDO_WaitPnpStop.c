/*
 * XREFs of Usbh_FDO_WaitPnpStop @ 0x140051E30
 * Callers:
 *     <none>
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140006600 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhSyncBusPause @ 0x140006D64 (UsbhSyncBusPause.c)
 *     Log @ 0x140009B80 (Log.c)
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 *     UsbhReleaseFdoPnpLock @ 0x1400283F4 (UsbhReleaseFdoPnpLock.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x140048E68 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     UsbhDisableHardReset @ 0x14004BFFC (UsbhDisableHardReset.c)
 *     UsbhModuleDispatch @ 0x14005135C (UsbhModuleDispatch.c)
 *     UsbhSetFdoPnpState @ 0x1400517D4 (UsbhSetFdoPnpState.c)
 *     Usbh_PnpRemove @ 0x1400520E8 (Usbh_PnpRemove.c)
 *     UsbhSshDisabled @ 0x14005EE90 (UsbhSshDisabled.c)
 */

__int64 __fastcall Usbh_FDO_WaitPnpStop(ULONG_PTR a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // edi
  __int64 v10; // rdx
  int v11; // ebp
  unsigned int v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0;
  Log(*(_QWORD *)(a1 + 8), 2, 2001949776, a1, a2);
  if ( a2 == 2 )
  {
    UsbhModuleDispatch(0LL, v4, *(_LIST_ENTRY **)(a1 + 8), 6, 0LL, a1);
    return Usbh_PnpRemove(a1, 2LL);
  }
  else
  {
    if ( a2 == 3 )
    {
      v11 = UsbhFdoCheckUpstreamConnectionState(*(_QWORD *)(a1 + 8), &v13, v5, v6);
      if ( v11 >= 0 )
        Usbh_SSH_Event(*(_QWORD *)(a1 + 8), 6u, a1);
      UsbhModuleDispatch(0LL, v10, *(_LIST_ENTRY **)(a1 + 8), 6, 0LL, a1);
      v9 = 4;
      if ( v11 >= 0 )
        Usbh_BusPnpFreeResources_PdoEvent(*(_QWORD *)(a1 + 8), a1);
    }
    else if ( a2 == 4 )
    {
      v9 = 5;
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( a2 != 5 )
        UsbhTrapFatal_Dbg(v7, a1);
      UsbhDisableHardReset(v7);
      Usbh_SSH_Event(*(_QWORD *)(a1 + 8), 6u, a1);
      UsbhSshDisabled(*(_QWORD *)(a1 + 8), a1);
      UsbhSyncBusPause(*(_QWORD *)(a1 + 8), a1, 4LL, v8);
      Usbh_BusPnpFreeResources_PdoEvent(*(_QWORD *)(a1 + 8), a1);
      v9 = 7;
    }
    UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), v9, a2);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
    return 0LL;
  }
}
