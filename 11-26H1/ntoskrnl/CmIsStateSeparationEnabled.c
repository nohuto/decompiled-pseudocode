/*
 * XREFs of CmIsStateSeparationEnabled @ 0x1404CEFB4
 * Callers:
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x140795CA0 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopInitializeDumpPolicySettings @ 0x140796374 (IopInitializeDumpPolicySettings.c)
 *     PiPnpRtlInit @ 0x1407A9F14 (PiPnpRtlInit.c)
 *     PiDrvDbInit @ 0x1407B889C (PiDrvDbInit.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x1407BA804 (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1407BA93C (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbSetupNodeHive @ 0x1407BAE00 (PiDrvDbSetupNodeHive.c)
 *     KIsSideloadingEnabled @ 0x14085100C (KIsSideloadingEnabled.c)
 *     PiCMEnumerateSubKeys @ 0x140974874 (PiCMEnumerateSubKeys.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1409A4BE4 (PopBcdSetDefaultResumeObjectElements.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140A42F04 (PiDevCfgEnumDeviceKeys.c)
 *     KIsUnlockSettingEnabled @ 0x140AF6404 (KIsUnlockSettingEnabled.c)
 *     RtlIsStateSeparationEnabled @ 0x140AF6E60 (RtlIsStateSeparationEnabled.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationEnabled()
{
  return HIDWORD(WheapPfaLock.KernelStack) != 0;
}
