/*
 * XREFs of ??_ECDesktopManager@@EEAAPEAXI@Z @ 0x1800AA300
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800AA010 (--1CDesktopManager@@EEAA@XZ.c)
 */

CDesktopManager *__fastcall CDesktopManager::`vector deleting destructor'(CDesktopManager *this, char a2)
{
  CDesktopManager::~CDesktopManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x500);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
