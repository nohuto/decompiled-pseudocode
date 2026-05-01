/*
 * XREFs of ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1803A8364
 * Callers:
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1803A9118 (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CF550 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??$?MGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x18029A9EC (--$-MGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803151E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1803A6774 (--$-0AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree_temp_node@V-$allo.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1803AE044 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@V-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Emplace<std::wstring const &>(
        __int64 *a1,
        __int64 a2,
        wchar_t *a3)
{
  __int64 v3; // rdi
  __int64 v7; // rbx
  char v8; // cl
  __int64 *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rbx
  _QWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h]

  v3 = *a1;
  v15 = 0LL;
  v7 = *(_QWORD *)(v3 + 8);
  v14 = v7;
  while ( !*(_BYTE *)(v7 + 25) )
  {
    v14 = v7;
    v8 = std::operator<<unsigned short>((const wchar_t *)(v7 + 32), a3);
    if ( v8 )
    {
      LODWORD(v15) = 0;
    }
    else
    {
      LODWORD(v15) = 1;
      v3 = v7;
    }
    v9 = (__int64 *)(v7 + 16);
    if ( !v8 )
      v9 = (__int64 *)v7;
    v7 = *v9;
  }
  if ( *(_BYTE *)(v3 + 25) || (unsigned __int8)std::operator<<unsigned short>(a3, (const wchar_t *)(v3 + 32)) )
  {
    if ( a1[1] == 0x3FFFFFFFFFFFFFFLL )
      std::_Throw_tree_length_error();
    v10 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::wstring,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::wstring,void *>>>(
            v13,
            (__int64)a1,
            *a1,
            a3);
    v11 = v10[1];
    v10[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::wstring,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::wstring,void *>>>(v13);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v14,
                      v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v3;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
