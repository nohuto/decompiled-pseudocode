/*
 * XREFs of ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___::Run @ 0x1804CE0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ @ 0x1804CE8AC (-_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ.c)
 *     ?_UpdateScrollElementVisibility@CVirtualDesktopBarElement@@IEAAXXZ @ 0x1804CEA30 (-_UpdateScrollElementVisibility@CVirtualDesktopBarElement@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ObservablePropertyCallback__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___::Run(__int64 a1)
{
  CVirtualDesktopBarElement *v1; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(CVirtualDesktopBarElement **)(*(_QWORD *)(a1 + 16) + 16LL);
  if ( v1 )
  {
    (*(void (__fastcall **)(CVirtualDesktopBarElement *))(*(_QWORD *)v1 + 8LL))(v1);
    CVirtualDesktopBarElement::_UpdateScrollElementVisibility(v1);
    CVirtualDesktopBarElement::_LayoutBackground(v1);
    (*(void (__fastcall **)(CVirtualDesktopBarElement *))(*(_QWORD *)v1 + 16LL))(v1);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
      (const char *)0x80040201LL);
  }
}
