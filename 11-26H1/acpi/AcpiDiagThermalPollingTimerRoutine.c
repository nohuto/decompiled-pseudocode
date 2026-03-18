/*
 * XREFs of AcpiDiagThermalPollingTimerRoutine @ 0x14002BB60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIThermalRereadTemperature @ 0x14002ABBC (ACPIThermalRereadTemperature.c)
 *     AcpiDiagRequeueThermalPollingTimer @ 0x14002BBDC (AcpiDiagRequeueThermalPollingTimer.c)
 */

__int64 AcpiDiagThermalPollingTimerRoutine()
{
  KIRQL v0; // al
  __int64 *v1; // rbx
  KIRQL v2; // di

  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v1 = (__int64 *)AcpiThermalZoneList;
  v2 = v0;
  while ( v1 != &AcpiThermalZoneList )
  {
    ACPIThermalRereadTemperature((__int64)(v1 - 26));
    v1 = (__int64 *)*v1;
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
  return AcpiDiagRequeueThermalPollingTimer();
}
