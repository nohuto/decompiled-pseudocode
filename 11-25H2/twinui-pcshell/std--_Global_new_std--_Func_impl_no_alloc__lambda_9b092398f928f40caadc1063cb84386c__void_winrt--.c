/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_9b092398f928f40caadc1063cb84386c__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension___lambda_9b092398f928f40caadc1063cb84386c__const_&_ @ 0x1805A0844
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_9b092398f928f40caadc1063cb84386c__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Copy @ 0x1805B6B30 (std--_Func_impl_no_alloc__lambda_9b092398f928f40caadc1063cb84386c__void_winrt--WindowsUdk--UI--S.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     _std::_Global_new_std::_Func_impl_no_alloc__lambda_9b092398f928f40caadc1063cb84386c__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension___lambda_9b092398f928f40caadc1063cb84386c____::_2_::_Guard_type::__Guard_type @ 0x1805A8328 (_std--_Global_new_std--_Func_impl_no_alloc__lambda_9b092398f928f40caadc1063cb84386c__void_winrt-.c)
 */

char *__fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_9b092398f928f40caadc1063cb84386c__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension___lambda_9b092398f928f40caadc1063cb84386c__const___(
        __int64 a1)
{
  char *v2; // rdi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)operator new(0x50uLL);
  *(_QWORD *)v2 = &off_18072F3A8;
  *((_QWORD *)v2 + 1) = *(_QWORD *)a1;
  *((_OWORD *)v2 + 1) = *(_OWORD *)(a1 + 8);
  *((_QWORD *)v2 + 4) = *(_QWORD *)(a1 + 24);
  *(_OWORD *)(v2 + 40) = *(_OWORD *)(a1 + 32);
  v2[56] = *(_BYTE *)(a1 + 48);
  *(_QWORD *)(v2 + 60) = *(_QWORD *)(a1 + 52);
  *((_QWORD *)v2 + 9) = *(_QWORD *)(a1 + 64);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)v2 + 9);
  v4 = 0LL;
  std::_Global_new_std::_Func_impl_no_alloc__lambda_9b092398f928f40caadc1063cb84386c__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension___lambda_9b092398f928f40caadc1063cb84386c____::_2_::_Guard_type::__Guard_type(&v4);
  return v2;
}
