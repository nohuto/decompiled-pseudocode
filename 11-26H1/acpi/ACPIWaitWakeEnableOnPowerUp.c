/*
 * XREFs of ACPIWaitWakeEnableOnPowerUp @ 0x140045D90
 * Callers:
 *     <none>
 * Callees:
 *     ACPIWakeEnableDisablePciDevice @ 0x140033494 (ACPIWakeEnableDisablePciDevice.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIWaitWakeEnableOnPowerUp(__int64 a1, void (__fastcall **a2)(__int64, _QWORD), int a3)
{
  KIRQL v6; // al
  __int64 *v7; // rbx
  KIRQL v8; // bp

  a2[1](a1, *a2);
  if ( a3 >= 0 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    v7 = (__int64 *)AcpiPowerWaitWakeList;
    v8 = v6;
    while ( v7 != &AcpiPowerWaitWakeList )
    {
      if ( v7[5] == a1 )
        ACPIWakeEnableDisablePciDevice(a1, 1);
      v7 = (__int64 *)*v7;
    }
    KeReleaseSpinLock(&AcpiPowerLock, v8);
  }
  ExFreePoolWithTag(a2, 0x50706341u);
}
