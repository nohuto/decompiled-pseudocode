/*
 * XREFs of HalpGetDynamicDevicePointer @ 0x140B26B48
 * Callers:
 *     HalpSetAcpiRealTimeClock @ 0x1407802AC (HalpSetAcpiRealTimeClock.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x1407852F4 (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 *     HalpArmAcpiWakeAlarm @ 0x140B26808 (HalpArmAcpiWakeAlarm.c)
 *     HalpQueryAcpiRealTimeClock @ 0x140B26A10 (HalpQueryAcpiRealTimeClock.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

__int64 __fastcall HalpGetDynamicDevicePointer(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi

  v2 = 0;
  if ( !HalpDynamicDevicesReady )
    return 3221226645LL;
  KeWaitForSingleObject(&HalpDeviceBlockUnblockPushLock.ReadOperationCount, WrExecutive, 0, 0, 0LL);
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
  KeSetEvent((PRKEVENT)&HalpDeviceBlockUnblockPushLock.ReadOperationCount, 0, 0);
  return v2;
}
