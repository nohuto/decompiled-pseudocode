/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x140AF47C0
 * Callers:
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x1405D0DF0 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     RtlpGetBootStatusPath @ 0x140619F0C (RtlpGetBootStatusPath.c)
 *     BcdGetSystemStorePath @ 0x1409D39D8 (BcdGetSystemStorePath.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 *     PpDevCfgInit @ 0x140CC642C (PpDevCfgInit.c)
 *     PopInitializePowerButtonHold @ 0x140CD502C (PopInitializePowerButtonHold.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140CE2A38 (BapdpProcessVsmKeyBlobs.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF0AF0 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1404D5744 (CmIsStateSeparationEnabled.c)
 */

bool RtlIsStateSeparationEnabled()
{
  return CmIsStateSeparationEnabled();
}
