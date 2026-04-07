/*
 * XREFs of ??_GCAccent@@MEAAPEAXI@Z @ 0x180063B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAccent@@MEAA@XZ @ 0x180063B6C (--1CAccent@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CAccent *__fastcall CAccent::`scalar deleting destructor'(CAccent *this, char a2)
{
  CAccent::~CAccent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x1F8);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
