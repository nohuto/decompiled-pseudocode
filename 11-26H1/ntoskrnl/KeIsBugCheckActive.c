/*
 * XREFs of KeIsBugCheckActive @ 0x14042EB60
 * Callers:
 *     KiSendThawExecution @ 0x1404FBC80 (KiSendThawExecution.c)
 * Callees:
 *     <none>
 */

char __fastcall KeIsBugCheckActive(_DWORD *a1)
{
  if ( ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) == 0 )
    return 0;
  if ( a1 )
    *a1 = LODWORD(KiDpcWatchdogConfigurationLock.InitialStack) >> 4;
  return 1;
}
