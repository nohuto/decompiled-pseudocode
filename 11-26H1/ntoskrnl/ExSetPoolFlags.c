/*
 * XREFs of ExSetPoolFlags @ 0x1406CC070
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140C205D0 (VfInitSystemNoRebootNeeded.c)
 *     VfDriverApplyDifVerification @ 0x140C28168 (VfDriverApplyDifVerification.c)
 *     ViPtInitCircularPoolTrace @ 0x140C2A668 (ViPtInitCircularPoolTrace.c)
 *     ViIovInitialization @ 0x140C2AC6C (ViIovInitialization.c)
 *     VfDeadlockPluginEntry @ 0x140C364B0 (VfDeadlockPluginEntry.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140C390EC (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned __int64 a1)
{
  _InterlockedOr64(&ExpPoolFlags, a1);
}
