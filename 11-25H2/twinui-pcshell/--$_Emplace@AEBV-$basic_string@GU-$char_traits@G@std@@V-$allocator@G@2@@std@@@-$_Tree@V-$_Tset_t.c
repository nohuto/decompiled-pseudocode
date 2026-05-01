/*
 * XREFs of ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18039F858
 * Callers:
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1803A0598 (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800F848C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x18023A6FC (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180318F84 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18039DEB4 (--$-0AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree_temp_node@V-$allo.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1803A4DBC (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@V-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Emplace<std::wstring const &>(
        __int64 *a1,
        __int64 a2,
        unsigned __int16 *a3)
{
  __int64 v4; // r14
  _QWORD *v7; // rbx
  unsigned __int64 v8; // r11
  int v9; // eax
  _QWORD *v10; // r11
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rbx
  _QWORD v15[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF

  v4 = *a1;
  v7 = (_QWORD *)*a1;
  v8 = *(_QWORD *)(*a1 + 8);
  v16 = v8;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    *(_QWORD *)&v16 = v8;
    LOBYTE(v9) = std::wstring::compare((_QWORD *)(v8 + 32), a3);
    if ( v9 >= 0 )
    {
      v7 = v10;
      DWORD2(v16) = 1;
      v8 = *v10;
    }
    else
    {
      DWORD2(v16) = 0;
      v8 = v10[2];
    }
  }
  if ( *((_BYTE *)v7 + 25) || (LOBYTE(v11) = std::wstring::compare(a3, (unsigned __int16 *)v7 + 16), v11 < 0) )
  {
    if ( a1[1] == 0x3FFFFFFFFFFFFFFLL )
      std::_Throw_tree_length_error();
    v12 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::wstring,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::wstring,void *>>>(
            v15,
            (__int64)a1,
            v4,
            (__int64)a3);
    v13 = v12[1];
    v12[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::wstring,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::wstring,void *>>>(v15);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      a1,
                      (__int64)&v16,
                      v13);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
