/*
 * XREFs of BgDisplaySafeToPowerOffScreen @ 0x1407159D0
 * Callers:
 *     PopShutdownHandler @ 0x140BFDFA0 (PopShutdownHandler.c)
 * Callees:
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E81BC (BgpFwReleaseLock.c)
 *     BgpDisplaySafeToPowerOffScreen @ 0x140717E40 (BgpDisplaySafeToPowerOffScreen.c)
 */

__int64 BgDisplaySafeToPowerOffScreen()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 2) != 0 )
    v0 = BgpDisplaySafeToPowerOffScreen();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
