/*
 * XREFs of KiInitializeForceIdle @ 0x140B26FF4
 * Callers:
 *     KeInitializeTimerTable @ 0x140B26EB8 (KeInitializeTimerTable.c)
 * Callees:
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KeDisableForceIdle @ 0x140535710 (KeDisableForceIdle.c)
 */

__int64 __fastcall KiInitializeForceIdle(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a1 + 36) )
  {
    *(_QWORD *)&KiSupervisorXStateFeaturesLock.Timer.Header.Lock = 0LL;
    KeInitializeDpc(
      (PRKDPC)&KiSupervisorXStateFeaturesLock.ApcStateFill[40],
      (PKDEFERRED_ROUTINE)KiForceIdleStartDpcRoutine,
      0LL);
    KeInitializeDpc((PRKDPC)&KiForceIdleStopDpc, (PKDEFERRED_ROUTINE)KiForceIdleStopDpcRoutine, 0LL);
    KiSupervisorXStateFeaturesLock.ApcState.KernelApcPending = 3;
    BYTE1(KiForceIdleStopDpc) = 3;
    if ( !KiSerializeTimerExpiration )
      KeDisableForceIdle();
  }
  KeInitializeDpc((PRKDPC)(a1 + 35560), (PKDEFERRED_ROUTINE)KiForceIdleParkUnparkDpcRoutine, 0LL);
  *(_BYTE *)(a1 + 35561) = 3;
  result = *(_QWORD *)(a1 + 35616);
  if ( !result )
  {
    result = 2048LL;
    *(_WORD *)(a1 + 35562) = *(_DWORD *)(a1 + 36) + 2048;
  }
  return result;
}
