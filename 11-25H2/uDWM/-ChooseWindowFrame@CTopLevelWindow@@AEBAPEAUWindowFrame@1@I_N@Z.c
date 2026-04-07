/*
 * XREFs of ?ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z @ 0x18000E864
 * Callers:
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x18000CD30 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18000D460 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18000E520 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x180012FE4 (-GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x1800D00CC (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     <none>
 */

struct CTopLevelWindow::WindowFrame *__fastcall CTopLevelWindow::ChooseWindowFrame(
        CTopLevelWindow *this,
        unsigned int a2,
        char a3)
{
  return CTopLevelWindow::s_ChooseWindowFrameFromStyle(a2, a3, (*(_BYTE *)(*((_QWORD *)this + 89) + 675LL) & 0x10) != 0);
}
