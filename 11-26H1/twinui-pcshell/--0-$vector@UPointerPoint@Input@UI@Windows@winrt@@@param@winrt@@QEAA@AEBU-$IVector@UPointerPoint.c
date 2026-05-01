/*
 * XREFs of ??0?$vector@UPointerPoint@Input@UI@Windows@winrt@@@param@winrt@@QEAA@AEBU?$IVector@UPointerPoint@Input@UI@Windows@winrt@@@Collections@Foundation@Windows@2@@Z @ 0x1802C23C0
 * Callers:
 *     _lambda_9d63f5b83c4626ea321dd6f3d651c13d_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18058E868 (_lambda_9d63f5b83c4626ea321dd6f3d651c13d_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 * Callees:
 *     ?attach_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x18020E460 (-attach_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 */

winrt *__fastcall winrt::param::vector<winrt::Windows::UI::Input::PointerPoint>::vector<winrt::Windows::UI::Input::PointerPoint>(
        winrt *a1,
        struct IUnknown **a2,
        void *a3)
{
  *(_QWORD *)a1 = 0LL;
  *((_BYTE *)a1 + 8) = 0;
  winrt::attach_abi(a1, *a2, a3);
  return a1;
}
