/*
 * XREFs of ?ShouldAnimateMoveForType@VirtualDesktopRemoveAnimationCoordinator@@MEAA_NW4AnimationCoordinatorItemType@@PEA_N@Z @ 0x1804CFBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall VirtualDesktopRemoveAnimationCoordinator::ShouldAnimateMoveForType(__int64 a1, int a2, _BYTE *a3)
{
  char v3; // cl

  v3 = 0;
  *a3 = 0;
  if ( ((a2 - 3) & 0xFFFFFFFA) == 0 )
    return a2 != 4;
  return v3;
}
