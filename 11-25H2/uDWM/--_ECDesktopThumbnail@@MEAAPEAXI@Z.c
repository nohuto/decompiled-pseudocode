/*
 * XREFs of ??_ECDesktopThumbnail@@MEAAPEAXI@Z @ 0x1800ADEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDesktopThumbnail@@MEAA@XZ @ 0x1800ADDE8 (--1CDesktopThumbnail@@MEAA@XZ.c)
 */

void **__fastcall CDesktopThumbnail::`vector deleting destructor'(void **this, char a2)
{
  CDesktopThumbnail::~CDesktopThumbnail(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0x118);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
