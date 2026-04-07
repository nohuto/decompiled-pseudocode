/*
 * XREFs of ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x1800202D0
 * Callers:
 *     ?UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z @ 0x180016500 (-UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z.c)
 *     ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x18001F0C0 (-CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x180020210 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x180020704 (-GetEffectiveCornerStyle@CTopLevelWindow@@AEAA-AW4CORNER_STYLE@@XZ.c)
 *     ?GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA?AW4SYSTEMBACKDROP_TYPE@@XZ @ 0x180020860 (-GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA-AW4SYSTEMBACKDROP_TYPE@@XZ.c)
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z @ 0x18002165C (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z.c)
 *     ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x180021BF4 (-GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x1800CADB4 (-ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z.c)
 * Callees:
 *     IsOpenThemeDataPresent @ 0x18008F41C (IsOpenThemeDataPresent.c)
 */

bool __fastcall CTopLevelWindow::HasRenderedBorder(char a1)
{
  return (unsigned __int8)IsOpenThemeDataPresent() && (a1 & 6) != 0;
}
