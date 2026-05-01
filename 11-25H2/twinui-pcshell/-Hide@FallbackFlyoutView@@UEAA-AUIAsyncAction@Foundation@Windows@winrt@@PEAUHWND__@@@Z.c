/*
 * XREFs of ?Hide@FallbackFlyoutView@@UEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@@Z @ 0x1805D6540
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     FallbackFlyoutView::Hide$_InitCoro$2 @ 0x1805D62F0 (FallbackFlyoutView--Hide$_InitCoro$2.c)
 */

__int64 *__fastcall FallbackFlyoutView::Hide(__int64 a1, __int64 *a2, __int64 a3)
{
  void *v6; // rax
  int v8; // [rsp+F8h] [rbp+10h] BYREF

  v6 = operator new(0xB0uLL);
  v8 = 0;
  FallbackFlyoutView::Hide__InitCoro_2(&v8, (__int64)v6 + 112, a2, a3, a1);
  return a2;
}
