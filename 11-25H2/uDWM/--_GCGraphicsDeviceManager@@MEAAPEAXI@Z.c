/*
 * XREFs of ??_GCGraphicsDeviceManager@@MEAAPEAXI@Z @ 0x1800B6430
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CGraphicsDeviceManager@@MEAA@XZ @ 0x1800B6384 (--1CGraphicsDeviceManager@@MEAA@XZ.c)
 */

CGraphicsDeviceManager *__fastcall CGraphicsDeviceManager::`scalar deleting destructor'(
        CGraphicsDeviceManager *this,
        char a2)
{
  CGraphicsDeviceManager::~CGraphicsDeviceManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x68);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
