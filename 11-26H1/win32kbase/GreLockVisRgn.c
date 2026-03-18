/*
 * XREFs of GreLockVisRgn @ 0x140035F50
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall GreLockVisRgn(__int64 a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  GrepLockVisRgn(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88));
}
