/*
 * XREFs of UsbhReferenceListAdd @ 0x14002C0D4
 * Callers:
 *     UsbhResetPort @ 0x14000A2BC (UsbhResetPort.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhEnableTimerObject @ 0x14002BB10 (UsbhEnableTimerObject.c)
 *     UsbhSetTimer @ 0x14002C024 (UsbhSetTimer.c)
 *     UsbhGetTopOfBusStack @ 0x14003D020 (UsbhGetTopOfBusStack.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x14003DBD8 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhSyncSendDeviceIoctl @ 0x14003DE74 (UsbhSyncSendDeviceIoctl.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x14003F880 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x14003F9F0 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhResetPortTimerDpc @ 0x140048050 (UsbhResetPortTimerDpc.c)
 *     UsbhTimerPnpStart @ 0x140049E10 (UsbhTimerPnpStart.c)
 *     UsbhReferenceListOpen @ 0x14004EFE0 (UsbhReferenceListOpen.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhReferenceListAdd(__int64 a1, __int64 a2, int a3)
{
  KIRQL v6; // di
  _DWORD *v7; // rbx
  __int64 Pool2; // rax
  _DWORD *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx

  v6 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_140070600 = (__int64)&dword_140070608;
  v7 = FdoExt(a1);
  if ( *((_BYTE *)v7 + 2480) )
  {
    Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1397515890;
      v9 = v7 + 628;
      *(_DWORD *)(Pool2 + 40) = a3;
      *(_QWORD *)(Pool2 + 16) = a2;
      *(_QWORD *)(Pool2 + 8) = a1;
      v10 = (_QWORD *)(Pool2 + 24);
      v11 = (_QWORD *)*((_QWORD *)v9 + 1);
      if ( (_DWORD *)*v11 != v9 )
        __fastfail(3u);
      *v10 = v9;
      v10[1] = v11;
      *v11 = v10;
      *((_QWORD *)v9 + 1) = v10;
    }
    else
    {
      ++v7[632];
    }
    qword_140070600 = 0LL;
    KeReleaseSpinLock(&HubG, v6);
    return 0LL;
  }
  else
  {
    qword_140070600 = 0LL;
    KeReleaseSpinLock(&HubG, v6);
    return 3221225473LL;
  }
}
