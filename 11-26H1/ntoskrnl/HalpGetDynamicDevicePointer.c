/*
 * XREFs of HalpGetDynamicDevicePointer @ 0x140B28DA8
 * Callers:
 *     HalpSetAcpiRealTimeClock @ 0x140782DAC (HalpSetAcpiRealTimeClock.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x140787E24 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpArmAcpiWakeAlarm @ 0x140B28A68 (HalpArmAcpiWakeAlarm.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140B28C70 (HalpQueryAcpiRealTimeClock.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

__int64 __fastcall HalpGetDynamicDevicePointer(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi

  v2 = 0;
  if ( !HalpDynamicDevicesReady )
    return 3221226645LL;
  KeWaitForSingleObject((PVOID)&HalpDeviceBlockUnblockPushLock.AbCompletedIoQoSBoostCount, WrExecutive, 0, 0, 0LL);
  v4 = HalpDynamicDevices[0];
  if ( HalpDynamicDevices[0] )
  {
    PsReferenceSiloContext((void *)HalpDynamicDevices[0]);
    *a2 = v4;
  }
  else
  {
    v2 = -1073741275;
  }
  KeSetEvent((PRKEVENT)&HalpDeviceBlockUnblockPushLock.AbCompletedIoQoSBoostCount, 0, 0);
  return v2;
}
