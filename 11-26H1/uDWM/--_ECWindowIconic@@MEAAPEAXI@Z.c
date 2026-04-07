/*
 * XREFs of ??_ECWindowIconic@@MEAAPEAXI@Z @ 0x1800071F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWindowIconic@@MEAA@XZ @ 0x1800085DC (--1CWindowIconic@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CWindowIconic *__fastcall CWindowIconic::`vector deleting destructor'(CWindowIconic *this, char a2)
{
  CWindowIconic::~CWindowIconic(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x78);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
