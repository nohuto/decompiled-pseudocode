/*
 * XREFs of OSNotifyDeviceWakeByInterrupt @ 0x14004E18C
 * Callers:
 *     ACPIWakeEmulationInterruptServiceRoutine @ 0x14004E170 (ACPIWakeEmulationInterruptServiceRoutine.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x14001FC90 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIWakeDisableAsync @ 0x140032438 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEmulationDisable @ 0x140033520 (ACPIWakeEmulationDisable.c)
 *     OSNotifyDeviceWakeCallBack @ 0x140033C00 (OSNotifyDeviceWakeCallBack.c)
 *     WPP_RECORDER_SF_qD @ 0x14003D714 (WPP_RECORDER_SF_qD.c)
 *     Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline @ 0x140063B14 (Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall OSNotifyDeviceWakeByInterrupt(__int64 a1)
{
  _QWORD *Pool2; // rax
  int v3; // edx
  _QWORD *v4; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v6; // rsi
  int v7; // r15d
  __int64 *v8; // rdi
  __int64 v9; // r14
  _QWORD *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rcx
  _QWORD *i; // rax
  KIRQL Irql; // [rsp+78h] [rbp+10h] BYREF

  Irql = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      17,
      34,
      (__int64)&WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids,
      a1,
      *(_DWORD *)(a1 + 32));
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1299211073LL);
  v4 = Pool2;
  if ( Pool2 )
  {
    Pool2[1] = Pool2;
    *Pool2 = Pool2;
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    IsEnabledDeviceUsageNoInline = Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline();
    v6 = v4[1];
    v7 = IsEnabledDeviceUsageNoInline;
    if ( v6 )
    {
      do
      {
        v8 = (__int64 *)AcpiPowerWaitWakeList;
        v9 = v6;
        while ( v8 != &AcpiPowerWaitWakeList )
        {
          if ( v7 )
          {
            if ( v8 == *(__int64 **)(a1 + 24) )
            {
              ACPIWakeRemoveDevicesAndUpdate(v8[5], (__int64)v4);
              break;
            }
          }
          else
          {
            for ( i = *(_QWORD **)(a1 + 16); i != (_QWORD *)(a1 + 16); i = (_QWORD *)*i )
            {
              if ( v8 == (__int64 *)i[2] )
              {
                ACPIWakeRemoveDevicesAndUpdate(v8[5], (__int64)v4);
                break;
              }
            }
          }
          if ( v6 != v4[1] )
            break;
          v8 = (__int64 *)*v8;
        }
        v6 = v4[1];
      }
      while ( v6 != v9 );
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    v10 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
    {
      ExFreePoolWithTag(v4, 0);
    }
    else
    {
      do
      {
        ACPIWakeEmulationDisable((__int64)v10);
        v12 = v10[5];
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != v4 );
      if ( !v12 || (unsigned int)ACPIWakeDisableAsync(v12, (_QWORD **)v4, v11, (__int64)v4) != 259 )
        OSNotifyDeviceWakeCallBack(0LL, 0LL, 0LL, v4);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      22,
      35,
      (__int64)&WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids);
  }
}
