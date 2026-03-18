/*
 * XREFs of ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1402876B4
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x14005335C (zzzUpdateLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x140063BF8 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     GetRedirectionFlags @ 0x140053D08 (GetRedirectionFlags.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1400580E8 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     HintSpriteShape @ 0x140058390 (HintSpriteShape.c)
 *     ChangeRedirectionParentInDCEs @ 0x140058438 (ChangeRedirectionParentInDCEs.c)
 */

__int64 __fastcall RestoreOldRedirectionBitmap(struct tagWND *a1, HBITMAP a2)
{
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax

  v5 = SetRedirectionBitmap(a1, a2, 0);
  if ( v5 )
  {
    if ( (GetRedirectionFlags((__int64)a1, v4) & 1) != 0 )
    {
      UserSessionState = W32GetUserSessionState(v7, v6);
      HintSpriteShape(*(HDEV *)(*(_QWORD *)(UserSessionState + 56968) + 48LL), a1, (__int64)a2, 1);
    }
    ChangeRedirectionParentInDCEs((__int64)a1, 1LL);
  }
  return v5;
}
