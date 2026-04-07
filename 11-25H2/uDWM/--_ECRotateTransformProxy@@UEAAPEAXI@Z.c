/*
 * XREFs of ??_ECRotateTransformProxy@@UEAAPEAXI@Z @ 0x180007400
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceProxy@@MEAA@XZ @ 0x180008674 (--1CResourceProxy@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CRotateTransformProxy *__fastcall CRotateTransformProxy::`vector deleting destructor'(
        CRotateTransformProxy *this,
        char a2)
{
  CResourceProxy::~CResourceProxy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x18);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
