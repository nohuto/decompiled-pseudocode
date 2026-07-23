/*
 * XREFs of VfSettingsApplyMiscellaneousChecks @ 0x140C3F0FC
 * Callers:
 *     VfSettingsCheckForChanges @ 0x140C3F140 (VfSettingsCheckForChanges.c)
 *     VfMiscPluginEntry @ 0x140C43630 (VfMiscPluginEntry.c)
 * Callees:
 *     ExClearPoolFlags @ 0x1406CFA70 (ExClearPoolFlags.c)
 *     ExSetPoolFlags @ 0x1406D00A0 (ExSetPoolFlags.c)
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
