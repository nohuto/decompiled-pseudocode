/*
 * XREFs of ACPIHardwareGlobalLockReleased @ 0x14002E138
 * Callers:
 *     ACPIInterruptServiceRoutineDPC @ 0x14002DBE0 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     ACPIAcquireHardwareGlobalLock @ 0x14002EE40 (ACPIAcquireHardwareGlobalLock.c)
 *     ACPIStartNextGlobalLockRequest @ 0x14002EF2C (ACPIStartNextGlobalLockRequest.c)
 */

void ACPIHardwareGlobalLockReleased()
{
  char v0; // bl
  __int64 v1; // r8
  _QWORD *v2; // rdx

  v0 = 0;
  LOBYTE(v1) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
  v2 = (_QWORD *)((char *)AcpiInformation + 48);
  if ( (_QWORD *)*v2 != v2 )
    v0 = ACPIAcquireHardwareGlobalLock(*((_QWORD *)AcpiInformation + 5), v2, v1);
  KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v1);
  if ( v0 )
    ACPIStartNextGlobalLockRequest();
}
