/*
 * XREFs of ACPIWakeDisconnectWakeInterrupts @ 0x14003C468
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x14003BD90 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x14005ADC0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x14005B380 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIFilterIrpSurpriseRemoval @ 0x1400D1170 (ACPIFilterIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x14001FC90 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x140032B58 (ACPIDereferenceWaitWakePowerRequest.c)
 */

__int64 __fastcall ACPIWakeDisconnectWakeInterrupts(struct _EX_RUNDOWN_REF *a1)
{
  char *v2; // rbx
  char *v3; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  KIRQL Irql; // [rsp+40h] [rbp+8h] BYREF

  Irql = 0;
  if ( (a1[126].Count & 0x10000000000000LL) == 0 )
  {
    v5[1] = v5;
    v5[0] = v5;
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    ACPIWakeRemoveDevicesAndUpdate((__int64)a1, (__int64)v5);
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    v2 = (char *)v5[0];
    while ( v2 != (char *)v5 )
    {
      v3 = v2;
      v2 = *(char **)v2;
      ACPIDereferenceWaitWakePowerRequest(v3);
    }
    ExWaitForRundownProtectionRelease(a1 + 125);
    ExRundownCompleted(a1 + 125);
    ExReInitializeRundownProtection(a1 + 125);
    a1[126].Count |= 0x10000000000000uLL;
  }
  return 0LL;
}
