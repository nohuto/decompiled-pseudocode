/*
 * XREFs of ??$_Construct_n@$$V@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x1804F66B8
 * Callers:
 *     ?GetLastViews@GamingApplicationViewCollection@@QEAA?AV?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@I@Z @ 0x1804FD108 (-GetLastViews@GamingApplicationViewCollection@@QEAA-AV-$vector@V-$com_ptr_t@UIApplicationView@@U.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180176C08 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??1?$_Tidy_guard@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAA@XZ @ 0x1804F7544 (--1-$_Tidy_guard@V-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$a.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Construct_n<>(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 size_of; // rax
  char *v5; // rax
  size_t v6; // rsi
  char *v7; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    size_of = std::_Get_size_of_n<8>(a2);
    v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *a1 = v5;
    a1[1] = v5;
    v6 = 8 * a2;
    v7 = v5;
    a1[2] = &v5[v6];
    memset_0(v5, 0, v6);
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>(
      (__int64)&v7[v6],
      (__int64)&v7[v6]);
    a1[1] = &v7[v6];
    v8 = 0LL;
    std::_Tidy_guard<std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>::~_Tidy_guard<std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>(&v8);
  }
}
