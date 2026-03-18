/*
 * XREFs of CmpWorkItemRundown @ 0x14077C430
 * Callers:
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140850D00 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x1408610C0 (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 *     CmFcManagerUnregisterFeatureUsageProvider @ 0x140B33CF8 (CmFcManagerUnregisterFeatureUsageProvider.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 */

__int64 __fastcall CmpWorkItemRundown(struct _EX_RUNDOWN_REF *a1)
{
  volatile __int64 *v1; // rbx

  v1 = (volatile __int64 *)&a1[4];
  ExWaitForRundownProtectionRelease(a1 + 4);
  return _InterlockedExchange64(v1, 1LL);
}
