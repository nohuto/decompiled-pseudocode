/*
 * XREFs of ExClearPoolFlags @ 0x1406CBA40
 * Callers:
 *     VfDriverRemoveDifVerification @ 0x140C28310 (VfDriverRemoveDifVerification.c)
 *     ViPtPluginUnload @ 0x140C2A740 (ViPtPluginUnload.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140C390EC (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExClearPoolFlags(__int64 a1)
{
  _InterlockedAnd64(&ExpPoolFlags, ~a1);
}
