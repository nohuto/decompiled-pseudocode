/*
 * XREFs of ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x140293FB4
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1400421A8 (zzzUpdateLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1401ED678 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     GetRedirectionFlags @ 0x140042B14 (GetRedirectionFlags.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1400A487C (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     HintSpriteShape @ 0x1400A5198 (HintSpriteShape.c)
 *     ChangeRedirectionParentInDCEs @ 0x14012DB84 (ChangeRedirectionParentInDCEs.c)
 */

__int64 __fastcall RestoreOldRedirectionBitmap(struct tagWND *a1, HBITMAP a2)
{
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 UserSessionState; // rax

  v5 = SetRedirectionBitmap(a1, a2, 0);
  if ( v5 )
  {
    if ( (GetRedirectionFlags((__int64)a1, v4) & 1) != 0 )
    {
      UserSessionState = W32GetUserSessionState(v7, v6);
      HintSpriteShape(*(HDEV *)(*(_QWORD *)(UserSessionState + 56968) + 40LL), a1, (__int64)a2, 1);
    }
    ChangeRedirectionParentInDCEs((__int64)a1, 1LL, v8);
  }
  return v5;
}
