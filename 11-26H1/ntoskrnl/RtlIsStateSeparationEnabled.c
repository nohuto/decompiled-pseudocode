/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x140AF6E60
 * Callers:
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x1405D35F0 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     RtlpGetBootStatusPath @ 0x14061CF5C (RtlpGetBootStatusPath.c)
 *     BcdGetSystemStorePath @ 0x1409A49B8 (BcdGetSystemStorePath.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     PpDevCfgInit @ 0x140CCC50C (PpDevCfgInit.c)
 *     PopInitializePowerButtonHold @ 0x140CDB3CC (PopInitializePowerButtonHold.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140CE8DD8 (BapdpProcessVsmKeyBlobs.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF6E68 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1404CEFB4 (CmIsStateSeparationEnabled.c)
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  return CmIsStateSeparationEnabled();
}
