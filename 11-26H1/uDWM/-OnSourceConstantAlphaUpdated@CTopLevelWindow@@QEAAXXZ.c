/*
 * XREFs of ?OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180013E68
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C3A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18004E650 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008B8B8 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x180068984 (-Unhide@CVisual@@QEAAXXZ.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x180078960 (-Hide@CVisual@@QEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::OnSourceConstantAlphaUpdated(CTopLevelWindow *this)
{
  __int64 v1; // rdx
  double v3; // xmm6_8
  char v4; // al

  v1 = *((_QWORD *)this + 87);
  v3 = (double)*(unsigned __int8 *)(v1 + 408) / 255.0;
  if ( (*(_BYTE *)(v1 + 740) & 2) == 0 )
    goto LABEL_5;
  v4 = *((_BYTE *)this + 185) & 0x20;
  if ( v3 > 0.0 )
  {
    if ( v4 )
    {
      CVisual::Unhide(this);
      *((_BYTE *)this + 185) &= ~0x20u;
    }
LABEL_5:
    CVisual::SetOpacity(this, v3);
    return;
  }
  if ( !v4 )
  {
    CVisual::SetOpacity(this, 1.0);
    CVisual::Hide(this);
    *((_BYTE *)this + 185) |= 0x20u;
  }
}
