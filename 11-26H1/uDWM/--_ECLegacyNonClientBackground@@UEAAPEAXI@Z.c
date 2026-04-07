/*
 * XREFs of ??_ECLegacyNonClientBackground@@UEAAPEAXI@Z @ 0x18006ED60
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CLegacyNonClientBackground@@UEAA@XZ @ 0x18008D204 (--1CLegacyNonClientBackground@@UEAA@XZ.c)
 */

CLegacyNonClientBackground *__fastcall CLegacyNonClientBackground::`vector deleting destructor'(
        CLegacyNonClientBackground *this,
        char a2)
{
  CLegacyNonClientBackground::~CLegacyNonClientBackground(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x110);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
