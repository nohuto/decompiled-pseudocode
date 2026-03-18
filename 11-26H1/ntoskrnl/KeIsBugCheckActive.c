/*
 * XREFs of KeIsBugCheckActive @ 0x14043C2B0
 * Callers:
 *     KiSendThawExecution @ 0x1405023B0 (KiSendThawExecution.c)
 * Callees:
 *     <none>
 */

char __fastcall KeIsBugCheckActive(_DWORD *a1)
{
  if ( ((__int64)KiDpcWatchdogConfigurationLock.StackLimit & 3) == 0 )
    return 0;
  if ( a1 )
    *a1 = LODWORD(KiDpcWatchdogConfigurationLock.StackLimit) >> 4;
  return 1;
}
