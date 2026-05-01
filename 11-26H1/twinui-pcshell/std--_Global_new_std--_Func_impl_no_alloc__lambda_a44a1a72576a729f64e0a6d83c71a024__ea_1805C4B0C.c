/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_a44a1a72576a729f64e0a6d83c71a024__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension___lambda_a44a1a72576a729f64e0a6d83c71a024___ @ 0x1805C4B0C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180278C40 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     _std::_Global_new_std::_Func_impl_no_alloc__lambda_a44a1a72576a729f64e0a6d83c71a024__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension___lambda_a44a1a72576a729f64e0a6d83c71a024____::_2_::_Guard_type::__Guard_type @ 0x1805CC470 (_std--_Global_new_std--_Func_impl_no_alloc__lambda_a44a1a72576a729f64e0a6d83c71a024__void_winrt-.c)
 */

char *__fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_a44a1a72576a729f64e0a6d83c71a024__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension___lambda_a44a1a72576a729f64e0a6d83c71a024___(
        __int64 a1)
{
  char *v2; // rdi
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)operator new(0x50uLL);
  v5 = 0LL;
  *(_QWORD *)v2 = &off_1807595E0;
  *((_QWORD *)v2 + 1) = *(_QWORD *)a1;
  *((_OWORD *)v2 + 1) = *(_OWORD *)(a1 + 8);
  *((_QWORD *)v2 + 4) = *(_QWORD *)(a1 + 24);
  *(_OWORD *)(v2 + 40) = *(_OWORD *)(a1 + 32);
  v2[56] = *(_BYTE *)(a1 + 48);
  *(_QWORD *)(v2 + 60) = *(_QWORD *)(a1 + 52);
  v3 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = 0LL;
  *((_QWORD *)v2 + 9) = v3;
  std::_Global_new_std::_Func_impl_no_alloc__lambda_a44a1a72576a729f64e0a6d83c71a024__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension___lambda_a44a1a72576a729f64e0a6d83c71a024____::_2_::_Guard_type::__Guard_type(&v5);
  return v2;
}
