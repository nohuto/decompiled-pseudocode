/*
 * XREFs of PpmCheckPreConditionsForDeepSleep @ 0x140601764
 * Callers:
 *     PpmIdleSelectStates @ 0x1403EA21C (PpmIdleSelectStates.c)
 * Callees:
 *     <none>
 */

bool __fastcall PpmCheckPreConditionsForDeepSleep(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_BYTE *)(a1 + 33) && PopWeakChargerLock.SchedulerApcFill3[16] && PopWeakChargerLock.SchedulerApcFill3[17] )
    return PopWeakChargerLock.SchedulerApcFill3[32] == 0;
  return v1;
}
