/*
 * XREFs of ACPIInitShutdownNotification @ 0x1400B9A40
 * Callers:
 *     ACPIRootIrpStartDevice @ 0x1400DBD50 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     OSReadRegValue @ 0x1400C8470 (OSReadRegValue.c)
 */

void *ACPIInitShutdownNotification()
{
  void *result; // rax

  result = (void *)ExAllocatePool2(64LL, 208LL, 1148216129LL);
  AcpiShutdownNotification = result;
  if ( result )
  {
    KeInitializeGuardedMutex(&AcpiShutdownInProgressWorkerLock);
    result = (void *)OSReadRegValue("NotifyOsShutdownEnabled");
    AcpiNotifyOsShutdownEnabled = 0;
  }
  return result;
}
