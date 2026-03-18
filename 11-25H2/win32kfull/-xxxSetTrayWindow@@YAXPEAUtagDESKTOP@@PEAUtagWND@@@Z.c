/*
 * XREFs of ?xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z @ 0x140023234
 * Callers:
 *     _anonymous_namespace_::xxxUpdateTray @ 0x1400232D8 (_anonymous_namespace_--xxxUpdateTray.c)
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400216D0 (PostShellHookMessagesEx.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

void __fastcall xxxSetTrayWindow(struct tagDESKTOP *a1, struct tagWND *a2)
{
  unsigned __int64 v2; // rdi
  struct tagTHREADINFO *v3; // rbx

  if ( a2 )
    v2 = *(_QWORD *)a2;
  else
    v2 = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)a1 + 1) + 184LL) )
    PostShellHookMessagesEx((LastWokenThread *)4, v2);
  v3 = PtiCurrent();
  if ( ((*((_DWORD *)v3 + 180) | *(_DWORD *)(**((_QWORD **)PtiCurrent() + 63) + 16LL)) & 0x800) != 0 )
    xxxCallHook(4, v2, 0LL, 10);
}
