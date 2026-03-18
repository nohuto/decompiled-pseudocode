/*
 * XREFs of ?ClampValueToBoundary@CInteractionTracker2@@UEAAMW4ScrollAxis@@M@Z @ 0x180272720
 * Callers:
 *     <none>
 * Callees:
 *     ?GetScrollRange@CInteractionTracker2@@QEBAXW4ScrollAxis@@PEAM1@Z @ 0x180273DD0 (-GetScrollRange@CInteractionTracker2@@QEBAXW4ScrollAxis@@PEAM1@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall CInteractionTracker2::ClampValueToBoundary(__int64 a1, __int64 a2, double a3)
{
  float v4; // [rsp+40h] [rbp+18h] BYREF
  float v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0.0;
  v5 = 0.0;
  CInteractionTracker2::GetScrollRange(a1, a2, &v4, &v5);
  *(float *)&a3 = fminf(fmaxf(*(float *)&a3, v4), v5);
  return *(__m128 *)&a3;
}
