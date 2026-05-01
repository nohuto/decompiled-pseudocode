/*
 * XREFs of ??$_Emplace@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@_N@1@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180296ACC
 * Callers:
 *     ?ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXW4ReevaluateTabOption@@@Z @ 0x1800F1A20 (-ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXW4ReevaluateTabOption@@@Z.c)
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@_N@1@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18023154C (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CF550 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803151E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@1@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1806C1B9C (--$-0AEBV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@-$_Tree_temp_node@V-$a.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1806C2028 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@V-$com_ptr_t@UIApplicationView@@Uerr_exception_p.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::_Emplace<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const &>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v3; // r10
  __int64 *v6; // rdx
  __int64 *v7; // r9
  unsigned __int64 v8; // r11
  char v9; // cl
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  _BYTE v14[16]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF

  v3 = (__int64 *)*a1;
  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  v15 = (unsigned __int64)v7;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v8 = *a3;
    do
    {
      *(_QWORD *)&v15 = v7;
      if ( v7[4] >= v8 )
      {
        v9 = 0;
        DWORD2(v15) = 1;
        v6 = v7;
      }
      else
      {
        v9 = 1;
        DWORD2(v15) = 0;
      }
      v10 = v7 + 2;
      if ( !v9 )
        v10 = v7;
      v7 = (__int64 *)*v10;
    }
    while ( !*(_BYTE *)(*v10 + 25) );
  }
  if ( *((_BYTE *)v6 + 25) || *a3 < v6[4] )
  {
    if ( a1[1] == 0x666666666666666LL )
      std::_Throw_tree_length_error();
    v11 = std::_Tree_temp_node<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>(
            v14,
            a1,
            v3,
            a3);
    v12 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 8) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>(v14);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v15,
                      v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
