/*
 * XREFs of ACPIGpeClearEventMasks @ 0x1400613E4
 * Callers:
 *     ACPITableLoad @ 0x140049220 (ACPITableLoad.c)
 *     ACPITableUnload @ 0x140069970 (ACPITableUnload.c)
 * Callees:
 *     ACPIGpeEnableDisableEvents @ 0x140021160 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeClearRegisters @ 0x14002D4CC (ACPIGpeClearRegisters.c)
 *     memset @ 0x140072740 (memset.c)
 */

void ACPIGpeClearEventMasks()
{
  KIRQL v0; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0);
  ACPIGpeClearRegisters();
  memset(GpeHandlerRegistered, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeEnable, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeCurEnable, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeWakeEnable, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeWakeHandler, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeSpecialHandler, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeRunMethod, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpePending, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeComplete, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeIsLevel, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeHandlerType, 0, *((unsigned __int16 *)AcpiInformation + 51));
  KeReleaseSpinLock(&GpeTableLock, v0);
}
