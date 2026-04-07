/*
 * XREFs of floorf @ 0x18009B6C4
 * Callers:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18000EAE0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     PacksRGBColor @ 0x18000F100 (PacksRGBColor.c)
 *     sRGBColorToscRGBColor @ 0x18000F260 (sRGBColorToscRGBColor.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180017004 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?CreateTextBrush@CDWriteText@@IEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x18003A0DC (-CreateTextBrush@CDWriteText@@IEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18006BF90 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     DwmpCalculateColorizationColor @ 0x180073304 (DwmpCalculateColorizationColor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf(float X)
{
  return __imp_floorf(X);
}
