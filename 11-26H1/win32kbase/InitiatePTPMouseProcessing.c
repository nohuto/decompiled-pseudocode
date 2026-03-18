/*
 * XREFs of InitiatePTPMouseProcessing @ 0x14013C610
 * Callers:
 *     ?PostProcessInput@CHidInput@@EEAAJXZ @ 0x14013C5E0 (-PostProcessInput@CHidInput@@EEAAJXZ.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1401AFE10 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?OnPTPDeferredMouseInputTimer@CHidInput@@EEAAJXZ @ 0x1401B0910 (-OnPTPDeferredMouseInputTimer@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

LONG __fastcall InitiatePTPMouseProcessing(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  return KeSetEvent(*(PRKEVENT *)(UserSessionState + 16816), 1, 0);
}
