/*
 * XREFs of ExpPrepareNewAtsDevice @ 0x1406D46DC
 * Callers:
 *     ExInitializeDeviceAts @ 0x1406D4260 (ExInitializeDeviceAts.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052F77C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140534EB0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ExpAtsConfigureSecureDevice @ 0x1406D4570 (ExpAtsConfigureSecureDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpPrepareNewAtsDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // r12
  int v6; // eax
  unsigned int v7; // ebx

  v5 = a5;
  LODWORD(a5) = 0;
  *v5 = 0LL;
  v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a3 + 8), 0LL);
  v7 = v6;
  if ( v6 == -1073741789 || v6 >= 0 )
    return (unsigned int)-1073741823;
  return v7;
}
