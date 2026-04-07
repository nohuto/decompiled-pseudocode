/*
 * XREFs of ?HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18000E1B8
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18000C8B0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z @ 0x18000CC24 (-GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18000E120 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x18000F8BC (-GetEffectiveCornerStyle@CTopLevelWindow@@AEAA-AW4CORNER_STYLE@@XZ.c)
 *     ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x18006AF70 (-UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z.c)
 *     ?GetTitlebarHeight@CTopLevelWindow@@AEBAHXZ @ 0x180078F4C (-GetTitlebarHeight@CTopLevelWindow@@AEBAHXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::HasThinRenderedBorder(char a1)
{
  return (a1 & 2) != 0;
}
