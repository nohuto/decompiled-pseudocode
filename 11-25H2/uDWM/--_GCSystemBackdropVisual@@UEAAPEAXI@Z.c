/*
 * XREFs of ??_GCSystemBackdropVisual@@UEAAPEAXI@Z @ 0x1800689B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemBackdropVisual@@UEAA@XZ @ 0x180068A4C (--1CSystemBackdropVisual@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CSystemBackdropVisual *__fastcall CSystemBackdropVisual::`scalar deleting destructor'(
        CSystemBackdropVisual *this,
        char a2)
{
  CSystemBackdropVisual::~CSystemBackdropVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0xD0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
