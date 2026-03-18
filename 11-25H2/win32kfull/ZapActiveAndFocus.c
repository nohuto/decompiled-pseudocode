/*
 * XREFs of ZapActiveAndFocus @ 0x1402224CC
 * Callers:
 *     NtUserZapActiveAndFocus @ 0x140222490 (NtUserZapActiveAndFocus.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzInputFocusLostWindowEvent @ 0x140245038 (zzzInputFocusLostWindowEvent.c)
 */

__int64 __fastcall ZapActiveAndFocus(__int64 a1, __int64 a2)
{
  tagQ *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagWND *v5; // rdi

  v2 = (tagQ *)*((_QWORD *)PtiCurrent(a1, a2) + 59);
  tagQ::SetActiveWindow(v2, 0LL);
  v5 = tagQ::UnlockFocusWnd(v2);
  if ( v5 && v2 == *(tagQ **)(W32GetUserSessionState(v4, v3) + 18888) )
    zzzInputFocusLostWindowEvent(v5, 11LL);
  return 1LL;
}
