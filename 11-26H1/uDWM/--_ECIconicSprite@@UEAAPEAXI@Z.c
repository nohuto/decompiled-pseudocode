/*
 * XREFs of ??_ECIconicSprite@@UEAAPEAXI@Z @ 0x180077AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CContainerVisual@@MEAA@XZ @ 0x18001BAC0 (--1CContainerVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CIconicSprite *__fastcall CIconicSprite::`vector deleting destructor'(CIconicSprite *this, char a2)
{
  CContainerVisual::~CContainerVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0xB8);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
