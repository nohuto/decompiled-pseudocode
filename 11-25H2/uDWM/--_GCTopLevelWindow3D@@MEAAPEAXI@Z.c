/*
 * XREFs of ??_GCTopLevelWindow3D@@MEAAPEAXI@Z @ 0x180065B10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180065B5C (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CTopLevelWindow3D *__fastcall CTopLevelWindow3D::`scalar deleting destructor'(CTopLevelWindow3D *this, char a2)
{
  CTopLevelWindow3D::~CTopLevelWindow3D(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x268);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
