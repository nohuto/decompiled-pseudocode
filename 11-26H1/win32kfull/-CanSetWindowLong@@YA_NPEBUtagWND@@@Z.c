/*
 * XREFs of ?CanSetWindowLong@@YA_NPEBUtagWND@@@Z @ 0x14025DA1C
 * Callers:
 *     ?FCallerOk@@YAHPEAUtagWND@@@Z @ 0x140086128 (-FCallerOk@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

bool __fastcall CanSetWindowLong(const struct tagWND *a1)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rsi
  PETHREAD *v5; // rdi
  HANDLE v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  HANDLE v10; // rbx

  v2 = PtiCurrent((__int64)a1);
  v4 = *((_QWORD *)a1 + 2);
  v5 = (PETHREAD *)v2;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 520), 0, 0) & 0xC) != 0
    && (_InterlockedCompareExchange((volatile signed __int32 *)v2 + 130, 0, 0) & 0xC) == 0 )
  {
    return 0;
  }
  v7 = *(HANDLE *)(W32GetUserSessionState(0LL, v3) + 63536);
  if ( PsGetThreadProcessId(*(PETHREAD *)v4) != v7 )
    return 1;
  v10 = *(HANDLE *)(W32GetUserSessionState(v9, v8) + 63536);
  return PsGetThreadProcessId(*v5) == v10;
}
