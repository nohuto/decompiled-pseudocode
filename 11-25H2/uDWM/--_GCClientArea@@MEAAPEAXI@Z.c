/*
 * XREFs of ??_GCClientArea@@MEAAPEAXI@Z @ 0x18006FFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CClientArea@@MEAA@XZ @ 0x18006FFFC (--1CClientArea@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CClientArea *__fastcall CClientArea::`scalar deleting destructor'(CClientArea *this, char a2)
{
  CClientArea::~CClientArea(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x98);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
