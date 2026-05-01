/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXAEA_K@Z @ 0x1806A8670
 * Callers:
 *     ?SetRegions@XamlSnapAssistViewHost@@UEAAJIPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@@Z @ 0x180201430 (-SetRegions@XamlSnapAssistViewHost@@UEAAJIPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Win.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1801B9C94 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXQEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@_K1@Z @ 0x180228C90 (-_Change_array@-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$alloca.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Simple_reallocation_guard@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180342E0C (--1_Simple_reallocation_guard@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ??$_Uninitialized_move@PEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@QEAU123456@0PEAU123456@AEAV?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@0@@Z @ 0x1805BDC4C (--$_Uninitialized_move@PEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allo.c)
 */

void __fastcall std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Reallocate<0>(
        __int64 *a1,
        unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 size_of; // rax
  char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  void *v9; // rcx
  __int64 v10; // r9
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (a1[1] - *a1) >> 5;
  size_of = std::_Get_size_of_n<32>(*a2);
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v7 = a1[1];
  v8 = (__int64)v6;
  v11[2] = *a2;
  v9 = (void *)*a1;
  v11[0] = a1;
  std::_Uninitialized_move<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion *>(v9, v7, v6);
  v10 = *a2;
  v11[1] = 0LL;
  std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Change_array(a1, v8, v4, v10);
  std::vector<std::wstring>::_Simple_reallocation_guard::~_Simple_reallocation_guard((__int64)v11);
}
