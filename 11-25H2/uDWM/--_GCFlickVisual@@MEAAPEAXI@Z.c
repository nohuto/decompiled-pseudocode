/*
 * XREFs of ??_GCFlickVisual@@MEAAPEAXI@Z @ 0x1800B53E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x1800B535C (--1CFlickVisual@@MEAA@XZ.c)
 */

CFlickVisual *__fastcall CFlickVisual::`scalar deleting destructor'(CFlickVisual *this, char a2)
{
  CFlickVisual::~CFlickVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x140);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
