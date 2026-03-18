/*
 * XREFs of ACPIWakeEmptyRequestQueue @ 0x14003202C
 * Callers:
 *     ACPIDispatchIrp @ 0x140024580 (ACPIDispatchIrp.c)
 * Callees:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x14001FC90 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIWakeCompleteRequestQueue @ 0x140033C74 (ACPIWakeCompleteRequestQueue.c)
 */

__int64 __fastcall ACPIWakeEmptyRequestQueue(__int64 a1)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  KIRQL Irql; // [rsp+48h] [rbp+10h] BYREF

  Irql = 0;
  v3[1] = v3;
  v3[0] = v3;
  IoAcquireCancelSpinLock(&Irql);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  ACPIWakeRemoveDevicesAndUpdate(a1, (__int64)v3);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  IoReleaseCancelSpinLock(Irql);
  ACPIWakeCompleteRequestQueue(v3, 3221225486LL);
  return 0LL;
}
