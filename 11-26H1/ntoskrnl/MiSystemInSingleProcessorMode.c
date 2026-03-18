/*
 * XREFs of MiSystemInSingleProcessorMode @ 0x1406EA2E0
 * Callers:
 *     MiAddRangeToCrashDump @ 0x1406F61BC (MiAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x1406F6C48 (MmRemoveSystemCacheFromDump.c)
 * Callees:
 *     MiMirrorInSingleProcessorMode @ 0x1402A2D34 (MiMirrorInSingleProcessorMode.c)
 */

_BOOL8 MiSystemInSingleProcessorMode()
{
  int v0; // eax

  if ( (MiFlags & 0x30) == 0 || ((__int64)KiDpcWatchdogConfigurationLock.StackLimit & 3) != 0 )
    return 1LL;
  LOBYTE(v0) = MiMirrorInSingleProcessorMode();
  return v0 != 0;
}
