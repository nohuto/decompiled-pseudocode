/*
 * XREFs of ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18000E1D0
 * Callers:
 *     ?UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z @ 0x18000B980 (-UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18000D460 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x18000DF90 (-CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18000E120 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA?AW4SYSTEMBACKDROP_TYPE@@XZ @ 0x18000F870 (-GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA-AW4SYSTEMBACKDROP_TYPE@@XZ.c)
 *     ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x18000F8BC (-GetEffectiveCornerStyle@CTopLevelWindow@@AEAA-AW4CORNER_STYLE@@XZ.c)
 *     ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x180017C40 (-GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z.c)
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z @ 0x1800658CC (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z.c)
 *     ?ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x1800CFA40 (-ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z.c)
 * Callees:
 *     IsOpenThemeDataPresent @ 0x18009BCE0 (IsOpenThemeDataPresent.c)
 */

bool __fastcall CTopLevelWindow::HasRenderedBorder(char a1)
{
  return (unsigned __int8)IsOpenThemeDataPresent() && (a1 & 6) != 0;
}
