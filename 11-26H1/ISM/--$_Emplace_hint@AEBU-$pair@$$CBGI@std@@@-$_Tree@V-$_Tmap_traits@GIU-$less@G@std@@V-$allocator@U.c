/*
 * XREFs of ??$_Emplace_hint@AEBU?$pair@$$CBGI@std@@@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBGI@1@@Z @ 0x18006C18C
 * Callers:
 *     ??0?$map@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBGI@std@@@1@@Z @ 0x18006C0E4 (--0-$map@GIU-$less@G@std@@V-$allocator@U-$pair@$$CBGI@std@@@2@@std@@QEAA@V-$initializer_list@U-$.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800575A0 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$set@V-$shared_ptr@UHotKeyInfo@@.c)
 *     ??$_Find_hint@G@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@AEBG@Z @ 0x18006C258 (--$_Find_hint@G@-$_Tree@V-$_Tmap_traits@GIU-$less@G@std@@V-$allocator@U-$pair@$$CBGI@std@@@2@$0A.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800B15CC (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>::_Emplace_hint<std::pair<unsigned short const,unsigned int> const &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rax
  __int128 v5; // xmm6
  __int64 v6; // rbx
  __int64 v7; // rax
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]

  v4 = std::_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>::_Find_hint<unsigned short>(
         a1,
         &v9,
         a2,
         a3);
  v5 = *(_OWORD *)v4;
  v10 = *(_QWORD *)(v4 + 16);
  if ( (_BYTE)v10 )
    return v5;
  if ( qword_180253EF8 == 0x666666666666666LL )
    std::_Throw_tree_length_error();
  v6 = qword_180253EF0;
  *(_QWORD *)&v9 = &qword_180253EF0;
  *((_QWORD *)&v9 + 1) = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits>(40LL);
  *(_QWORD *)(v7 + 28) = *a3;
  *(_QWORD *)v7 = v6;
  *(_QWORD *)(v7 + 8) = v6;
  *(_QWORD *)(v7 + 16) = v6;
  *(_WORD *)(v7 + 24) = 0;
  v9 = v5;
  return std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::set<std::shared_ptr<HotKeyInfo>>>>>::_Insert_node(
           (__int64)&qword_180253EF0,
           (__int64)&v9,
           v7);
}
