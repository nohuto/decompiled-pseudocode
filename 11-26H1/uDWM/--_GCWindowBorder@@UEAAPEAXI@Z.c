/*
 * XREFs of ??_GCWindowBorder@@UEAAPEAXI@Z @ 0x18005DC70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWindowBorder@@UEAA@XZ @ 0x18005DCBC (--1CWindowBorder@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CWindowBorder *__fastcall CWindowBorder::`scalar deleting destructor'(CWindowBorder *this, char a2)
{
  CWindowBorder::~CWindowBorder(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x118);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
