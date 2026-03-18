/*
 * XREFs of UsbhAsyncStop @ 0x14004FC58
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x140051FA0 (Usbh_FDO_WaitPnpStop_CB.c)
 * Callees:
 *     UsbhWaitEventWithTimeoutEx @ 0x140005F40 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhSyncBusPause @ 0x140006D64 (UsbhSyncBusPause.c)
 *     UsbhDisableTimerObject @ 0x140007330 (UsbhDisableTimerObject.c)
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 *     UsbhAcquireFdoPnpLock @ 0x140028330 (UsbhAcquireFdoPnpLock.c)
 *     UsbhReleaseFdoPnpLock @ 0x1400283F4 (UsbhReleaseFdoPnpLock.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x140048E68 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_HubRootHubInitNotification @ 0x14004B738 (Usbh_HubRootHubInitNotification.c)
 *     UsbhDisableHardReset @ 0x14004BFFC (UsbhDisableHardReset.c)
 *     UsbhSshDisabled @ 0x14005EE90 (UsbhSshDisabled.c)
 */

void __fastcall UsbhAsyncStop(__int64 a1, int a2)
{
  _DWORD *v4; // rbp
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rsi
  _DWORD *v8; // rax
  void *v9; // rbx
  __int64 v10; // r9
  int v11; // eax
  int v12; // r10d
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r9

  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  Log(*(_QWORD *)(a1 + 8), 2, 1114850114, 0LL, 0LL);
  UsbhDisableTimerObject(*(_QWORD *)(a1 + 8), *((_QWORD *)v4 + 346), v5, v6);
  v7 = v4 + 640;
  if ( (unsigned int)Usbh_HubRootHubInitNotification(*(_QWORD *)(a1 + 8), 0LL, 0LL) == -1073741536 )
  {
    v8 = FdoExt(*(_QWORD *)(a1 + 8));
    *v7 |= 0x400u;
    v9 = v8 + 390;
    KeSetEvent((PRKEVENT)(v4 + 644), 0, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), v9, 0x20u);
  }
  Log(*(_QWORD *)(a1 + 8), 2, 1684357954, 0LL, 0LL);
  v11 = UsbhWaitEventWithTimeoutEx(*(_QWORD *)(a1 + 8), v4 + 644, 5000, 1667394391, v10, v10);
  Log(*(_QWORD *)(a1 + 8), 2, 1667379249, v11, 5000LL);
  if ( v12 == 258 )
  {
    Log(*(_QWORD *)(a1 + 8), 2, 1667379250, 0LL, 5000LL);
    v14 = *(_QWORD *)(a1 + 8);
    if ( (*v7 & 0x400) != 0 )
    {
      Log(v14, 2, 1667379252, v13, 5000LL);
      UsbhTrapFatal_Dbg(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 8));
    }
    Log(v14, 2, 1667379251, v13, 5000LL);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
    KeWaitForSingleObject(v4 + 644, Executive, 0, 0, 0LL);
    UsbhAcquireFdoPnpLock(*(_QWORD *)(a1 + 8), a1, 12, 1330933353, 1);
    if ( a2 == 5 )
    {
      UsbhDisableHardReset(*(_QWORD *)(a1 + 8));
      Usbh_SSH_Event(*(_QWORD *)(a1 + 8), 6u, a1);
      UsbhSshDisabled(*(_QWORD *)(a1 + 8), a1);
      UsbhSyncBusPause(*(_QWORD *)(a1 + 8), a1, 5LL, v15);
      Usbh_BusPnpFreeResources_PdoEvent(*(_QWORD *)(a1 + 8), a1);
    }
  }
}
