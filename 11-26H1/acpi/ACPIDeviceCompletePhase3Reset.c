/*
 * XREFs of ACPIDeviceCompletePhase3Reset @ 0x14005CF30
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1400273F0 (ACPIDeviceCompletePhase3Common.c)
 *     WPP_RECORDER_SF_qL @ 0x14003B520 (WPP_RECORDER_SF_qL.c)
 */

void __fastcall ACPIDeviceCompletePhase3Reset(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  KIRQL v5; // al
  signed __int32 v6; // edx
  KIRQL v7; // bl
  char v8; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      17,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a4,
      v8);
  }
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v6 = *(_DWORD *)(a4 + 68);
  --Phase3PendingOnWorkCount;
  v7 = v5;
  ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a4 + 64), v6);
  KeReleaseSpinLock(&AcpiPowerLock, v7);
}
