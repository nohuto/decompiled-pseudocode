/*
 * XREFs of ??_ECBorderSprite@@UEAAPEAXI@Z @ 0x180071B70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBorderSprite@@UEAA@XZ @ 0x180071BBC (--1CBorderSprite@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CBorderSprite *__fastcall CBorderSprite::`vector deleting destructor'(CBorderSprite *this, char a2)
{
  CBorderSprite::~CBorderSprite(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0xE0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
