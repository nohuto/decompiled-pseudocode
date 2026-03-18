/*
 * XREFs of OSNotifyDeviceWakeByGPEEvent @ 0x140032208
 * Callers:
 *     ACPIInterruptDispatchEventDpc @ 0x140020600 (ACPIInterruptDispatchEventDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x14001FC90 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     WPP_RECORDER_SF_LDL @ 0x140031A7C (WPP_RECORDER_SF_LDL.c)
 *     ACPIWakeDisableAsync @ 0x140032438 (ACPIWakeDisableAsync.c)
 *     OSNotifyDeviceWakeCallBack @ 0x140033C00 (OSNotifyDeviceWakeCallBack.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 */

void __fastcall OSNotifyDeviceWakeByGPEEvent(int a1, int a2, int a3, int a4)
{
  char v4; // si
  __int64 v6; // rdi
  _QWORD *Pool2; // rax
  int v8; // edx
  _QWORD *v9; // rbx
  __int64 *i; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rdx
  char v14; // bp
  const char *v15; // rcx
  const char *v16; // rax
  KIRQL Irql; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  Irql = 0;
  v6 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LDL(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1299211073LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    Pool2[1] = Pool2;
    *Pool2 = Pool2;
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    for ( i = (__int64 *)AcpiPowerWaitWakeList; i != &AcpiPowerWaitWakeList; i = (__int64 *)*i )
    {
      v6 = i[5];
      if ( (*(_QWORD *)(v6 + 1008) & 0x500000000LL) == 0 && *(_DWORD *)(v6 + 504) == a1 )
      {
        ACPIWakeRemoveDevicesAndUpdate(i[5], (__int64)v9);
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    if ( (_QWORD *)*v9 == v9 )
    {
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      v12 = ACPIWakeDisableAsync(v6, v9, v11, v9);
      v14 = v12;
      if ( v12 != 259 )
        OSNotifyDeviceWakeCallBack(0LL, v12, 0LL, v9);
      v15 = byte_140075A82;
      v16 = byte_140075A82;
      if ( v6 )
      {
        v13 = *(_QWORD *)(v6 + 8);
        v4 = v6;
        if ( (v13 & 0x200000000000LL) != 0 )
        {
          v15 = *(const char **)(v6 + 608);
          if ( (v13 & 0x400000000000LL) != 0 )
            v16 = *(const char **)(v6 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v13,
          17,
          33,
          (__int64)&WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids,
          v14,
          v4,
          (__int64)v15,
          (__int64)v16);
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      22,
      32,
      (__int64)&WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids);
  }
}
