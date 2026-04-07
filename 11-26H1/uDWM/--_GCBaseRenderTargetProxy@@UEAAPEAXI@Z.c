/*
 * XREFs of ??_GCBaseRenderTargetProxy@@UEAAPEAXI@Z @ 0x18009A3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CResourceProxy@@MEAA@XZ @ 0x180084E68 (--1CResourceProxy@@MEAA@XZ.c)
 */

CBaseRenderTargetProxy *__fastcall CBaseRenderTargetProxy::`scalar deleting destructor'(
        CBaseRenderTargetProxy *this,
        char a2)
{
  CResourceProxy::~CResourceProxy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x20);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
