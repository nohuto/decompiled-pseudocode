/*
 * XREFs of ??_ECMicaSystemBackdropVisual@@UEAAPEAXI@Z @ 0x180058790
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemBackdropVisual@@UEAA@XZ @ 0x1800587DC (--1CSystemBackdropVisual@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CMicaSystemBackdropVisual *__fastcall CMicaSystemBackdropVisual::`vector deleting destructor'(
        CMicaSystemBackdropVisual *this,
        char a2)
{
  CSystemBackdropVisual::~CSystemBackdropVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0xE0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
