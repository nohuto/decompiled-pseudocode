/*
 * XREFs of ??_GCAccentAcrylicBlurBehind@@EEAAPEAXI@Z @ 0x1800382A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x1800382EC (--1CAccentAcrylicBlurBehind@@EEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CAccentAcrylicBlurBehind *__fastcall CAccentAcrylicBlurBehind::`scalar deleting destructor'(
        CAccentAcrylicBlurBehind *this,
        char a2)
{
  CAccentAcrylicBlurBehind::~CAccentAcrylicBlurBehind(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x158);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
