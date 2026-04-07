/*
 * XREFs of ?HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x1800202C0
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180011D38 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x180012098 (-UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x180020210 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z @ 0x1800205F8 (-GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z.c)
 *     ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x180020704 (-GetEffectiveCornerStyle@CTopLevelWindow@@AEAA-AW4CORNER_STYLE@@XZ.c)
 *     ?GetTitlebarHeight@CTopLevelWindow@@AEBAHXZ @ 0x18004BE8C (-GetTitlebarHeight@CTopLevelWindow@@AEBAHXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CTopLevelWindow::HasThinRenderedBorder(char a1)
{
  return (a1 & 2) != 0;
}
