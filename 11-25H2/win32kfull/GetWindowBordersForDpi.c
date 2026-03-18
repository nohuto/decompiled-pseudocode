/*
 * XREFs of GetWindowBordersForDpi @ 0x14004B870
 * Callers:
 *     xxxMNRecomputeBarIfNeeded @ 0x14003DA44 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxMNFindWindowFromPoint @ 0x14004476C (xxxMNFindWindowFromPoint.c)
 *     GetWindowBorders @ 0x140044DD8 (GetWindowBorders.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x14004B5EC (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxCalcCaptionButton @ 0x140118DE4 (xxxCalcCaptionButton.c)
 *     xxxGetMenuBarInfo @ 0x1401BC1C0 (xxxGetMenuBarInfo.c)
 *     FindNCHit @ 0x1401D7FEC (FindNCHit.c)
 *     MNPositionSysMenu @ 0x140209594 (MNPositionSysMenu.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x140038130 (GetAppCompatFlags2.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x140049D18 (GetWindowBordersForDpiWithCompatFlags2.c)
 */

__int64 __fastcall GetWindowBordersForDpi(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v6; // ebx
  unsigned int AppCompatFlags2; // eax
  __int64 v8; // r8

  v6 = a2;
  AppCompatFlags2 = GetAppCompatFlags2(39168LL, a2);
  return GetWindowBordersForDpiWithCompatFlags2(a1, v6, v8, 0, a5, AppCompatFlags2);
}
