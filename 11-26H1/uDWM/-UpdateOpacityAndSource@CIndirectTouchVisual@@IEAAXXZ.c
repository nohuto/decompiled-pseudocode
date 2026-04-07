/*
 * XREFs of ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x1800B8A98
 * Callers:
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800B8250 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B848C (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B85E8 (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B8738 (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x1800B8AF0 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 */

void __fastcall CIndirectTouchVisual::UpdateOpacityAndSource(CImage **this, __int64 a2, __int64 a3)
{
  CVisual::SetOpacity((CVisual *)this, *((float *)this + 67), a3);
  CImage::SetBitmapSource(this[38], *((struct CBitmapSource **)this[39] + *((unsigned int *)this + 68)));
}
