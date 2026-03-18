/*
 * XREFs of ACPIDeviceCompleteGenericPhase @ 0x140025B40
 * Callers:
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x140024D00 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x140025550 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x140025630 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1400258B0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x140025D50 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x140026640 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x140026900 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1400274D0 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x140027600 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x140027750 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x14002D7E0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x14002E1B0 (ACPIDevicePowerProcessPhase2SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x140031890 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x140045930 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1400485C0 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x140048CF0 (ACPIDevicePowerProcessPhase2SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x140049160 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1400499A0 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x14004A130 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x14004A9C0 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     ACPIDeviceCompleteInterpreterRequest @ 0x14004B080 (ACPIDeviceCompleteInterpreterRequest.c)
 *     ACPIWakeRestoreEnablesCompletion @ 0x140052CE0 (ACPIWakeRestoreEnablesCompletion.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x14005D1C0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x14005D320 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 * Callees:
 *     ACPIDeviceCompleteCommon @ 0x14002743C (ACPIDeviceCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 */

void __fastcall ACPIDeviceCompleteGenericPhase(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  __int64 v6; // r10
  const char *v7; // rdx
  const char *v8; // r8
  __int64 v10; // rcx
  KIRQL v11; // bl
  int v12; // edx
  __int64 v13; // [rsp+38h] [rbp-20h]

  v4 = *(_QWORD **)(a4 + 40);
  LOBYTE(v6) = 0;
  v7 = byte_140075A82;
  v8 = byte_140075A82;
  if ( v4 )
  {
    v10 = v4[1];
    v6 = *(_QWORD *)(a4 + 40);
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v7 = (const char *)v4[76];
      if ( (v10 & 0x400000000000LL) != 0 )
        v8 = (const char *)v4[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = (__int64)v7;
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v7,
      10,
      14,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a2,
      v6,
      v13,
      (__int64)v8);
  }
  *(_DWORD *)(a4 + 56) &= 0xEEFFFFFF;
  if ( a2 < 0 )
  {
    *(_DWORD *)(a4 + 256) = a2;
    ACPIDeviceCompleteCommon(a4 + 208, 2LL);
  }
  else
  {
    _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 208), *(_DWORD *)(a4 + 212), 1);
    v11 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
    v12 = AcpiPowerDpcFlags | 2;
    AcpiPowerDpcFlags = v12;
    if ( (v12 & 1) == 0 )
    {
      AcpiPowerDpcFlags = v12 | 1;
      KeInsertQueueDpc(&AcpiPowerDpc, 0LL, 0LL);
    }
    KeReleaseSpinLock(&AcpiPowerQueueLock, v11);
  }
}
