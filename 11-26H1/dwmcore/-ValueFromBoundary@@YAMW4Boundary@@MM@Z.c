/*
 * XREFs of ?ValueFromBoundary@@YAMW4Boundary@@MM@Z @ 0x18013E788
 * Callers:
 *     ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@@Z @ 0x18013E504 (-AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@UEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x18013E730 (-ValueFromBoundary@CInteractionTracker@@UEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker2@@UEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x180277A40 (-ValueFromBoundary@CInteractionTracker2@@UEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall ValueFromBoundary(int a1, double a2, double a3)
{
  __m128 result; // xmm0
  int v4; // ecx
  int v5; // ecx

  result = 0LL;
  v4 = a1 - 1;
  if ( !v4 )
    return *(__m128 *)&a2;
  v5 = v4 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
      return *(__m128 *)&a2;
  }
  else
  {
    return *(__m128 *)&a3;
  }
  return result;
}
