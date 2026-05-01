/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180132B04
 * Callers:
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x180132568 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 * Callees:
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180132A58 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1801E3D80 (-_Change_array@-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1804A2DC0 (--1_Reallocation_guard@-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy> const &>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  __int64 v13; // r14
  __int64 *v14; // r13
  _QWORD *v15; // rdi
  __int64 *v16; // r8
  _QWORD *v17; // rcx
  __int64 *v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rax
  _QWORD *v25; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+30h] [rbp-48h]
  __int64 v27; // [rsp+38h] [rbp-40h]
  __int64 *v28; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = ((__int64)a2 - *a1) >> 3;
  v6 = a2;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v25 = a1;
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v26 = v3;
  v14 = (__int64 *)(v13 + 8 * v5);
  v15 = v14 + 1;
  v28 = v14 + 1;
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    v14,
    a3);
  v16 = (__int64 *)a1[1];
  v17 = (_QWORD *)v13;
  v18 = (__int64 *)*a1;
  v27 = (__int64)v14;
  if ( v6 == v16 )
  {
    while ( v18 != v16 )
    {
      v19 = *v18;
      *v18 = 0LL;
      *v17++ = v19;
      ++v18;
    }
    v20 = v17;
  }
  else
  {
    while ( v18 != v6 )
    {
      v21 = *v18;
      *v18 = 0LL;
      *v17++ = v21;
      ++v18;
    }
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(v17, v17);
    v22 = (__int64 *)a1[1];
    v27 = v13;
    while ( v6 != v22 )
    {
      v23 = *v6;
      *v6 = 0LL;
      *v15++ = v23;
      ++v6;
    }
    v20 = v15;
    v17 = v15;
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(v17, v20);
  std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::_Change_array(
    a1,
    v13,
    v9,
    v3,
    v25,
    0LL,
    v26,
    v27,
    v28);
  std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::_Reallocation_guard::~_Reallocation_guard(&v25);
  return v14;
}
