/*
 * XREFs of ??_GCCompositor@@MEAAPEAXI@Z @ 0x1800A9E2C
 * Callers:
 *     ??_ECCompositor@@O7EAAPEAXI@Z @ 0x1800A9DD0 (--_ECCompositor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CCompositor@@MEAA@XZ @ 0x1800A9D70 (--1CCompositor@@MEAA@XZ.c)
 */

CCompositor *__fastcall CCompositor::`scalar deleting destructor'(CCompositor *this, char a2)
{
  CCompositor::~CCompositor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x30);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
