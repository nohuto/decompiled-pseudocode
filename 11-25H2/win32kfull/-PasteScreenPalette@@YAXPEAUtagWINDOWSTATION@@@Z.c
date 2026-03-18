/*
 * XREFs of ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1402B3BAC
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x140111248 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x140111CEC (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     CreateScreenPalette @ 0x1402DD220 (CreateScreenPalette.c)
 */

void __fastcall PasteScreenPalette(struct tagWINDOWSTATION *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( (int)CreateScreenPalette(*(HDC *)(*(_QWORD *)(UserSessionState + 56968) + 64LL)) >= 0 )
  {
    InternalSetClipboardData(a1, 9u, 0LL, 0, 1);
    GreSetPaletteOwner(0LL, 0LL);
    Win32FreePool(0LL);
  }
}
