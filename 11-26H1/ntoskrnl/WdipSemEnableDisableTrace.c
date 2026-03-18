/*
 * XREFs of WdipSemEnableDisableTrace @ 0x140AD9B30
 * Callers:
 *     WdipSemCaptureState @ 0x1404E2FEC (WdipSemCaptureState.c)
 *     WdipSemDisableAllProviders @ 0x1408217B0 (WdipSemDisableAllProviders.c)
 *     WdipSemEnableAllProviders @ 0x140821870 (WdipSemEnableAllProviders.c)
 *     WdipSemEnableSemProvider @ 0x1408219A8 (WdipSemEnableSemProvider.c)
 *     WdipSemDisableContextProvider @ 0x140AD9788 (WdipSemDisableContextProvider.c)
 *     WdipSemEnableContextProvider @ 0x140AD998C (WdipSemEnableContextProvider.c)
 * Callees:
 *     EtwEnableTrace @ 0x140AD9B90 (EtwEnableTrace.c)
 */

__int64 __fastcall WdipSemEnableDisableTrace(__int16 a1, __int64 a2, char a3, __int64 a4, int a5)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
