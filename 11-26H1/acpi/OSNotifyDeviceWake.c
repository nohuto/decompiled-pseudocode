/*
 * XREFs of OSNotifyDeviceWake @ 0x14001EBC8
 * Callers:
 *     NotifyHandler @ 0x14001E9B0 (NotifyHandler.c)
 *     ACPICMButtonSetPower @ 0x14004AD00 (ACPICMButtonSetPower.c)
 * Callees:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x14001FC90 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIWakeDisableAsync @ 0x140032438 (ACPIWakeDisableAsync.c)
 *     OSNotifyDeviceWakeCallBack @ 0x140033C00 (OSNotifyDeviceWakeCallBack.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qsqss @ 0x140037B84 (WPP_RECORDER_SF_qsqss.c)
 *     WPP_RECORDER_SF_qss @ 0x14003C56C (WPP_RECORDER_SF_qss.c)
 */

__int64 __fastcall OSNotifyDeviceWake(__int64 *a1)
{
  __int64 v1; // r10
  const char *v2; // rbp
  char v3; // si
  const char *v4; // r8
  __int64 v5; // r9
  const char *v6; // rdx
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _QWORD *Pool2; // rax
  int v10; // edx
  _QWORD *v11; // rdi
  __int64 v12; // r8
  unsigned int v14; // eax
  int v15; // edx
  char v16; // r14
  const char *v17; // rcx
  __int64 v18; // rax
  const char *v19; // rax
  __int64 v20; // rcx
  KIRQL Irql; // [rsp+80h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = byte_140075A82;
  v3 = 0;
  v4 = byte_140075A82;
  Irql = 0;
  LODWORD(v5) = 0;
  v6 = byte_140075A82;
  v7 = *(_QWORD **)(v1 + 104);
  if ( v7 )
  {
    v8 = v7[1];
    v5 = *(_QWORD *)(v1 + 104);
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)v7[76];
      if ( (v8 & 0x400000000000LL) != 0 )
        v6 = (const char *)v7[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_14008E680 = *(_DWORD *)(v1 + 40);
    byte_14008E684 = 0;
    WPP_RECORDER_SF_qsqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v6, (_DWORD)v4, v5);
  }
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1299211073LL);
  v11 = Pool2;
  if ( Pool2 )
  {
    Pool2[1] = Pool2;
    *Pool2 = Pool2;
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    ACPIWakeRemoveDevicesAndUpdate(v7, v11);
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    if ( (_QWORD *)*v11 == v11 )
    {
      ExFreePoolWithTag(v11, 0);
    }
    else
    {
      v14 = ACPIWakeDisableAsync(v7, v11, v12, v11);
      v16 = v14;
      if ( v14 != 259 )
        OSNotifyDeviceWakeCallBack(0LL, v14, 0LL, v11);
      v17 = byte_140075A82;
      if ( v7 )
      {
        v18 = v7[1];
        v3 = (char)v7;
        if ( (v18 & 0x200000000000LL) != 0 )
        {
          v2 = (const char *)v7[76];
          if ( (v18 & 0x400000000000LL) != 0 )
            v17 = (const char *)v7[77];
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          17,
          28,
          (__int64)&WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids,
          v16,
          v3,
          (__int64)v2,
          (__int64)v17);
      }
    }
  }
  else
  {
    v19 = byte_140075A82;
    if ( v7 )
    {
      v20 = v7[1];
      v3 = (char)v7;
      if ( (v20 & 0x200000000000LL) != 0 )
      {
        v2 = (const char *)v7[76];
        if ( (v20 & 0x400000000000LL) != 0 )
          v19 = (const char *)v7[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_qss(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        17,
        27,
        (__int64)&WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids,
        v3,
        (__int64)v2,
        (__int64)v19);
    }
  }
  return 0LL;
}
