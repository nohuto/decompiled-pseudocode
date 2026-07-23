/*
 * XREFs of CmpWorkItemRundown @ 0x14077EF24
 * Callers:
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140857010 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x1408673B0 (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 *     CmFcManagerUnregisterFeatureUsageProvider @ 0x140B36148 (CmFcManagerUnregisterFeatureUsageProvider.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 */

__int64 __fastcall CmpWorkItemRundown(struct _EX_RUNDOWN_REF *a1)
{
  volatile __int64 *v1; // rbx

  v1 = (volatile __int64 *)&a1[4];
  ExWaitForRundownProtectionRelease(a1 + 4);
  return _InterlockedExchange64(v1, 1LL);
}
