/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x140048CF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x140025B40 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qd @ 0x14002ED00 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qL @ 0x14003B520 (WPP_RECORDER_SF_qL.c)
 *     ACPIWakeRestoreEnables @ 0x14004C4CC (ACPIWakeRestoreEnables.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase3(__int64 a1)
{
  int v1; // esi
  int v3; // ebx
  int v4; // ebp
  __int64 v5; // rcx
  int v6; // eax
  int v7; // edx
  __int64 result; // rax

  v1 = 0;
  *(_DWORD *)(a1 + 212) = 6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      10,
      65,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      6);
  v3 = *(_DWORD *)(a1 + 104);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v4 = AcpiMostRecentSleepState;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v4 != 5 || v3 != 1 )
    goto LABEL_8;
  v6 = ACPIWakeRestoreEnables(v5, a1);
  v1 = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qL(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      10,
      66,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      v6);
  }
  result = 259LL;
  if ( v1 != 259 )
  {
LABEL_8:
    ACPIDeviceCompleteGenericPhase(0LL, v1, 0LL, a1);
    return 0LL;
  }
  return result;
}
