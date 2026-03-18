/*
 * XREFs of UsbhReferenceListRemove @ 0x140029668
 * Callers:
 *     UsbhDmTimerDpc @ 0x140009C10 (UsbhDmTimerDpc.c)
 *     UsbhResetPort @ 0x14000A2BC (UsbhResetPort.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhCancelResetTimeout @ 0x140023BD8 (UsbhCancelResetTimeout.c)
 *     UsbhExceptionWorker @ 0x140029470 (UsbhExceptionWorker.c)
 *     UsbhEnableTimerObject @ 0x14002BB10 (UsbhEnableTimerObject.c)
 *     UsbhSetTimer @ 0x14002C024 (UsbhSetTimer.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x14003D9F0 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSyncSendDeviceIoctl @ 0x14003DE74 (UsbhSyncSendDeviceIoctl.c)
 *     UsbhUninitialize @ 0x14003E0D0 (UsbhUninitialize.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x14003F880 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x14003F9F0 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhResetPortTimerDpc @ 0x140048050 (UsbhResetPortTimerDpc.c)
 *     UsbhDmDisableTimer @ 0x140049C74 (UsbhDmDisableTimer.c)
 *     UsbhTimerPnpStop @ 0x140049F80 (UsbhTimerPnpStop.c)
 *     UsbhReferenceListClose @ 0x14004EEEC (UsbhReferenceListClose.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhReferenceListRemove(__int64 a1, __int64 a2)
{
  KIRQL v4; // r14
  _DWORD *v5; // rax
  _DWORD *v6; // rsi
  _QWORD *v7; // r8
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  _DWORD *v12; // rcx
  int v13; // eax

  v4 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_140070600 = (__int64)&dword_140070608;
  v5 = FdoExt(a1);
  v6 = v5;
  v7 = 0LL;
  v8 = v5 + 628;
  v9 = (_QWORD *)*((_QWORD *)v5 + 314);
  if ( v9 == (_QWORD *)(v5 + 628) )
    v9 = 0LL;
  if ( v9 )
  {
    while ( v9 != v8 )
    {
      v7 = v9 - 3;
      if ( v9 != (_QWORD *)24 && *(_DWORD *)v7 == 1397515890 )
      {
        if ( v7[2] == a2 )
          goto LABEL_13;
        v9 = (_QWORD *)*v9;
        if ( v9 )
          continue;
      }
      UsbhTrapFatal_Dbg(a1, a1);
    }
  }
  if ( !v7 || v9 == v8 )
  {
    v12 = v5 + 632;
    v13 = v5[632];
    if ( v13 )
      *v12 = v13 - 1;
  }
  else
  {
LABEL_13:
    v10 = (_QWORD *)*v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    ExFreePoolWithTag(v7, 0);
    v12 = v6 + 632;
  }
  if ( (_QWORD *)*v8 == v8 && !*v12 )
    KeSetEvent((PRKEVENT)(v6 + 622), 0, 0);
  qword_140070600 = 0LL;
  KeReleaseSpinLock(&HubG, v4);
}
