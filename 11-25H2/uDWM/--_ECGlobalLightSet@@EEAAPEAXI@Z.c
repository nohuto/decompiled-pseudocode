/*
 * XREFs of ??_ECGlobalLightSet@@EEAAPEAXI@Z @ 0x1800B6210
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CGlobalLightSet@@EEAA@XZ @ 0x1800B60E8 (--1CGlobalLightSet@@EEAA@XZ.c)
 */

CBaseObject **__fastcall CGlobalLightSet::`vector deleting destructor'(CBaseObject **this, char a2)
{
  CGlobalLightSet::~CGlobalLightSet(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0x88);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
