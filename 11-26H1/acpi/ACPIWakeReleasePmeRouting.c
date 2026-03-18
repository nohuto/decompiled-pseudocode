/*
 * XREFs of ACPIWakeReleasePmeRouting @ 0x14006B2A0
 * Callers:
 *     PcisuppReleasePciInterfaces @ 0x1400BC658 (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

void ACPIWakeReleasePmeRouting()
{
  KIRQL v0; // al
  PVOID v1; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v1 = PciPmeInterface;
  PciPmeInterface = 0LL;
  PciPmeInterfaceInstantiated = 0;
  KeReleaseSpinLock(&AcpiPowerLock, v0);
  ExFreePoolWithTag(v1, 0);
}
