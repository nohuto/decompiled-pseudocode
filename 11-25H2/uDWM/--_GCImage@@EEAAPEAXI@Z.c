/*
 * XREFs of ??_GCImage@@EEAAPEAXI@Z @ 0x180079A90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImage@@EEAA@XZ @ 0x180079ADC (--1CImage@@EEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CImage *__fastcall CImage::`scalar deleting destructor'(CImage *this, char a2)
{
  CImage::~CImage(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x100);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
