/*
 * XREFs of ?CancelInertiaTimer@CPTPProcessor@@AEAAXXZ @ 0x1401877D0
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1401AFE10 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPTPProcessor::CancelInertiaTimer(CPTPProcessor *this, int a2, int a3)
{
  __int64 UserSessionState; // rax

  if ( *((_BYTE *)this + 392) )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)this, a2, a3);
    ZwCancelTimer(*(HANDLE *)(*(_QWORD *)(UserSessionState + 16832) + 480LL), 0LL);
    *((_BYTE *)this + 392) = 0;
  }
  *((_DWORD *)this + 97) &= ~1u;
}
