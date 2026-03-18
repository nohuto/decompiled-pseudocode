/*
 * XREFs of ?ValueFromBoundary@CInteractionTracker2@@UEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x180277A40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetScrollRange@CInteractionTracker2@@QEBAXW4ScrollAxis@@PEAM1@Z @ 0x180273DD0 (-GetScrollRange@CInteractionTracker2@@QEBAXW4ScrollAxis@@PEAM1@Z.c)
 */

__m128 __fastcall CInteractionTracker2::ValueFromBoundary(_DWORD *a1, __int64 a2, int a3)
{
  int v3; // r10d
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+58h] [rbp+20h] BYREF

  v5[0] = 0;
  v6 = 0;
  CInteractionTracker2::GetScrollRange(a1, a3, v5, &v6);
  return ValueFromBoundary(v3, COERCE_DOUBLE((unsigned __int64)v5[0]), COERCE_DOUBLE((unsigned __int64)v6));
}
