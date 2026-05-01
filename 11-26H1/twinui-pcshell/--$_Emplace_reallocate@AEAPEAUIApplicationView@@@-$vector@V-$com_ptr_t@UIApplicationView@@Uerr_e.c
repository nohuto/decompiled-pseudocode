/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEAPEAUIApplicationView@@@Z @ 0x1804EF76C
 * Callers:
 *     ??$emplace_back@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAPEAUIApplicationView@@@Z @ 0x1804EF8F4 (--$emplace_back@AEAPEAUIApplicationView@@@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exceptio.c)
 *     ??$emplace@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@AEAPEAUIApplicationView@@@Z @ 0x1804F68D8 (--$emplace@AEAPEAUIApplicationView@@@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_pol.c)
 *     ?BringToFront@GamingApplicationViewCollection@@QEAAXPEAUIApplicationView@@@Z @ 0x1804F9750 (-BringToFront@GamingApplicationViewCollection@@QEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180176C08 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x180176C40 (-_Change_array@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allo.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1804EFBB0 (--1_Reallocation_guard@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Emplace_reallocate<IApplicationView * &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  char *v16; // r13
  _QWORD *v17; // rdi
  __int64 *v18; // r8
  _QWORD *v19; // rcx
  __int64 *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // rax
  _QWORD v27[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v28; // [rsp+38h] [rbp-40h]
  _QWORD *v29; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = a2 - *a1;
  v6 = a2;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v7 + 1;
  v10 = a1[2] - *a1;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = (__int64)v13;
  v27[0] = a1;
  v27[2] = v3;
  v16 = &v13[8 * v5];
  v17 = v16 + 8;
  v29 = v16 + 8;
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(v16, v14);
  v18 = a1[1];
  v19 = (_QWORD *)v15;
  v20 = *a1;
  v28 = v16;
  if ( v6 == v18 )
  {
    while ( v20 != v18 )
    {
      v21 = *v20;
      *v20 = 0LL;
      *v19++ = v21;
      ++v20;
    }
    v22 = (__int64)v19;
  }
  else
  {
    while ( v20 != v6 )
    {
      v23 = *v20;
      *v20 = 0LL;
      *v19++ = v23;
      ++v20;
    }
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>(
      (__int64)v19,
      (__int64)v19);
    v24 = a1[1];
    v28 = (_QWORD *)v15;
    while ( v6 != v24 )
    {
      v25 = *v6;
      *v6 = 0LL;
      *v17++ = v25;
      ++v6;
    }
    v22 = (__int64)v17;
    v19 = v17;
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>((__int64)v19, v22);
  v27[1] = 0LL;
  std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Change_array(a1, v15, v9, v3);
  std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Reallocation_guard::~_Reallocation_guard(v27);
  return v16;
}
