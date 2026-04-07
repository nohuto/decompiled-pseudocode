/*
 * XREFs of ??_GCIndirectTouchVisual@@MEAAPEAXI@Z @ 0x1800B92F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x1800B9260 (--1CIndirectTouchVisual@@MEAA@XZ.c)
 */

void **__fastcall CIndirectTouchVisual::`scalar deleting destructor'(void **this, char a2)
{
  CIndirectTouchVisual::~CIndirectTouchVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0x180);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
