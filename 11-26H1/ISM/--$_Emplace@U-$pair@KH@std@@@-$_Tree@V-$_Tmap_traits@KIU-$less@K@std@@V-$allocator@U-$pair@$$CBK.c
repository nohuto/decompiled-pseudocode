/*
 * XREFs of ??$_Emplace@U?$pair@KH@std@@@?$_Tree@V?$_Tmap_traits@KIU?$less@K@std@@V?$allocator@U?$pair@$$CBKI@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKI@std@@PEAX@std@@_N@1@$$QEAU?$pair@KH@1@@Z @ 0x18010897C
 * Callers:
 *     ?SetGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x18010A048 (-SetGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 * Callees:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18006468C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KUGestureAnimationData@Input.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800B15CC (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CB578 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$cha_ea_1800CB578.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tset_traits@KU?$less@K@std@@V?$allocator@K@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@KPEAX@std@@@1@AEBK@Z @ 0x1800D2590 (--$_Find_lower_bound@K@-$_Tree@V-$_Tset_traits@KU-$less@K@std@@V-$allocator@K@2@$0A@@std@@@std@@.c)
 *     ??$?0U?$pair@KH@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKI@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKI@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKI@std@@PEAX@1@$$QEAU?$pair@KH@1@@Z @ 0x180108370 (--$-0U-$pair@KH@std@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBKI@std@@PEAX@std@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,unsigned int,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned int>>,0>>::_Emplace<std::pair<unsigned long,int>>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  _QWORD *lower; // rax
  _DWORD *v6; // r8
  __int128 v7; // xmm6
  _QWORD *v8; // rax
  __int64 v9; // rbx
  _QWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h]

  lower = std::_Tree<std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0>>::_Find_lower_bound<unsigned long>(
            a1,
            &v12,
            a3);
  v7 = *(_OWORD *)lower;
  v13 = lower[2];
  if ( *(_BYTE *)(v13 + 25) || *v6 < *(_DWORD *)(v13 + 28) )
  {
    if ( a1[1] == 0x666666666666666LL )
      std::_Throw_tree_length_error();
    v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,unsigned int>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,unsigned int>,void *>>>(
           v11,
           (__int64)a1,
           *a1,
           v6);
    v9 = v8[1];
    v8[1] = 0LL;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>,void *>>>((__int64)v11);
    v12 = v7;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>::_Insert_node(
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
