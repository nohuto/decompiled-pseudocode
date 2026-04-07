/*
 * XREFs of ??_GCDirectTouchVisual@@MEAAPEAXI@Z @ 0x180005CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDirectTouchVisual@@MEAA@XZ @ 0x180005D1C (--1CDirectTouchVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CDirectTouchVisual *__fastcall CDirectTouchVisual::`scalar deleting destructor'(CDirectTouchVisual *this, char a2)
{
  CDirectTouchVisual::~CDirectTouchVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x160);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
