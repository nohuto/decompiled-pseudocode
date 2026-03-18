/*
 * XREFs of zzzInternalHideCaret @ 0x140052D7C
 * Callers:
 *     xxxBeginPaint @ 0x140052240 (xxxBeginPaint.c)
 *     NtUserHideCaret @ 0x140158110 (NtUserHideCaret.c)
 *     zzzInternalDestroyCaret @ 0x140158AD8 (zzzInternalDestroyCaret.c)
 *     xxxScrollWindowEx @ 0x140260308 (xxxScrollWindowEx.c)
 * Callees:
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x140053DC8 (-UT_InvertCaret@@YAXXZ.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x140158894 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

void __fastcall zzzInternalHideCaret(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax

  v2 = *((_QWORD *)PtiCurrent(a1, a2) + 59);
  if ( (*(_DWORD *)(v2 + 328) & 1) != 0 )
    UT_InvertCaret();
  *(_DWORD *)(v2 + 328) &= ~1u;
  if ( ++*(_DWORD *)(v2 + 332) == 1 )
  {
    RemoveCaretTimer(*(struct tagWND **)(v2 + 320), (struct tagQ *)v2);
    UserSessionState = W32GetUserSessionState(v4, v3);
    xxxWindowEvent(0x8003u, *(struct tagWND **)(v2 + 320), -8, 0, *(_DWORD *)(UserSessionState + 70600) != 0 ? 2 : 0);
  }
}
