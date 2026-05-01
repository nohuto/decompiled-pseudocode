/*
 * XREFs of ??$_Emplace@Uhstring@winrt@@U12@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@_N@1@$$QEAUhstring@winrt@@0@Z @ 0x180640F2C
 * Callers:
 *     ?to_multimap@implementation@Shell@Internal@Windows@winrt@@YA@AEBUWwwFormUrlDecoder@Foundation@45@@Z @ 0x18064199C (-to_multimap@implementation@Shell@Internal@Windows@winrt@@YA@AEBUWwwFormUrlDecoder@Foundation@45.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800F848C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180318F84 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@@Z @ 0x180338260 (--0-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180338650 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@.c)
 *     ??$_Find_upper_bound@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$00@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@AEBUhstring@winrt@@@Z @ 0x180641034 (--$_Find_upper_bound@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstri.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,1>>::_Emplace<winrt::hstring,winrt::hstring>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v8; // rsi
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int128 v14; // xmm6
  __int64 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+28h] [rbp-38h]
  __int128 v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h]

  v8 = *a1;
  std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>(
    &v16,
    (__int64)a1);
  v9 = v17;
  v10 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(v9 + 32) = v10;
  v11 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(v9 + 40) = v11;
  *(_QWORD *)v17 = v8;
  *(_QWORD *)(v17 + 8) = v8;
  *(_QWORD *)(v17 + 16) = v8;
  *(_BYTE *)(v17 + 24) = 0;
  *(_BYTE *)(v17 + 25) = 0;
  v12 = v17;
  v13 = std::_Tree<std::_Tmap_traits<winrt::hstring,winrt::hstring,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,1>>::_Find_upper_bound<winrt::hstring>(
          a1,
          &v18,
          v17 + 32);
  v14 = *(_OWORD *)v13;
  v19 = *(_QWORD *)(v13 + 16);
  if ( a1[1] == 0x555555555555555LL )
    std::_Throw_tree_length_error();
  v17 = 0LL;
  std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>((__int64)&v16);
  v18 = v14;
  *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                    a1,
                    (__int64)&v18,
                    v12);
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
