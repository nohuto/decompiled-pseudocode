/*
 * XREFs of ??_GCWindowBorder@@UEAAPEAXI@Z @ 0x18003D6C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWindowBorder@@UEAA@XZ @ 0x18003D70C (--1CWindowBorder@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CWindowBorder *__fastcall CWindowBorder::`scalar deleting destructor'(CWindowBorder *this, char a2)
{
  CWindowBorder::~CWindowBorder(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x130);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
