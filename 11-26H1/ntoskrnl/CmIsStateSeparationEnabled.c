/*
 * XREFs of CmIsStateSeparationEnabled @ 0x1404D5744
 * Callers:
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x140793170 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopInitializeDumpPolicySettings @ 0x140793844 (IopInitializeDumpPolicySettings.c)
 *     PiPnpRtlInit @ 0x1407A7364 (PiPnpRtlInit.c)
 *     PiDrvDbInit @ 0x1407B583C (PiDrvDbInit.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x1407B77A4 (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1407B78DC (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbSetupNodeHive @ 0x1407B7DA0 (PiDrvDbSetupNodeHive.c)
 *     KIsSideloadingEnabled @ 0x14084ACFC (KIsSideloadingEnabled.c)
 *     PiCMEnumerateSubKeys @ 0x140919E14 (PiCMEnumerateSubKeys.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1409887D8 (PiDevCfgEnumDeviceKeys.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1409D3C04 (PopBcdSetDefaultResumeObjectElements.c)
 *     KIsUnlockSettingEnabled @ 0x140AF39E4 (KIsUnlockSettingEnabled.c)
 *     RtlIsStateSeparationEnabled @ 0x140AF47C0 (RtlIsStateSeparationEnabled.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationEnabled()
{
  return HIDWORD(WheapPfaLock.CycleTime) != 0;
}
