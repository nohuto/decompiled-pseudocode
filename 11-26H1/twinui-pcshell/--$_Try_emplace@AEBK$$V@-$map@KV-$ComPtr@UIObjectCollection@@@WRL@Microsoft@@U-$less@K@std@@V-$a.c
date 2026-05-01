/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1804EA514
 * Callers:
 *     _lambda_6a8919acfe736782812ed367c6267a46_::operator() @ 0x1804EAAA0 (_lambda_6a8919acfe736782812ed367c6267a46_--operator().c)
 * Callees:
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800CDD58 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CF550 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$?0V?$tuple@AEBK@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@AEAA@AEAV?$tuple@AEBK@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x1802BDD6C (--$-0V-$tuple@AEBK@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@$$CBKV-$ComPtr@UIApplicationFrame@@@WRL@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803151E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1804EA800 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>>::_Try_emplace<unsigned long const &,>(
        _QWORD *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 *v6; // r15
  __int64 *v7; // r9
  __int64 *v8; // rdx
  unsigned int v9; // r8d
  char v10; // cl
  __int64 *v11; // rax
  unsigned __int64 size_of; // rax
  _QWORD *v13; // rbx
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h]
  unsigned int *v17; // [rsp+80h] [rbp+20h] BYREF

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  v16 = (unsigned __int64)v7;
  v8 = v6;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v9 = *a3;
    do
    {
      *(_QWORD *)&v16 = v7;
      if ( *((_DWORD *)v7 + 8) >= v9 )
      {
        v10 = 0;
        DWORD2(v16) = 1;
        v8 = v7;
      }
      else
      {
        v10 = 1;
        DWORD2(v16) = 0;
      }
      v11 = v7 + 2;
      if ( !v10 )
        v11 = v7;
      v7 = (__int64 *)*v11;
    }
    while ( !*(_BYTE *)(*v11 + 25) );
  }
  if ( *((_BYTE *)v8 + 25) || *a3 < *((_DWORD *)v8 + 8) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    *(_QWORD *)&v15 = a1;
    size_of = std::_Get_size_of_n<48>(1uLL);
    v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    v17 = a3;
    ____0V__tuple_AEBK_std__V__tuple___V_1__0A___Z_S___pair___CBKV__ComPtr_UIApplicationFrame___WRL_Microsoft___std__AEAA_AEAV__tuple_AEBK_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
      (__int64)(v13 + 4),
      &v17);
    *v13 = v6;
    v13[1] = v6;
    v13[2] = v6;
    *((_WORD *)v13 + 12) = 0;
    *((_QWORD *)&v15 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *>>>(&v15);
    v15 = v16;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v15,
                      (__int64)v13);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
