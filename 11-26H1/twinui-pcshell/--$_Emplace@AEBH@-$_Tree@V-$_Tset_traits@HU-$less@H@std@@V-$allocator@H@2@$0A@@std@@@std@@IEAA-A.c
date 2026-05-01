/*
 * XREFs of ??$_Emplace@AEBH@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@HPEAX@std@@_N@1@AEBH@Z @ 0x18061E5B4
 * Callers:
 *     ?AreValidFastPathEnabledStates@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z @ 0x1806235FC (-AreValidFastPathEnabledStates@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CF550 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18028599C (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@_N@std@@PEAX@st.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803151E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBH@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@HPEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@HPEAX@std@@@1@PEAU?$_Tree_node@HPEAX@1@AEBH@Z @ 0x18061D348 (--$-0AEBH@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@HPEAX@std@@@std@@@std@@QEAA@AEAV-$allocat.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<int,std::less<int>,std::allocator<int>,0>>::_Emplace<int const &>(
        __int64 *a1,
        __int64 a2,
        int *a3)
{
  __int64 v3; // r10
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // r11d
  char v9; // cl
  __int64 *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rbx
  _QWORD v14[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF

  v3 = *a1;
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 8);
  v15 = (unsigned __int64)v7;
  if ( !*(_BYTE *)(v7 + 25) )
  {
    v8 = *a3;
    do
    {
      *(_QWORD *)&v15 = v7;
      if ( *(_DWORD *)(v7 + 28) >= v8 )
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
      v10 = (__int64 *)(v7 + 16);
      if ( !v9 )
        v10 = (__int64 *)v7;
      v7 = *v10;
    }
    while ( !*(_BYTE *)(*v10 + 25) );
  }
  if ( *(_BYTE *)(v6 + 25) || *a3 < *(_DWORD *)(v6 + 28) )
  {
    if ( a1[1] == 0x7FFFFFFFFFFFFFFLL )
      std::_Throw_tree_length_error();
    v11 = std::_Tree_temp_node<std::allocator<std::_Tree_node<int,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<int,void *>>>(
            v14,
            (__int64)a1,
            v3,
            a3);
    v12 = v11[1];
    v11[1] = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>((__int64)v14);
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
