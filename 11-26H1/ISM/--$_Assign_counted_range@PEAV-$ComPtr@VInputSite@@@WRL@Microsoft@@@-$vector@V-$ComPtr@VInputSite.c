/*
 * XREFs of ??$_Assign_counted_range@PEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@_K@Z @ 0x18002B580
 * Callers:
 *     ?GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@_K@Z @ 0x18002B030 (-GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA-AV-$vector@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002A9EC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Uninitialized_copy_n@PEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAV123@_K0AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x18002AFC4 (--$_Uninitialized_copy_n@PEAV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputS.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002B550 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x18002B720 (--$_Destroy_range@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Assign_counted_range<Microsoft::WRL::ComPtr<InputSite> *>(
        __int64 *a1,
        __int64 *a2,
        unsigned __int64 a3)
{
  __int64 *v3; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 size_of; // rax
  __int64 v11; // rax
  __int64 *v12; // rdi
  __int64 *result; // rax
  __int64 *v14; // r8
  unsigned __int64 v15; // rbp
  __int64 *i; // rbp

  v3 = (__int64 *)*a1;
  v5 = a3;
  v7 = (a1[2] - *a1) >> 3;
  if ( a3 <= v7 )
  {
    v14 = (__int64 *)a1[1];
    v15 = v14 - v3;
    if ( v5 > v15 )
    {
      while ( v3 != v14 )
      {
        Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(v3, a2);
        v14 = (__int64 *)a1[1];
        ++v3;
        ++a2;
      }
      result = std::_Uninitialized_copy_n<Microsoft::WRL::ComPtr<InputSite> *,std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(
                 (__int64)a2,
                 v5 - v15,
                 v14);
      a1[1] = (__int64)result;
    }
    else
    {
      for ( i = &v3[v5]; v5; --v5 )
        Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(v3++, a2++);
      result = (__int64 *)std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(i, a1[1]);
      a1[1] = (__int64)i;
    }
  }
  else
  {
    v8 = 0x1FFFFFFFFFFFFFFFLL;
    if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength(v7);
    v9 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v8 = v7 + v9;
      if ( v7 + v9 < a3 )
        v8 = a3;
    }
    if ( v3 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(v3, a1[1]);
      std::_Deallocate<16>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    size_of = std::_Get_size_of_n<8>(v8);
    v11 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    *a1 = v11;
    v12 = (__int64 *)v11;
    a1[1] = v11;
    for ( a1[2] = v11 + 8 * v8; v5; --v5 )
    {
      *v12 = *a2;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v12++);
      ++a2;
    }
    result = (__int64 *)std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(v12, v12);
    a1[1] = (__int64)v12;
  }
  return result;
}
