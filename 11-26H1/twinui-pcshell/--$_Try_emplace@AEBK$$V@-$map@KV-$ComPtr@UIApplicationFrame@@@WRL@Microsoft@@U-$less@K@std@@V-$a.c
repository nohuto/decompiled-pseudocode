/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18018B6D4
 * Callers:
 *     _lambda_c8a2fb21ce249544899dca467e4f9e40_::operator() @ 0x18018B3C0 (_lambda_c8a2fb21ce249544899dca467e4f9e40_--operator().c)
 *     _lambda_fa0a17b5823100ead362db86d99d2363_::operator() @ 0x180297C3C (_lambda_fa0a17b5823100ead362db86d99d2363_--operator().c)
 *     _lambda_5053f9d2b5f05b91476ca909f4f2555a_::operator() @ 0x1804E9324 (_lambda_5053f9d2b5f05b91476ca909f4f2555a_--operator().c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CF550 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$?0V?$tuple@AEBK@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@AEAA@AEAV?$tuple@AEBK@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x1802BDD6C (--$-0V-$tuple@AEBK@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@$$CBKV-$ComPtr@UIApplicationFrame@@@WRL@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803151E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>>::_Try_emplace<unsigned long const &,>(
        _QWORD *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 *v6; // r14
  __int64 *v7; // r9
  __int64 *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned int v12; // r8d
  char v13; // cl
  __int64 *v14; // rax
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h]
  unsigned int *v17; // [rsp+80h] [rbp+20h] BYREF

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  v16 = (unsigned __int64)v7;
  v8 = v6;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v12 = *a3;
    do
    {
      *(_QWORD *)&v16 = v7;
      if ( *((_DWORD *)v7 + 8) >= v12 )
      {
        v13 = 0;
        DWORD2(v16) = 1;
        v8 = v7;
      }
      else
      {
        v13 = 1;
        DWORD2(v16) = 0;
      }
      v14 = v7 + 2;
      if ( !v13 )
        v14 = v7;
      v7 = (__int64 *)*v14;
    }
    while ( !*(_BYTE *)(*v14 + 25) );
  }
  if ( *((_BYTE *)v8 + 25) || *a3 < *((_DWORD *)v8 + 8) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v9 = std::_Allocate<16,std::_Default_allocate_traits>(48LL);
    v17 = a3;
    ____0V__tuple_AEBK_std__V__tuple___V_1__0A___Z_S___pair___CBKV__ComPtr_UIApplicationFrame___WRL_Microsoft___std__AEAA_AEAV__tuple_AEBK_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
      v9 + 32,
      &v17,
      v9);
    *(_QWORD *)v10 = v6;
    *(_QWORD *)(v10 + 8) = v6;
    *(_QWORD *)(v10 + 16) = v6;
    *(_WORD *)(v10 + 24) = 0;
    v15 = v16;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v15,
                      v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
