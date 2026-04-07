/*
 * XREFs of ??_GCImage@@UEAAPEAXI@Z @ 0x180006200
 * Callers:
 *     <none>
 * Callees:
 *     ??1CButtonGlyph@@MEAA@XZ @ 0x18000629C (--1CButtonGlyph@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CImage *__fastcall CImage::`scalar deleting destructor'(CImage *this, char a2)
{
  CButtonGlyph::~CButtonGlyph(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0xF0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
