/*
 * XREFs of ?BoundaryFromValue@@YA?AW4Boundary@@MMM@Z @ 0x1801BC72C
 * Callers:
 *     ?BoundaryFromValue@CInteractionTracker@@UEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x1801BC6D0 (-BoundaryFromValue@CInteractionTracker@@UEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?BoundaryFromValue@CInteractionTracker2@@UEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x180271E60 (-BoundaryFromValue@CInteractionTracker2@@UEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z @ 0x18028BEC8 (-InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BoundaryFromValue(float a1, float a2, float a3)
{
  __int64 result; // rax

  result = a2 >= a1;
  if ( a1 >= a3 )
    return (unsigned int)(a2 >= a1) + 2;
  return result;
}
