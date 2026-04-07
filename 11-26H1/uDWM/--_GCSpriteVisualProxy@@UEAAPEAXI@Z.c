/*
 * XREFs of ??_GCSpriteVisualProxy@@UEAAPEAXI@Z @ 0x18005C9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSpriteVisualProxy@@UEAA@XZ @ 0x18005CA0C (--1CSpriteVisualProxy@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CSpriteVisualProxy *__fastcall CSpriteVisualProxy::`scalar deleting destructor'(CSpriteVisualProxy *this, char a2)
{
  CSpriteVisualProxy::~CSpriteVisualProxy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x30);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
