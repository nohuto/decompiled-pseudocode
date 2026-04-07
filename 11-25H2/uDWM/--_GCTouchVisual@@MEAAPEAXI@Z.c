/*
 * XREFs of ??_GCTouchVisual@@MEAAPEAXI@Z @ 0x1800D1460
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTouchVisual@@MEAA@XZ @ 0x18008938C (--1CTouchVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void **__fastcall CTouchVisual::`scalar deleting destructor'(void **this, char a2)
{
  CTouchVisual::~CTouchVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0x100);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
