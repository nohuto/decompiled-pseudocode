/*
 * XREFs of WdipSemEnableDisableTrace @ 0x140A43AE0
 * Callers:
 *     WdipSemCaptureState @ 0x1404AF4BC (WdipSemCaptureState.c)
 *     WdipSemDisableAllProviders @ 0x140793DC0 (WdipSemDisableAllProviders.c)
 *     WdipSemEnableAllProviders @ 0x140793E74 (WdipSemEnableAllProviders.c)
 *     WdipSemEnableSemProvider @ 0x140793FAC (WdipSemEnableSemProvider.c)
 *     WdipSemDisableContextProvider @ 0x140A4346C (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140A43954 (WdipSemEnableContextProvider.c)
 * Callees:
 *     EtwEnableTrace @ 0x140A43B40 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
