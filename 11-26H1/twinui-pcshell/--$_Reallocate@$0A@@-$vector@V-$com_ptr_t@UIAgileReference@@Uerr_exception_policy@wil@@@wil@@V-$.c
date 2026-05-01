/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXAEA_K@Z @ 0x1802DCD10
 * Callers:
 *     ??$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAgileCallbackArray@AgileRegistrationList@@@12@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x180045A6C (--$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV-$vector@UItem@AgileRegistrationList@@V-$.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x1801785C4 (-_Change_array@-$vector@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V-$alloc.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18017FC54 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@XZ @ 0x1802DDA9C (--1_Reallocation_guard@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Reallocate<0>(
        __int64 **a1,
        unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 size_of; // rax
  __int64 *v6; // rbp
  __int64 *v7; // r8
  __int64 *v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a1[1] - *a1;
  size_of = std::_Get_size_of_n<8>(*a2);
  v6 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v7 = a1[1];
  v8 = *a1;
  v13[2] = *a2;
  v9 = v6;
  v13[0] = a1;
  while ( v8 != v7 )
  {
    v10 = *v8;
    *v8 = 0LL;
    *v9++ = v10;
    ++v8;
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(v9, v9);
  v11 = *a2;
  v13[1] = 0LL;
  std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Change_array(a1, (__int64)v6, v4, v11);
  return std::vector<unsigned short *>::_Reallocation_guard::~_Reallocation_guard(v13);
}
