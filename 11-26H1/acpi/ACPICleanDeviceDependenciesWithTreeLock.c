/*
 * XREFs of ACPICleanDeviceDependenciesWithTreeLock @ 0x140048088
 * Callers:
 *     ACPIInitRemoveDeviceExtension @ 0x14001C148 (ACPIInitRemoveDeviceExtension.c)
 *     ACPIInitDeleteDeviceExtension @ 0x140061CBC (ACPIInitDeleteDeviceExtension.c)
 * Callees:
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1400480D0 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 */

__int64 __fastcall ACPICleanDeviceDependenciesWithTreeLock(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 648);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4F706341u);
    *(_QWORD *)(a1 + 648) = 0LL;
  }
  ACPIBuildProcessDelayedDependencyExternalTrigger(a1);
  return 0LL;
}
