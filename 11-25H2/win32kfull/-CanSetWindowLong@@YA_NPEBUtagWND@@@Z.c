/*
 * XREFs of ?CanSetWindowLong@@YA_NPEBUtagWND@@@Z @ 0x1402DE0E8
 * Callers:
 *     ?FCallerOk@@YAHPEAUtagWND@@@Z @ 0x1402DE194 (-FCallerOk@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

bool __fastcall CanSetWindowLong(const struct tagWND *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rsi
  PETHREAD *v6; // rdi
  HANDLE v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  HANDLE v11; // rbx

  v3 = PtiCurrent((__int64)a1, a2);
  v5 = *((_QWORD *)a1 + 2);
  v6 = (PETHREAD *)v3;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 528), 0, 0) & 0xC) != 0
    && (_InterlockedCompareExchange((volatile signed __int32 *)v3 + 132, 0, 0) & 0xC) == 0 )
  {
    return 0;
  }
  v8 = *(HANDLE *)(W32GetUserSessionState(0LL, v4) + 63544);
  if ( PsGetThreadProcessId(*(PETHREAD *)v5) != v8 )
    return 1;
  v11 = *(HANDLE *)(W32GetUserSessionState(v10, v9) + 63544);
  return PsGetThreadProcessId(*v6) == v11;
}
