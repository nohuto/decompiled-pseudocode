/*
 * XREFs of WdipSemEnableDisableTrace @ 0x140AD65E0
 * Callers:
 *     WdipSemCaptureState @ 0x1404DC660 (WdipSemCaptureState.c)
 *     WdipSemDisableAllProviders @ 0x1408279C0 (WdipSemDisableAllProviders.c)
 *     WdipSemEnableAllProviders @ 0x140827A80 (WdipSemEnableAllProviders.c)
 *     WdipSemEnableSemProvider @ 0x140827BB8 (WdipSemEnableSemProvider.c)
 *     WdipSemDisableContextProvider @ 0x140AD6238 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140AD643C (WdipSemEnableContextProvider.c)
 * Callees:
 *     EtwEnableTrace @ 0x140AD6640 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(__int16 a1, __int64 a2, char a3, __int64 a4, int a5)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
