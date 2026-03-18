/*
 * XREFs of InitiatePTPMouseProcessing @ 0x1400F81F0
 * Callers:
 *     ?PostProcessInput@CHidInput@@EEAAJXZ @ 0x1400F81C0 (-PostProcessInput@CHidInput@@EEAAJXZ.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x14018ADE0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?OnPTPDeferredMouseInputTimer@CHidInput@@EEAAJXZ @ 0x140212980 (-OnPTPDeferredMouseInputTimer@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

LONG __fastcall InitiatePTPMouseProcessing(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return KeSetEvent(*(PRKEVENT *)(UserSessionState + 16824), 1, 0);
}
