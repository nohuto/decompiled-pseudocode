/*
 * XREFs of VfSettingsApplyMiscellaneousChecks @ 0x140B8B240
 * Callers:
 *     VfSettingsCheckForChanges @ 0x140B8B280 (VfSettingsCheckForChanges.c)
 *     VfMiscPluginEntry @ 0x140B8E690 (VfMiscPluginEntry.c)
 * Callees:
 *     ExClearPoolFlags @ 0x140647F60 (ExClearPoolFlags.c)
 *     ExSetPoolFlags @ 0x140648924 (ExSetPoolFlags.c)
 */

void VfSettingsApplyMiscellaneousChecks()
{
  int v0; // ecx

  v0 = (VfRuleClasses & 0x400000) == 0 ? 0x206 : 0;
  if ( (MmVerifierData & 0x800) != 0 )
    ExSetPoolFlags(v0);
  else
    ExClearPoolFlags(v0);
}
