/*
 * XREFs of ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1402CE6D4
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401B19BC (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1401B1E8C (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     CreateScreenPalette @ 0x1402EF664 (CreateScreenPalette.c)
 */

void __fastcall PasteScreenPalette(struct tagWINDOWSTATION *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( (int)CreateScreenPalette(*(HDC *)(*(_QWORD *)(UserSessionState + 56968) + 56LL)) >= 0 )
  {
    InternalSetClipboardData(a1, 9u, 0LL, 0, 1);
    GreSetPaletteOwner(0LL, 0LL);
    Win32FreePool(0LL);
  }
}
