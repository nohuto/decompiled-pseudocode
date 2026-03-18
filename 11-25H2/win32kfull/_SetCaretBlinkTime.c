/*
 * XREFs of _SetCaretBlinkTime @ 0x14005EE60
 * Callers:
 *     NtUserSetCaretBlinkTime @ 0x14005EE20 (NtUserSetCaretBlinkTime.c)
 *     xxxUpdatePerUserSystemParameters @ 0x140212E60 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     CheckWinstaAttributeAccess @ 0x14005FF00 (CheckWinstaAttributeAccess.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x140158894 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1401588D8 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 */

__int64 __fastcall SetCaretBlinkTime(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rbx

  if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u) || (unsigned int)CheckDesktopPolicy(0LL, 4LL) )
    return 0LL;
  v4 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19872);
  *(_DWORD *)(v4 + 4984) = a1;
  v6 = PtiCurrent(v4, v5);
  v7 = *((_QWORD *)v6 + 59);
  if ( *(_QWORD *)(v7 + 368) )
  {
    RemoveCaretTimer(*(struct tagWND **)(v7 + 320), *((struct tagQ **)v6 + 59));
    CreateCaretTimer(*(struct tagWND **)(v7 + 320), (struct tagQ *)v7);
  }
  return 1LL;
}
