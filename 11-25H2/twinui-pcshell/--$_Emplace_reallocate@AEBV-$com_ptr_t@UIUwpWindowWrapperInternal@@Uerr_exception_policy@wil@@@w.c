/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800FDDE0
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18006C8A0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ?CacheWindowWrapper@UwpWindowEventDispatcher@@AEAAXV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1800FD770 (-CacheWindowWrapper@UwpWindowEventDispatcher@@AEAAXV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr.c)
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180145A10 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 *     ?EnsureDuplicateViewDestroyed@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x18041819C (-EnsureDuplicateViewDestroyed@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1800E8FC8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800FE32C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1801D82F8 (--$_Uninitialized_move@PEAV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@V-$allo.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E0490 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::vector<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy> const &>(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  __int64 *v12; // rax
  __int64 *v13; // r14
  __int64 *v14; // r12
  __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 *v17; // rcx
  __int64 *v18; // r8
  __int64 v19; // rax
  __int64 *v20; // rdi
  __int64 *v21; // r15
  void *v22; // rcx
  const struct std::nothrow_t *v23; // rdx
  __int64 *result; // rax
  __int64 *v25; // [rsp+28h] [rbp-40h]
  void *v26; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp+10h] BYREF
  __int64 v28; // [rsp+88h] [rbp+20h]

  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v28 = v7 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v8 = v10 + v9;
    if ( v10 + v9 < v7 + 1 )
      v8 = v7 + 1;
  }
  v27 = v8;
  size_of = std::_Get_size_of_n<8>(v8);
  v12 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v25 = v12;
  v14 = &v12[v6];
  try
  {
    v15 = *a3;
    *v14 = *a3;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v26 = v14;
    v16 = a1[1];
    v17 = *a1;
    v18 = v13;
    if ( a2 == v16 )
    {
      while ( v17 != v16 )
      {
        v19 = *v17;
        *v17 = 0LL;
        *v18++ = v19;
        ++v17;
      }
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(v18, v18);
    }
    else
    {
      std::_Uninitialized_move<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>>>(
        v17,
        a2,
        v13);
      v26 = v13;
      std::_Uninitialized_move<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>>>(
        a2,
        a1[1],
        v14 + 1);
    }
    v20 = *a1;
    if ( *a1 )
    {
      v21 = a1[1];
      while ( v20 != v21 )
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v20++);
      v22 = *a1;
      v23 = (const struct std::nothrow_t *)(((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
      v27 = (unsigned __int64)v23;
      v26 = v22;
      if ( (unsigned __int64)v23 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v26, &v27);
        v22 = v26;
        v23 = (const struct std::nothrow_t *)v27;
      }
      operator delete(v22, v23);
    }
    *a1 = v13;
    a1[1] = &v13[v28];
    a1[2] = &v13[v8];
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(
      (__int64 *)v26,
      v14 + 1);
    std::_Deallocate<16,0>(v25, (const struct std::nothrow_t *)(8 * v27));
    throw;
  }
  return result;
}
