/*
 * XREFs of ??_GCGraphicsDeviceManager@@MEAAPEAXI@Z @ 0x1800B5E60
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CGraphicsDeviceManager@@MEAA@XZ @ 0x1800B5D84 (--1CGraphicsDeviceManager@@MEAA@XZ.c)
 */

CGraphicsDeviceManager *__fastcall CGraphicsDeviceManager::`scalar deleting destructor'(
        CGraphicsDeviceManager *this,
        char a2)
{
  CGraphicsDeviceManager::~CGraphicsDeviceManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x80);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
