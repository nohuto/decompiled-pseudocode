/*
 * XREFs of ??_ECLivePreviewTimeline@@UEAAPEAXI@Z @ 0x18007E630
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLivePreviewTimeline@@UEAA@XZ @ 0x18007E67C (--1CLivePreviewTimeline@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CLivePreviewTimeline *__fastcall CLivePreviewTimeline::`vector deleting destructor'(
        CLivePreviewTimeline *this,
        char a2)
{
  CLivePreviewTimeline::~CLivePreviewTimeline(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x88);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
