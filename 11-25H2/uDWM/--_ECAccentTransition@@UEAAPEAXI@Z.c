/*
 * XREFs of ??_ECAccentTransition@@UEAAPEAXI@Z @ 0x1800A0A70
 * Callers:
 *     ??_ECAccentTransition@@W7EAAPEAXI@Z @ 0x1800A0A60 (--_ECAccentTransition@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CAccentTransition@@UEAA@XZ @ 0x1800A0A08 (--1CAccentTransition@@UEAA@XZ.c)
 */

CAccentTransition *__fastcall CAccentTransition::`vector deleting destructor'(CAccentTransition *this, char a2)
{
  CAccentTransition::~CAccentTransition(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x28);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
