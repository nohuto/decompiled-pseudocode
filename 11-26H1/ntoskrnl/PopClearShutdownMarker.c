/*
 * XREFs of PopClearShutdownMarker @ 0x14077C918
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140C04AB0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     <none>
 */

void PopClearShutdownMarker()
{
  *(_DWORD *)&stru_140E66FF0.SavedApcStateFill[16] = 0;
}
