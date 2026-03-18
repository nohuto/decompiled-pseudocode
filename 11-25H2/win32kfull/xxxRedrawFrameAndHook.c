/*
 * XREFs of xxxRedrawFrameAndHook @ 0x14021EE48
 * Callers:
 *     NtUserRedrawFrameAndHook @ 0x14024C0E0 (NtUserRedrawFrameAndHook.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400216D0 (PostShellHookMessagesEx.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxRedrawFrameAndHook(struct tagWND *a1)
{
  __int64 v2; // rbx

  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  if ( IsTrayWindow(a1, 1LL) )
  {
    v2 = *(_QWORD *)a1;
    xxxCallHook(6LL, v2, 0LL, 10);
    PostShellHookMessagesEx((LastWokenThread *)6, v2);
  }
  return 1LL;
}
