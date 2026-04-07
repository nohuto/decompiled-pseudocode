/*
 * XREFs of ??_GWindowFrame@CTopLevelWindow@@UEAAPEAXI@Z @ 0x1800706D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowFrame@CTopLevelWindow@@UEAA@XZ @ 0x18007071C (--1WindowFrame@CTopLevelWindow@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CTopLevelWindow::WindowFrame *__fastcall CTopLevelWindow::WindowFrame::`scalar deleting destructor'(
        CTopLevelWindow::WindowFrame *this,
        char a2)
{
  CTopLevelWindow::WindowFrame::~WindowFrame(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x748);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
