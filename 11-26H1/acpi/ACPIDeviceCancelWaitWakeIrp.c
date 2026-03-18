/*
 * XREFs of ACPIDeviceCancelWaitWakeIrp @ 0x140032C00
 * Callers:
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1400328B0 (ACPIDeviceIrpWaitWakeRequestPending.c)
 * Callees:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x14001FC90 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqqss @ 0x140031DD4 (WPP_RECORDER_SF_qqqss.c)
 *     ACPIWakeEnableDisableAsync @ 0x140032F20 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEmulationDisable @ 0x140033520 (ACPIWakeEmulationDisable.c)
 *     WPP_RECORDER_SF_qqss @ 0x1400338F4 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceNotifyWakeEventDevice @ 0x14005D118 (ACPIDeviceNotifyWakeEventDevice.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIDeviceCancelWaitWakeIrp(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  char v4; // bp
  const char *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r8
  const char *v8; // rdx
  const char *v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  __int64 *i; // rsi
  const char *v13; // rax
  __int64 v14; // rdx
  __int64 **v15; // rax
  void (__fastcall *v16)(__int64, __int64, __int64); // rbx
  const char *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // [rsp+38h] [rbp-40h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = 0;
  v5 = byte_140075A82;
  v6 = DeviceExtension;
  LOBYTE(v7) = 0;
  v8 = byte_140075A82;
  v9 = byte_140075A82;
  if ( DeviceExtension )
  {
    v7 = DeviceExtension;
    v10 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v7 + 608);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v6 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = (__int64)v8;
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v8,
      5,
      10,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a2,
      v7,
      v20,
      (__int64)v9);
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  for ( i = (__int64 *)AcpiPowerWaitWakeList; i != &AcpiPowerWaitWakeList; i = (__int64 *)*i )
  {
    if ( i[5] == v6 && i[25] == a2 )
    {
      v13 = byte_140075A82;
      if ( v6 )
      {
        v18 = *(_QWORD *)(v6 + 8);
        v4 = v6;
        if ( (v18 & 0x200000000000LL) != 0 )
        {
          v5 = *(const char **)(v6 + 608);
          if ( (v18 & 0x400000000000LL) != 0 )
            v13 = *(const char **)(v6 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0xAu,
          0xBu,
          (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
          a2,
          (char)i,
          v4,
          v5,
          v13);
      v14 = *i;
      if ( *(__int64 **)(*i + 8) != i || (v15 = (__int64 **)i[1], *v15 != i) )
        __fastfail(3u);
      *v15 = (__int64 *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      ACPIWakeRemoveDevicesAndUpdate(0LL, 0LL);
      *((_DWORD *)i + 27) |= 4u;
      v16 = (void (__fastcall *)(__int64, __int64, __int64))i[24];
      *((_DWORD *)i + 64) = -1073741536;
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      IoReleaseCancelSpinLock(*(_BYTE *)(a2 + 69));
      v16(v6, a2, 3221225760LL);
      if ( _bittest64((const signed __int64 *)(v6 + 1008), 0x20u) )
        ACPIWakeEmulationDisable(i);
      if ( _bittest64((const signed __int64 *)(v6 + 1008), 0x26u) )
        ACPIDeviceNotifyWakeEventDevice(v6, 0LL);
      ACPIWakeEnableDisableAsync(v6, 0LL, ACPIDeviceCancelWaitWakeIrpCallBack, i);
      return;
    }
  }
  v17 = byte_140075A82;
  if ( v6 )
  {
    v19 = *(_QWORD *)(v6 + 8);
    v4 = v6;
    if ( (v19 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(v6 + 608);
      if ( (v19 & 0x400000000000LL) != 0 )
        v17 = *(const char **)(v6 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_qqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      5,
      12,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a2,
      v4,
      (__int64)v5,
      (__int64)v17);
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  IoReleaseCancelSpinLock(*(_BYTE *)(a2 + 69));
}
