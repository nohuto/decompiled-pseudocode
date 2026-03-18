/*
 * XREFs of UsbhFdoD0Worker_Action @ 0x14002F4B0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C5A0 (UsbhEtwLogHubIrpEvent.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhDisarmHubForWakeDetect @ 0x14002A2D8 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhFdoSetD0Cold @ 0x14002C4AC (UsbhFdoSetD0Cold.c)
 *     UsbhSshExitSx @ 0x14002E7F0 (UsbhSshExitSx.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x14002F2F0 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhAcquireFdoPwrLock @ 0x1400316B0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14003173C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x140031794 (UsbhSetFdoPowerState.c)
 *     UsbhFdoSetD0Warm @ 0x140038FD4 (UsbhFdoSetD0Warm.c)
 *     UsbhReleasePowerContext @ 0x140039F54 (UsbhReleasePowerContext.c)
 *     UsbhSyncBusDisconnect @ 0x14003A318 (UsbhSyncBusDisconnect.c)
 *     UsbhResumeHardReset @ 0x14003A8C4 (UsbhResumeHardReset.c)
 *     UsbhCheckHubPowerStatus @ 0x14004A4CC (UsbhCheckHubPowerStatus.c)
 *     UsbhCompletePdoWakeIrps @ 0x14004A6F0 (UsbhCompletePdoWakeIrps.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhFdoD0Worker_Action(PDEVICE_OBJECT DeviceObject, __int64 a2, void *a3)
{
  char v4; // r15
  int v6; // edi
  _DWORD *v7; // rax
  _DWORD *v8; // rbp
  _DWORD *v9; // rax
  __int64 v10; // rsi
  int v11; // ecx
  int v12; // r8d
  _DWORD *v13; // rax
  __int64 v14; // r8
  int v15; // r10d
  __int64 v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+20h] [rbp-58h]

  v4 = 0;
  UsbhDisarmHubForWakeDetect((__int64)DeviceObject);
  if ( (FdoExt((__int64)DeviceObject)[640] & 4) != 0 )
  {
    v7 = FdoExt((__int64)DeviceObject);
    if ( *((_QWORD *)v7 + 556) )
      v6 = (*((__int64 (__fastcall **)(_QWORD))v7 + 556))(*((_QWORD *)v7 + 529));
    else
      v6 = -1073741822;
  }
  else
  {
    v6 = -1073741810;
  }
  v8 = FdoExt((__int64)DeviceObject);
  v9 = FdoExt((__int64)DeviceObject);
  v10 = (__int64)(v9 + 346);
  *((_QWORD *)v9 + 176) = KeGetCurrentThread();
  Log((__int64)DeviceObject, 16, 1349731376, (__int64)(v9 + 346), v6);
  if ( !Usb_Disconnected(v6) )
    v6 = UsbhCheckHubPowerStatus(DeviceObject);
  if ( Usb_Disconnected(v6) )
  {
    LODWORD(v16) = 0;
    UsbhEtwLogHubIrpEvent(
      (__int64)DeviceObject,
      0LL,
      0LL,
      &USBHUB_ETW_EVENT_HUB_POWER_D0_WORKER_HUB_DISCONNECT_AFTER_SUSPEND,
      v16,
      v6);
    UsbhAcquireFdoPwrLock(DeviceObject, v10, 114LL, 846671972LL);
    UsbhSetFdoPowerState(DeviceObject, (unsigned int)v6, 213LL);
    UsbhReleasePowerContext(DeviceObject, a3);
    UsbhReleaseFdoPwrLock(DeviceObject, v10);
    UsbhSyncBusDisconnect(DeviceObject);
  }
  else
  {
    if ( (v11 & 0xC0000000) == 0xC0000000 )
    {
      LODWORD(v16) = 0;
      UsbhEtwLogHubIrpEvent(
        (__int64)DeviceObject,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_POWER_D0_WORKER_HUB_FAIL_AFTER_SUSPEND,
        v16,
        v6);
      v12 = v8[640];
      v4 = 1;
      v8[1054] = 2;
      if ( (v12 & 0x10) != 0 )
      {
        v12 &= ~0x10u;
        v8[640] = v12;
      }
      UsbhException(
        (__int64)DeviceObject,
        0,
        (v12 & 1) + 45,
        0LL,
        0,
        v6,
        0,
        usbfile_fdopwr_c,
        (v12 & 1) != 0 ? 4053 : 4058,
        0);
      Log((__int64)DeviceObject, 16, 1346720304, 0LL, v6);
    }
    v17 = (int)v8[1054];
    if ( (v17 & 0xFFFFFFFD) != 0 )
    {
      Log((__int64)DeviceObject, 16, 1450668653, 0LL, v17);
      v6 = UsbhFdoSetD0Warm(DeviceObject);
      if ( (v6 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v6) )
        UsbhException((__int64)DeviceObject, 0, 43, 0LL, 0, v6, 0, usbfile_fdopwr_c, 4101, 0);
    }
    else
    {
      Log((__int64)DeviceObject, 16, 1449356388, 0LL, v17);
      v6 = UsbhFdoSetD0Cold(DeviceObject, v10, v4);
      UsbhResumeHardReset(DeviceObject, v10);
      if ( (v6 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v6) )
        UsbhException((__int64)DeviceObject, 0, 44, 0LL, 0, v6, 0, usbfile_fdopwr_c, 4084, 0);
    }
    Log((__int64)DeviceObject, 16, 1668301872, 0LL, 0LL);
    if ( (unsigned int)UsbhAcquireFdoPwrLock(DeviceObject, v10, 114LL, 829894756LL) == 210 )
    {
      if ( FdoExt((__int64)DeviceObject)[1053] == 1 )
      {
        v13 = FdoExt((__int64)DeviceObject);
        v14 = 201LL;
      }
      else
      {
        v13 = FdoExt((__int64)DeviceObject);
        v14 = 206LL;
      }
      UsbhSetFdoPowerState(DeviceObject, (unsigned int)v13[1053], v14);
    }
    UsbhReleasePowerContext(DeviceObject, a3);
    UsbhReleaseFdoPwrLock(DeviceObject, v10);
  }
  Log((__int64)DeviceObject, 16, 1668301872, 0LL, 0LL);
  Log((__int64)DeviceObject, v15, 1934645093, v6, 0LL);
  *((_QWORD *)v8 + 637) = MEMORY[0xFFFFF78000000014];
  UsbhFdoUnblockAllPendedPdoD0Irps((__int64)DeviceObject);
  UsbhSshExitSx((__int64)DeviceObject, v10);
  if ( v6 >= 0 )
    UsbhCompletePdoWakeIrps(DeviceObject);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 306), a3, 0x20u);
}
