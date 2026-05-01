/*
 * XREFs of ??$_Insert_or_assign@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAUSTARTUPAPPINFO@@@Z @ 0x1802918A4
 * Callers:
 *     ?UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z @ 0x1802917C8 (-UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CF550 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??$?MGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x18029A9EC (--$-MGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803151E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAUSTARTUPAPPINFO@@@Z @ 0x18058395C (--$-0V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@USTARTUPAPPINFO@@@-$_Tree_tem.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180583E10 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$cha_ea_180583E10.c)
 */

__int64 __fastcall std::map<std::wstring,STARTUPAPPINFO>::_Insert_or_assign<std::wstring,STARTUPAPPINFO>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdi
  char v9; // cl
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  _BYTE v14[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+48h] [rbp-20h]

  v4 = StartupAppMonitor::s_showNotificationMap;
  v16 = 0LL;
  v8 = *(_QWORD *)(StartupAppMonitor::s_showNotificationMap + 8);
  v15 = v8;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    v15 = v8;
    v9 = std::operator<<unsigned short>(v8 + 32, a3);
    if ( v9 )
    {
      LODWORD(v16) = 0;
    }
    else
    {
      LODWORD(v16) = 1;
      v4 = v8;
    }
    v10 = (__int64 *)(v8 + 16);
    if ( !v9 )
      v10 = (__int64 *)v8;
    v8 = *v10;
  }
  if ( *(_BYTE *)(v4 + 25) || (unsigned __int8)std::operator<<unsigned short>(a3, v4 + 32) )
  {
    if ( qword_1808DA7A8 == 0x108421084210842LL )
      std::_Throw_tree_length_error();
    v11 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,STARTUPAPPINFO>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,STARTUPAPPINFO>,void *>>>(
            (unsigned int)v14,
            (unsigned int)&StartupAppMonitor::s_showNotificationMap,
            StartupAppMonitor::s_showNotificationMap,
            a3,
            a4);
    v12 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 8) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,STARTUPAPPINFO>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,STARTUPAPPINFO>,void *>>>(v14);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      (__int64)&StartupAppMonitor::s_showNotificationMap,
                      (__int64)&v15,
                      v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)(v4 + 64) = *(_QWORD *)a4;
    std::wstring::operator=((_QWORD *)(v4 + 72), (_QWORD *)(a4 + 8));
    std::wstring::operator=((_QWORD *)(v4 + 104), (_QWORD *)(a4 + 40));
    std::wstring::operator=((_QWORD *)(v4 + 136), (_QWORD *)(a4 + 72));
    std::wstring::operator=((_QWORD *)(v4 + 168), (_QWORD *)(a4 + 104));
    *(_DWORD *)(v4 + 200) = *(_DWORD *)(a4 + 136);
    *(_QWORD *)(v4 + 208) = *(_QWORD *)(a4 + 144);
    std::wstring::operator=((_QWORD *)(v4 + 216), (_QWORD *)(a4 + 152));
    *(_QWORD *)a2 = v4;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
