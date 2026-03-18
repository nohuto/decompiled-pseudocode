/*
 * XREFs of HintSpriteShape @ 0x140058390
 * Callers:
 *     RecreateRedirectionBitmap @ 0x140057DF8 (RecreateRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x140058298 (UnsetRedirectedWindow.c)
 *     SetRedirectedWindow @ 0x1400B4EC4 (SetRedirectedWindow.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1402876B4 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x140287A60 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x14007BB28 (-InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     GreHintSpriteShape @ 0x1400922F0 (GreHintSpriteShape.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

_BOOL8 __fastcall HintSpriteShape(HDEV a1, struct tagWND *a2, __int64 a3, int a4)
{
  int v7; // eax
  _BYTE v9[144]; // [rsp+40h] [rbp-C8h] BYREF

  memset_0(v9, 0, 0x88uLL);
  InitializeMiniWinInfo(a2, (struct tagMINIWINDOWINFO *)v9);
  v7 = IsWindowDesktopComposed(a2);
  return (unsigned int)GreHintSpriteShape(a1, a4, v7, 1) != 0;
}
