/*
 * XREFs of GetScreenRectForWindow @ 0x1401DC898
 * Callers:
 *     CheckFullScreen @ 0x140236038 (CheckFullScreen.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1402507C4 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x140090A20 (GetScreenRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140091370 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 */

__m128i *__fastcall GetScreenRectForWindow(__m128i *a1, const struct tagWND *a2)
{
  unsigned int WindowCompositedDpiContext; // eax

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a2);
  GetScreenRectForDpi(a1, (WindowCompositedDpiContext >> 8) & 0x1FF);
  return a1;
}
