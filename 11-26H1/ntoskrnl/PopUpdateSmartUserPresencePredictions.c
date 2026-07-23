/*
 * XREFs of PopUpdateSmartUserPresencePredictions @ 0x14077F42C
 * Callers:
 *     PopWnfUserAwayPredictionCallback @ 0x1407CFE70 (PopWnfUserAwayPredictionCallback.c)
 *     PopWnfAudioCallback @ 0x1409C24C0 (PopWnfAudioCallback.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404EABBC (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1405086E0 (PopIdleArmAoAcDozeS4Timer.c)
 */

void __fastcall PopUpdateSmartUserPresencePredictions(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( !*((_BYTE *)&PpmIdlePolicyLock.ForegroundLossTime + 5)
    && a1 >= MEMORY[0xFFFFF78000000014]
    && MEMORY[0xFFFFF78000000014] - a1 >= 0x10C388D000LL )
  {
    v2 = a1;
  }
  if ( qword_140F10338 != v2 )
  {
    qword_140F10338 = v2;
    if ( PopSmartUserPresenceAction )
    {
      if ( byte_140F10360
        && (PopIdleCancelAoAcDozeS4Timer(a2) || !*(_DWORD *)(PpmIdlePolicyLock.WriteOperationCount + 88)) )
      {
        PopIdleArmAoAcDozeS4Timer();
      }
    }
  }
}
