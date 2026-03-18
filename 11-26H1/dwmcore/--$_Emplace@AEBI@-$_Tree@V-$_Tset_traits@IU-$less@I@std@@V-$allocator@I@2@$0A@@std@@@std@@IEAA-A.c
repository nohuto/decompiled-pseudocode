/*
 * XREFs of ??$_Emplace@AEBI@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@IPEAX@std@@_N@1@AEBI@Z @ 0x18020CDD4
 * Callers:
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x18016D708 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1801608F0 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCResource@@V-$com_ptr_t@UISpectreTex.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@IPEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801BB13C (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@IPEAX@std@@@std@@@std@@QEAA@XZ.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@IPEAX@std@@@1@AEBI@Z @ 0x1801CE730 (--$_Find_lower_bound@I@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180210300 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBI@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@IPEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@IPEAX@std@@@1@PEAU?$_Tree_node@IPEAX@1@AEBI@Z @ 0x180261844 (--$-0AEBI@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@IPEAX@std@@@std@@@std@@QEAA@AEAV-$allocat.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Emplace<unsigned int const &>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  _QWORD *lower; // rax
  _DWORD *v6; // r8
  __int128 v7; // xmm6
  __int64 v8; // rax
  __int64 v9; // rbx
  _BYTE v11[16]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h]

  lower = std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Find_lower_bound<unsigned int>(
            a1,
            &v12,
            a3);
  v7 = *(_OWORD *)lower;
  v13 = lower[2];
  if ( *(_BYTE *)(v13 + 25) || *v6 < *(_DWORD *)(v13 + 28) )
  {
    if ( a1[1] == 0x7FFFFFFFFFFFFFFLL )
      std::_Throw_tree_length_error();
    v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<unsigned int,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<unsigned int,void *>>>(
           v11,
           a1,
           *a1,
           v6);
    v9 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(v8 + 8) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<unsigned int,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<unsigned int,void *>>>((__int64)v11);
    v12 = v7;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>>>::_Insert_node(
                      a1,
                      (__int64)&v12,
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
