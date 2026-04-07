/*
 * XREFs of ??_E?$CTimeline@M@@UEAAPEAXI@Z @ 0x180070160
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTimelineBase@@UEAA@XZ @ 0x1800701AC (--1CTimelineBase@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CTimelineBase *__fastcall CTimeline<float>::`vector deleting destructor'(CTimelineBase *lpMem, char a2)
{
  CTimelineBase::~CTimelineBase(lpMem);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(lpMem, (const struct CSecondaryWindowRepresentation *)0x78);
    else
      DefaultHeap::Free(lpMem);
  }
  return lpMem;
}
