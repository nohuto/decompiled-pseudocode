/*
 * XREFs of xxxFlushPalette @ 0x1402BE7C0
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256AE8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     GreRealizeDefaultPalette @ 0x1401ED05C (GreRealizeDefaultPalette.c)
 *     xxxBroadcastPaletteChanged @ 0x1402BE754 (xxxBroadcastPaletteChanged.c)
 */

__int64 __fastcall xxxFlushPalette(unsigned __int64 *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  GreRealizeDefaultPalette(*(Gre::Base **)(*(_QWORD *)(UserSessionState + 56968) + 64LL));
  return xxxBroadcastPaletteChanged(a1);
}
