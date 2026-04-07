/*
 * XREFs of ??_ECDisplayAnimatedVisual@@MEAAPEAXI@Z @ 0x1800AEA40
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDisplayAnimatedVisual@@MEAA@XZ @ 0x1800AE90C (--1CDisplayAnimatedVisual@@MEAA@XZ.c)
 */

CDisplayAnimatedVisual *__fastcall CDisplayAnimatedVisual::`vector deleting destructor'(
        CDisplayAnimatedVisual *this,
        char a2)
{
  CDisplayAnimatedVisual::~CDisplayAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x168);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
