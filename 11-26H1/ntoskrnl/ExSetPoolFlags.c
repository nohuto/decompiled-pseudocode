/*
 * XREFs of ExSetPoolFlags @ 0x1406D00A0
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140C265DC (VfInitSystemNoRebootNeeded.c)
 *     VfDriverApplyDifVerification @ 0x140C2E174 (VfDriverApplyDifVerification.c)
 *     ViPtInitCircularPoolTrace @ 0x140C30678 (ViPtInitCircularPoolTrace.c)
 *     ViIovInitialization @ 0x140C30C7C (ViIovInitialization.c)
 *     VfDeadlockPluginEntry @ 0x140C3C4C0 (VfDeadlockPluginEntry.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140C3F0FC (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned __int64 a1)
{
  _InterlockedOr64(&ExpPoolFlags, a1);
}
