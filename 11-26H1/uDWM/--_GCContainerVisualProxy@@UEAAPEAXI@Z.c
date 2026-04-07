/*
 * XREFs of ??_GCContainerVisualProxy@@UEAAPEAXI@Z @ 0x18005CA40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualProxy@@UEAA@XZ @ 0x18005CA8C (--1CVisualProxy@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CContainerVisualProxy *__fastcall CContainerVisualProxy::`scalar deleting destructor'(
        CContainerVisualProxy *this,
        char a2)
{
  CVisualProxy::~CVisualProxy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x28);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
