/*
 * XREFs of ??_GCProjectionBorderVisual@@UEAAPEAXI@Z @ 0x18009E650
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CProjectionBorderVisual@@UEAA@XZ @ 0x18009E45C (--1CProjectionBorderVisual@@UEAA@XZ.c)
 */

CBaseObject **__fastcall CProjectionBorderVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CProjectionBorderVisual::~CProjectionBorderVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0xE0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
