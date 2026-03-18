/*
 * XREFs of PopUpdateSmartUserPresencePredictions @ 0x14077C938
 * Callers:
 *     PopWnfUserAwayPredictionCallback @ 0x1407CCDD0 (PopWnfUserAwayPredictionCallback.c)
 *     PopWnfAudioCallback @ 0x140946B50 (PopWnfAudioCallback.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404F15DC (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14050EC70 (PopIdleArmAoAcDozeS4Timer.c)
 */

void __fastcall PopUpdateSmartUserPresencePredictions(void *a1, unsigned int a2)
{
  void *v2; // r8

  v2 = 0LL;
  if ( !byte_140F1070D
    && (unsigned __int64)a1 >= MEMORY[0xFFFFF78000000014]
    && MEMORY[0xFFFFF78000000014] - (_QWORD)a1 >= 0x10C388D000uLL )
  {
    v2 = a1;
  }
  if ( stru_140F0F620.Spare32 != v2 )
  {
    stru_140F0F620.Spare32 = v2;
    if ( PopSmartUserPresenceAction )
    {
      if ( LOBYTE(stru_140F0F620.Padding[1]) && (PopIdleCancelAoAcDozeS4Timer(a2) || !*((_DWORD *)qword_140F105C0 + 22)) )
        PopIdleArmAoAcDozeS4Timer();
    }
  }
}
