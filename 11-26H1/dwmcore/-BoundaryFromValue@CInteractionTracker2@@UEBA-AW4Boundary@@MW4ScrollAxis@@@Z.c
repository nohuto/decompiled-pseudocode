/*
 * XREFs of ?BoundaryFromValue@CInteractionTracker2@@UEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x180271E60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetScrollRange@CInteractionTracker2@@QEBAXW4ScrollAxis@@PEAM1@Z @ 0x180273DD0 (-GetScrollRange@CInteractionTracker2@@QEBAXW4ScrollAxis@@PEAM1@Z.c)
 */

__int64 __fastcall CInteractionTracker2::BoundaryFromValue(__int64 a1, float a2, unsigned int a3)
{
  float v4[6]; // [rsp+20h] [rbp-18h] BYREF
  float v5; // [rsp+58h] [rbp+20h] BYREF

  v4[0] = 0.0;
  v5 = 0.0;
  CInteractionTracker2::GetScrollRange(a1, a3, v4, &v5);
  return BoundaryFromValue(a2, v4[0], v5);
}
