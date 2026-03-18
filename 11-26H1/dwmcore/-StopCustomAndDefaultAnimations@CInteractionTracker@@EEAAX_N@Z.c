/*
 * XREFs of ?StopCustomAndDefaultAnimations@CInteractionTracker@@EEAAX_N@Z @ 0x18013D1D0
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18013CCDC (--1CInteractionTracker@@UEAA@XZ.c)
 * Callees:
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18013D1F4 (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 */

void __fastcall CInteractionTracker::StopCustomAndDefaultAnimations(CInteractionTracker *this, bool a2)
{
  CInteractionTracker::StopCustomAnimations(this, a2);
  CInteractionTracker::DestroyDefaultAnimations(this, 0);
}
