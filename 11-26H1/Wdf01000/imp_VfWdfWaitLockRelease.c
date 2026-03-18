/*
 * XREFs of imp_VfWdfWaitLockRelease @ 0x1400E2840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfWaitLockRelease(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWAITLOCK__ *Lock)
{
  WdfVersion.Functions.pfnWdfWaitLockRelease(DriverGlobals, Lock);
}
