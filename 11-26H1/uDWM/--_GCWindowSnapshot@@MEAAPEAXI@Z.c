/*
 * XREFs of ??_GCWindowSnapshot@@MEAAPEAXI@Z @ 0x18006A300
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x180082224 (--1CWindowSnapshot@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CWindowSnapshot *__fastcall CWindowSnapshot::`scalar deleting destructor'(CWindowSnapshot *this, char a2)
{
  CWindowSnapshot::~CWindowSnapshot(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x50);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
