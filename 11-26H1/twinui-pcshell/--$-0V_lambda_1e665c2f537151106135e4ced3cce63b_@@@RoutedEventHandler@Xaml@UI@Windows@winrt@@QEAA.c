/*
 * XREFs of ??$?0V_lambda_1e665c2f537151106135e4ced3cce63b_@@@RoutedEventHandler@Xaml@UI@Windows@winrt@@QEAA@V_lambda_1e665c2f537151106135e4ced3cce63b_@@@Z @ 0x180608554
 * Callers:
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x18060A450 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::UI::Xaml::RoutedEventHandler::RoutedEventHandler(_QWORD *a1, __int128 *a2)
{
  __int128 v4; // xmm0
  __int64 v5; // xmm1_8
  _DWORD *v7; // [rsp+30h] [rbp+8h]

  v7 = operator new(0x28uLL);
  v4 = *a2;
  v5 = *((_QWORD *)a2 + 2);
  v7[2] = 1;
  *((_OWORD *)v7 + 1) = v4;
  *((_QWORD *)v7 + 4) = v5;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v7 = &winrt::impl::delegate<winrt::Windows::UI::Xaml::RoutedEventHandler,_lambda_1e665c2f537151106135e4ced3cce63b_>::`vftable';
  *a1 = v7;
  return a1;
}
