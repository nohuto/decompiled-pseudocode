/*
 * XREFs of ??$_Emplace@I@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@IPEAX@std@@_N@1@$$QEAI@Z @ 0x18056B24C
 * Callers:
 *     ?ProcessDownEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@@Z @ 0x18056EC20 (-ProcessDownEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Wi.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800F848C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18023599C (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@_N@std@@PEAX@st.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180318F84 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Emplace<unsigned int>(
        _QWORD *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 *v6; // r15
  __int64 *v7; // rax
  __int64 *v8; // rdx
  unsigned int v9; // ecx
  _DWORD *v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-30h] BYREF
  __int128 v13; // [rsp+30h] [rbp-20h]

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  v13 = (unsigned __int64)v7;
  v8 = v6;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v9 = *a3;
    do
    {
      *(_QWORD *)&v13 = v7;
      if ( *((_DWORD *)v7 + 7) >= v9 )
      {
        DWORD2(v13) = 1;
        v8 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        DWORD2(v13) = 0;
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( *((_BYTE *)v8 + 25) || *a3 < *((_DWORD *)v8 + 7) )
  {
    if ( a1[1] == 0x7FFFFFFFFFFFFFFLL )
      std::_Throw_tree_length_error();
    v12 = (unsigned __int64)a1;
    v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    v10[7] = *a3;
    *(_QWORD *)v10 = v6;
    *((_QWORD *)v10 + 1) = v6;
    *((_QWORD *)v10 + 2) = v6;
    *((_WORD *)v10 + 12) = 0;
    *((_QWORD *)&v12 + 1) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>((__int64)&v12);
    v12 = v13;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      a1,
                      (__int64)&v12,
                      (__int64)v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
