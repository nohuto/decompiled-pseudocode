/*
 * XREFs of VfSettingsApplyMiscellaneousChecks @ 0x140C390EC
 * Callers:
 *     VfSettingsCheckForChanges @ 0x140C39130 (VfSettingsCheckForChanges.c)
 *     VfMiscPluginEntry @ 0x140C3D620 (VfMiscPluginEntry.c)
 * Callees:
 *     ExClearPoolFlags @ 0x1406CBA40 (ExClearPoolFlags.c)
 *     ExSetPoolFlags @ 0x1406CC070 (ExSetPoolFlags.c)
 */

void VfSettingsApplyMiscellaneousChecks()
{
  unsigned __int64 v0; // rcx

  v0 = (VfRuleClasses & 0x400000) == 0 ? 0x206 : 0;
  if ( (MmVerifierData & 0x800) != 0 )
    ExSetPoolFlags(v0);
  else
    ExClearPoolFlags(v0);
}
