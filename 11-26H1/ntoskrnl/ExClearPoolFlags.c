/*
 * XREFs of ExClearPoolFlags @ 0x1406CFA70
 * Callers:
 *     VfDriverRemoveDifVerification @ 0x140C2E31C (VfDriverRemoveDifVerification.c)
 *     ViPtPluginUnload @ 0x140C30750 (ViPtPluginUnload.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140C3F0FC (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExClearPoolFlags(__int64 a1)
{
  _InterlockedAnd64(&ExpPoolFlags, ~a1);
}
