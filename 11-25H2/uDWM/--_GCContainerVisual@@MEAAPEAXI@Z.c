/*
 * XREFs of ??_GCContainerVisual@@MEAAPEAXI@Z @ 0x180014010
 * Callers:
 *     <none>
 * Callees:
 *     ??1CContainerVisual@@MEAA@XZ @ 0x1800140AC (--1CContainerVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CContainerVisual *__fastcall CContainerVisual::`scalar deleting destructor'(CContainerVisual *this, char a2)
{
  CContainerVisual::~CContainerVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0xC8);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
