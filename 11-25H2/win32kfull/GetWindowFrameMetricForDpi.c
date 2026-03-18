/*
 * XREFs of GetWindowFrameMetricForDpi @ 0x140042FB0
 * Callers:
 *     GetWindowNCMetrics @ 0x140042BB0 (GetWindowNCMetrics.c)
 *     xxxDrawCaptionBar @ 0x140044E0C (xxxDrawCaptionBar.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x140038130 (GetAppCompatFlags2.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x140042FDC (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 */

__int64 __fastcall GetWindowFrameMetricForDpi(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int AppCompatFlags2; // eax
  int v4; // ecx

  v2 = a2;
  AppCompatFlags2 = GetAppCompatFlags2(39168LL, a2);
  return GetWindowFrameMetricForDpiWithCompatFlags2(v4, v2, AppCompatFlags2);
}
