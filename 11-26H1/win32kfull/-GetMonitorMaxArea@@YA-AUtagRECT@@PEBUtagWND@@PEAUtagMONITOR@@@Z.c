/*
 * XREFs of ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1401E02A0
 * Callers:
 *     ?Update@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x1400312B0 (-Update@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140031410 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     ?_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1401E0304 (-_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

__m128i *__fastcall GetMonitorMaxArea(__m128i *__return_ptr retstr, const struct tagWND *a2, struct tagMONITOR *a3)
{
  const struct tagWND *v5; // rbx
  struct tagWND *v6; // rax
  unsigned int WindowCompositedDpiContext; // eax

  v5 = a2;
  v6 = _HungWindowFromGhostWindow(a2);
  if ( v6 )
    v5 = v6;
  WindowCompositedDpiContext = GetWindowCompositedDpiContext(v5);
  GetMonitorRectForDpi(retstr, (__int64)a3, (WindowCompositedDpiContext >> 8) & 0x1FF);
  return retstr;
}
