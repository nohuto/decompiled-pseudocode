/*
 * XREFs of ??_GCMagnifier@@EEAAPEAXI@Z @ 0x1800BA5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CMagnifier@@EEAA@XZ @ 0x1800BA534 (--1CMagnifier@@EEAA@XZ.c)
 */

CMagnifier *__fastcall CMagnifier::`scalar deleting destructor'(CMagnifier *this, char a2)
{
  CMagnifier::~CMagnifier(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x178);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
