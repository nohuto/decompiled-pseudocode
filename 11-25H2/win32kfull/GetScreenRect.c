/*
 * XREFs of GetScreenRect @ 0x14022EE5C
 * Callers:
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x14020E040 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x140237B0C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInjectTouchInput @ 0x14023D0FC (xxxInjectTouchInput.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1402DF03C (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x140090A20 (GetScreenRectForDpi.c)
 *     GetCurrentThreadCompositedDpi @ 0x140090E74 (GetCurrentThreadCompositedDpi.c)
 */

__m128i *__fastcall GetScreenRect(__m128i *a1)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi((__int64)a1);
  GetScreenRectForDpi(a1, CurrentThreadCompositedDpi);
  return a1;
}
