/*
 * XREFs of ??_ECWindowList@@UEAAPEAXI@Z @ 0x1800AC410
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800AC090 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x1800E2728 (--1CWindowList@@UEAA@XZ.c)
 */

CWindowList *__fastcall CWindowList::`vector deleting destructor'(CWindowList *this, char a2)
{
  CWindowList::~CWindowList(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x2C0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
