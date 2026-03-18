/*
 * XREFs of UsbhFdoD0Worker_Action @ 0x14002B2F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDisarmHubForWakeDetect @ 0x140007684 (UsbhDisarmHubForWakeDetect.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhAcquireFdoPwrLock @ 0x14002AFD0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002B05C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x14002B0B8 (UsbhSetFdoPowerState.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x14002B710 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhSshExitSx @ 0x14002B8E0 (UsbhSshExitSx.c)
 *     UsbhFdoSetD0Cold @ 0x140030750 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoSetD0Warm @ 0x140037E34 (UsbhFdoSetD0Warm.c)
 *     UsbhReleasePowerContext @ 0x140039970 (UsbhReleasePowerContext.c)
 *     UsbhSyncBusDisconnect @ 0x140039D40 (UsbhSyncBusDisconnect.c)
 *     UsbhResumeHardReset @ 0x14003A324 (UsbhResumeHardReset.c)
 *     UsbhCheckHubPowerStatus @ 0x14004A07C (UsbhCheckHubPowerStatus.c)
 *     UsbhCompletePdoWakeIrps @ 0x14004A2A4 (UsbhCompletePdoWakeIrps.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhFdoD0Worker_Action(struct _DEVICE_OBJECT *a1, __int64 a2, void *a3, __int64 a4)
{
  int v6; // edi
  _DWORD *v7; // rax
  _DWORD *v8; // rbp
  _DWORD *v9; // rax
  KSPIN_LOCK v10; // rsi
  int v11; // ecx
  int v12; // r8d
  int v13; // eax
  _DWORD *v14; // rax
  int v15; // r8d
  int v16; // r10d

  UsbhDisarmHubForWakeDetect((__int64)a1, a2, (__int64)a3, a4);
  if ( (FdoExt((__int64)a1)[640] & 4) != 0 )
  {
    v7 = FdoExt((__int64)a1);
    if ( *((_QWORD *)v7 + 556) )
      v6 = (*((__int64 (__fastcall **)(_QWORD))v7 + 556))(*((_QWORD *)v7 + 529));
    else
      v6 = -1073741822;
  }
  else
  {
    v6 = -1073741810;
  }
  v8 = FdoExt((__int64)a1);
  v9 = FdoExt((__int64)a1);
  v10 = (KSPIN_LOCK)(v9 + 346);
  *((_QWORD *)v9 + 176) = KeGetCurrentThread();
  Log((__int64)a1, 16, 1349731376, (__int64)(v9 + 346), v6);
  if ( !Usb_Disconnected(v6) )
    v6 = UsbhCheckHubPowerStatus(a1);
  if ( Usb_Disconnected(v6) )
  {
    UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_D0_WORKER_HUB_DISCONNECT_AFTER_SUSPEND);
    UsbhAcquireFdoPwrLock((__int64)a1, v10, 114, 846671972);
    UsbhSetFdoPowerState((__int64)a1, v6, 213, 121);
    UsbhReleasePowerContext(a1, a3);
    UsbhReleaseFdoPwrLock((__int64)a1, v10);
    UsbhSyncBusDisconnect(a1, v10);
  }
  else
  {
    if ( (v11 & 0xC0000000) == 0xC0000000 )
    {
      UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_D0_WORKER_HUB_FAIL_AFTER_SUSPEND);
      v12 = v8[640];
      v8[1054] = 2;
      if ( (v12 & 0x10) != 0 )
      {
        v12 &= ~0x10u;
        v8[640] = v12;
      }
      UsbhException((__int64)a1, 0, (v12 & 1) + 45, 0LL, 0, v6, 0, usbfile_fdopwr_c, (v12 & 1) != 0 ? 4053 : 4058, 0);
      Log((__int64)a1, 16, 1346720304, 0LL, v6);
    }
    v13 = v8[1054];
    if ( !v13 || v13 == 2 )
    {
      Log((__int64)a1, 16, 1449356388, 0LL, (int)v8[1054]);
      v6 = UsbhFdoSetD0Cold(a1);
      UsbhResumeHardReset(a1, v10);
      if ( (v6 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v6) )
        UsbhException((__int64)a1, 0, 44, 0LL, 0, v6, 0, usbfile_fdopwr_c, 4084, 0);
    }
    else
    {
      Log((__int64)a1, 16, 1450668653, 0LL, (int)v8[1054]);
      v6 = UsbhFdoSetD0Warm(a1);
      if ( (v6 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v6) )
        UsbhException((__int64)a1, 0, 43, 0LL, 0, v6, 0, usbfile_fdopwr_c, 4101, 0);
    }
    Log((__int64)a1, 16, 1668301872, 0LL, 0LL);
    if ( (unsigned int)UsbhAcquireFdoPwrLock((__int64)a1, v10, 114, 829894756) == 210 )
    {
      if ( FdoExt((__int64)a1)[1053] == 1 )
      {
        v14 = FdoExt((__int64)a1);
        v15 = 201;
      }
      else
      {
        v14 = FdoExt((__int64)a1);
        v15 = 206;
      }
      UsbhSetFdoPowerState((__int64)a1, v14[1053], v15, 130);
    }
    UsbhReleasePowerContext(a1, a3);
    UsbhReleaseFdoPwrLock((__int64)a1, v10);
  }
  Log((__int64)a1, 16, 1668301872, 0LL, 0LL);
  Log((__int64)a1, v16, 1934645093, v6, 0LL);
  *((_QWORD *)v8 + 637) = MEMORY[0xFFFFF78000000014];
  UsbhFdoUnblockAllPendedPdoD0Irps(a1);
  UsbhSshExitSx(a1, v10);
  if ( v6 >= 0 )
    UsbhCompletePdoWakeIrps(a1);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 306), a3, 0x20u);
}
