/*
 * XREFs of ??_ECAnimationComponent@@UEAAPEAXI@Z @ 0x18006B7A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x18006B7EC (--1CAnimationComponent@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CAnimationComponent *__fastcall CAnimationComponent::`vector deleting destructor'(CAnimationComponent *this, char a2)
{
  CAnimationComponent::~CAnimationComponent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0xA0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
