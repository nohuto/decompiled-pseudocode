/*
 * XREFs of ??_GCDWMDXGIEnumeration@@MEAAPEAXI@Z @ 0x180076B40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDWMDXGIEnumeration@@MEAA@XZ @ 0x180076B8C (--1CDWMDXGIEnumeration@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CDWMDXGIEnumeration *__fastcall CDWMDXGIEnumeration::`scalar deleting destructor'(CDWMDXGIEnumeration *this, char a2)
{
  CDWMDXGIEnumeration::~CDWMDXGIEnumeration(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x58);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
