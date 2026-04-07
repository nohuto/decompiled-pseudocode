/*
 * XREFs of ??_GCLivePreview@@MEAAPEAXI@Z @ 0x1800B9FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x1800B9E54 (--1CLivePreview@@MEAA@XZ.c)
 */

void **__fastcall CLivePreview::`scalar deleting destructor'(void **this, __int64 a2, __int64 a3)
{
  char v3; // di

  v3 = a2;
  CLivePreview::~CLivePreview(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0x208);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
