/*
 * XREFs of MiSystemInSingleProcessorMode @ 0x1406EEF80
 * Callers:
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x1406FB8B8 (MmRemoveSystemCacheFromDump.c)
 * Callees:
 *     MiMirrorInSingleProcessorMode @ 0x1402A2284 (MiMirrorInSingleProcessorMode.c)
 */

_BOOL8 MiSystemInSingleProcessorMode()
{
  int v0; // eax

  if ( (MiFlags & 0x30) == 0 || ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) != 0 )
    return 1LL;
  LOBYTE(v0) = MiMirrorInSingleProcessorMode();
  return v0 != 0;
}
