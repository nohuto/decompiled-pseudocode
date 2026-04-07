/*
 * XREFs of ??_GCIconicAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B6FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CIconicAnimatedVisual@@MEAA@XZ @ 0x1800B6F30 (--1CIconicAnimatedVisual@@MEAA@XZ.c)
 */

CIconicAnimatedVisual *__fastcall CIconicAnimatedVisual::`scalar deleting destructor'(
        CIconicAnimatedVisual *this,
        char a2)
{
  CIconicAnimatedVisual::~CIconicAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x160);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
