/*
 * XREFs of ?Show@ApplicationFlyoutView@@UEAA?AUIAsyncAction@Foundation@Windows@winrt@@AEBURect@345@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@5@_JAEBVCorrelationVector@@@Z @ 0x1805D8070
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ApplicationFlyoutView::Show$_InitCoro$2 @ 0x1805D7CF4 (ApplicationFlyoutView--Show$_InitCoro$2.c)
 */

__int64 *__fastcall ApplicationFlyoutView::Show(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  void *v10; // rax
  int v12; // [rsp+168h] [rbp+10h] BYREF

  v10 = operator new(0x100uLL);
  v12 = 0;
  ApplicationFlyoutView::Show__InitCoro_2(&v12, (__int64)v10 + 112, a2, a3, a4, a5, a6, a1);
  return a2;
}
