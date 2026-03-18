/*
 * XREFs of GetWindowBorders @ 0x140044DD8
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x14003EE4C (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x140044E0C (xxxDrawCaptionBar.c)
 *     xxxDrawWindowFrame @ 0x14025CE6C (xxxDrawWindowFrame.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402DF124 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     xxxHelpLoop @ 0x1402EB044 (xxxHelpLoop.c)
 * Callees:
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetWindowBordersForDpi @ 0x14004B870 (GetWindowBordersForDpi.c)
 */

__int64 __fastcall GetWindowBorders(int a1, int a2)
{
  int DpiForSystem; // eax
  int v5; // r8d
  int v6; // r9d

  DpiForSystem = GetDpiForSystem();
  return GetWindowBordersForDpi(a1, a2, v5, v6, DpiForSystem);
}
