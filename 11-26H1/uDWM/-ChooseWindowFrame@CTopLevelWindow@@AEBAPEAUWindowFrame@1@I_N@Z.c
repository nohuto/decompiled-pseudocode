/*
 * XREFs of ?ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z @ 0x1800201E0
 * Callers:
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x1800106AC (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001F4A0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18004BB94 (-GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x1800CB5FC (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     <none>
 */

struct CTopLevelWindow::WindowFrame *__fastcall CTopLevelWindow::ChooseWindowFrame(
        CTopLevelWindow *this,
        unsigned int a2,
        bool a3)
{
  return CTopLevelWindow::s_ChooseWindowFrameFromStyle(a2, a3, (*(_BYTE *)(*((_QWORD *)this + 87) + 739LL) & 0x10) != 0);
}
