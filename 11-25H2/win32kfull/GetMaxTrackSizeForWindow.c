/*
 * XREFs of GetMaxTrackSizeForWindow @ 0x14004B09C
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14004A6D4 (xxxInitSendValidateMinMaxInfoEx.c)
 * Callees:
 *     ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x14004C0B4 (-ComputeMaxTrackSize@@YA-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     GetScreenRectForDpi @ 0x140090A20 (GetScreenRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140091370 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1401CB648 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 */

struct tagSIZE __fastcall GetMaxTrackSizeForWindow(struct tagWND *a1)
{
  unsigned __int16 WindowCompositedDpi; // bx
  unsigned int WindowCompositedDpiContext; // eax
  struct tagRECT v5; // [rsp+20h] [rbp-18h] BYREF

  WindowCompositedDpi = GetWindowCompositedDpi(a1);
  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a1);
  GetScreenRectForDpi(&v5, (WindowCompositedDpiContext >> 8) & 0x1FF);
  if ( !WindowCompositedDpi )
    WindowCompositedDpi = *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
  return ComputeMaxTrackSize(&v5, WindowCompositedDpi);
}
