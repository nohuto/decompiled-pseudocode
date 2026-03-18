/*
 * XREFs of GreUnlockVisRgn @ 0x140179DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B7CC (-GrepUnlockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall GreUnlockVisRgn(__int64 a1)
{
  __int64 SessionState; // rax
  __int64 v2; // rdx
  int v3; // r8d

  SessionState = W32GetSessionState(a1);
  GrepUnlockVisRgn(*(struct _ERESOURCE ***)(SessionState + 88), v2, v3);
}
