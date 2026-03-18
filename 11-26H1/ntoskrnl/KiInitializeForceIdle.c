/*
 * XREFs of KiInitializeForceIdle @ 0x140B24B54
 * Callers:
 *     KeInitializeTimerTable @ 0x140B24A18 (KeInitializeTimerTable.c)
 * Callees:
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     KeDisableForceIdle @ 0x140533290 (KeDisableForceIdle.c)
 */

__int64 __fastcall KiInitializeForceIdle(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a1 + 36) )
  {
    KiForceIdleLock = 0LL;
    KeInitializeDpc((PRKDPC)&KiForceIdleStartDpc, (PKDEFERRED_ROUTINE)KiForceIdleStartDpcRoutine, 0LL);
    KeInitializeDpc((PRKDPC)&KiForceIdleStopDpc, (PKDEFERRED_ROUTINE)KiForceIdleStopDpcRoutine, 0LL);
    BYTE1(KiForceIdleStartDpc) = 3;
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
