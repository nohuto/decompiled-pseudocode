/*
 * XREFs of ?StopCustomAndDefaultAnimations@CInteractionTracker2@@EEAAX_N@Z @ 0x1802772F0
 * Callers:
 *     ??1CInteractionTracker2@@UEAA@XZ @ 0x180271474 (--1CInteractionTracker2@@UEAA@XZ.c)
 * Callees:
 *     ?StopCustomAnimations@CInteractionTracker2@@AEAAX_N@Z @ 0x1802773C8 (-StopCustomAnimations@CInteractionTracker2@@AEAAX_N@Z.c)
 */

void __fastcall CInteractionTracker2::StopCustomAndDefaultAnimations(CInteractionTracker2 *this, bool a2)
{
  CInteractionTracker2::StopCustomAnimations(this, a2);
  CInteractionTracker2::DestroyDefaultAnimations(this, 0);
}
