/*
 * XREFs of ??$_Construct_n@AEBQEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@AEBQEAU123456@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_KAEBQEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@1@Z @ 0x18023F28C
 * Callers:
 *     ??0SnapAssistState@@QEAA@AEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEBURect@Foundation@56@HPEAUHWND__@@3AEBUISnapAssistCallback2@WindowSnapping@Shell@456@@Z @ 0x180285E90 (--0SnapAssistState@@QEAA@AEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18015288C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x1802B070C (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??1?$_Tidy_guard@V?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x1806985E8 (--1-$_Tidy_guard@V-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$all.c)
 *     memmove_0 @ 0x1806A4B18 (memmove_0.c)
 */

void __fastcall std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Construct_n<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion * const &,winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion * const &>(
        _QWORD *a1,
        unsigned __int64 a2,
        const void **a3,
        _QWORD *a4)
{
  size_t size_of; // rax
  char *v9; // rax
  char *v10; // rdi
  size_t v11; // rbx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    size_of = std::_Get_size_of_n<32>(a2);
    v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v9;
    a1[1] = v9;
    v10 = v9;
    a1[2] = &v9[32 * a2];
    v11 = *a4 - (_QWORD)*a3;
    memmove_0(v9, *a3, v11);
    v12 = 0LL;
    a1[1] = &v10[v11 & 0xFFFFFFFFFFFFFFE0uLL];
    std::_Tidy_guard<std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>>::~_Tidy_guard<std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>>(&v12);
  }
}
