/*
 * XREFs of winrt::Windows::UI::Xaml::RoutedEventHandler::RoutedEventHandler__lambda_f88d4aa7a173ec7d874197d211fc8411___ @ 0x180573A60
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x1805758D4 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x1802921A4 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::UI::Xaml::RoutedEventHandler::RoutedEventHandler__lambda_f88d4aa7a173ec7d874197d211fc8411___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD *result; // rax
  char *v6; // [rsp+30h] [rbp+8h]

  v6 = (char *)operator new(0x18uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v6 + 8));
  v4[2] = a2;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v4 = off_18072DE80;
  result = a1;
  *a1 = v4;
  return result;
}
