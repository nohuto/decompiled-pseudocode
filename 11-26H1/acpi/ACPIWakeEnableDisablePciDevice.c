/*
 * XREFs of ACPIWakeEnableDisablePciDevice @ 0x140033494
 * Callers:
 *     ACPIWakeDisableAsync @ 0x140032438 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x140032F20 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x140033570 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWaitWakeEnableOnPowerUp @ 0x140045D90 (ACPIWaitWakeEnableOnPowerUp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIWakeEnableDisablePciDevice(__int64 a1, char a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx
  KIRQL v6; // di
  PVOID v7; // rdx

  if ( PciPmeInterfaceInstantiated )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v5 = *(_QWORD *)(a1 + 784);
    v6 = v4;
    if ( v5 )
    {
      if ( PciPmeInterfaceInstantiated )
      {
        v7 = PciPmeInterface;
        LOBYTE(v7) = a2;
        (*((void (__fastcall **)(__int64, PVOID))PciPmeInterface + 6))(v5, v7);
      }
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v6);
  }
}
