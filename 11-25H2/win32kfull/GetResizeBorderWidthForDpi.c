/*
 * XREFs of GetResizeBorderWidthForDpi @ 0x140042EEC
 * Callers:
 *     GetWindowNCMetrics @ 0x140042BB0 (GetWindowNCMetrics.c)
 *     xxxDrawCaptionBar @ 0x140044E0C (xxxDrawCaptionBar.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x140038130 (GetAppCompatFlags2.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x140049E90 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 */

__int64 __fastcall GetResizeBorderWidthForDpi(unsigned int a1, __int64 a2)
{
  unsigned int AppCompatFlags2; // eax

  AppCompatFlags2 = GetAppCompatFlags2(39168LL, a2);
  return GetResizeBorderWidthForDpiWithAppCompat2(a1, AppCompatFlags2);
}
