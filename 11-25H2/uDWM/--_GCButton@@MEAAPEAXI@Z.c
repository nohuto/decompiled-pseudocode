/*
 * XREFs of ??_GCButton@@MEAAPEAXI@Z @ 0x18001E010
 * Callers:
 *     <none>
 * Callees:
 *     ??1CButton@@MEAA@XZ @ 0x18001D820 (--1CButton@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CTimelineBase **__fastcall CButton::`scalar deleting destructor'(CTimelineBase **this, char a2)
{
  CButton::~CButton(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0x170);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
