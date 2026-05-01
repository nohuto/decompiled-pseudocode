/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800FE150
 * Callers:
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1800F4048 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800F4574 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800FE32C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy> const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  _QWORD *v12; // rdi
  __int64 *v13; // r13
  _QWORD *v14; // r14
  __int64 v15; // rcx
  __int64 *v16; // r8
  __int64 *v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rcx
  __int64 *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // [rsp+20h] [rbp-58h]
  __int64 *v27; // [rsp+80h] [rbp+8h]
  __int64 v28; // [rsp+98h] [rbp+20h]

  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v26 = v7 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v8 = v10 + v9;
    if ( v10 + v9 < v7 + 1 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v28 = 8 * v6;
  v13 = &v12[v6];
  v14 = v13 + 1;
  try
  {
    v15 = *a3;
    *v13 = *a3;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v27 = v13;
    v16 = a1[1];
    v17 = *a1;
    v18 = v12;
    if ( a2 == v16 )
    {
      while ( v17 != v16 )
      {
        v21 = *v17;
        *v17 = 0LL;
        *v18++ = v21;
        ++v17;
      }
      v19 = v18;
    }
    else
    {
      while ( v17 != a2 )
      {
        v22 = *v17;
        *v17 = 0LL;
        *v18++ = v22;
        ++v17;
      }
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(v18, v18);
      v27 = v12;
      v23 = a1[1];
      if ( a2 != v23 )
      {
        v24 = (__int64 *)((char *)a2 + (char *)&v13[v28 / 0xFFFFFFFFFFFFFFF8uLL] - (char *)v12);
        do
        {
          v25 = *v24;
          *v24 = 0LL;
          *v14++ = v25;
          ++v24;
        }
        while ( v24 != v23 );
      }
      v19 = v14;
      v18 = v14;
    }
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(v18, v19);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(v27, v13 + 1);
    std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(8 * v8));
    throw;
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(*a1, a1[1]);
    std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)(((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *a1 = v12;
  a1[1] = &v12[v26];
  a1[2] = &v12[v8];
  return v13;
}
