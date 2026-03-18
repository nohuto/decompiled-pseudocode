/*
 * XREFs of imp_VfWdfSpinLockAcquire @ 0x1400E1ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfSpinLockAcquire(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFSPINLOCK__ *SpinLock)
{
  WdfVersion.Functions.pfnWdfSpinLockAcquire(DriverGlobals, SpinLock);
}
