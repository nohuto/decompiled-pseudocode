/*
 * XREFs of ??$_Insert_or_assign@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAUSTARTUPAPPINFO@@@Z @ 0x18029A8D8
 * Callers:
 *     ?UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z @ 0x18029A81C (-UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AEF48 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800F848C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x18023A6FC (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180318F84 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$?0V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAUSTARTUPAPPINFO@@@Z @ 0x18055F944 (--$-0V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@USTARTUPAPPINFO@@@-$_Tree_tem.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18055FDFC (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$cha_ea_18055FDFC.c)
 */

__int64 __fastcall std::map<std::wstring,STARTUPAPPINFO>::_Insert_or_assign<std::wstring,STARTUPAPPINFO>(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4)
{
  int v5; // r14d
  __int64 v8; // rbx
  unsigned __int64 v9; // r11
  int v10; // eax
  unsigned __int64 *v11; // r11
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rbx
  _BYTE v16[16]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v17; // [rsp+40h] [rbp-28h] BYREF

  v5 = StartupAppMonitor::s_showNotificationMap;
  v8 = StartupAppMonitor::s_showNotificationMap;
  v9 = *(_QWORD *)(StartupAppMonitor::s_showNotificationMap + 8);
  v17 = v9;
  while ( !*(_BYTE *)(v9 + 25) )
  {
    *(_QWORD *)&v17 = v9;
    LOBYTE(v10) = std::wstring::compare((_QWORD *)(v9 + 32), a3);
    if ( v10 >= 0 )
    {
      v8 = (__int64)v11;
      DWORD2(v17) = 1;
      v9 = *v11;
    }
    else
    {
      DWORD2(v17) = 0;
      v9 = v11[2];
    }
  }
  if ( *(_BYTE *)(v8 + 25) || (LOBYTE(v12) = std::wstring::compare(a3, (unsigned __int16 *)(v8 + 32)), v12 < 0) )
  {
    if ( qword_18089A0D0 == 0x108421084210842LL )
      std::_Throw_tree_length_error();
    v13 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,STARTUPAPPINFO>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,STARTUPAPPINFO>,void *>>>(
            (unsigned int)v16,
            (unsigned int)&StartupAppMonitor::s_showNotificationMap,
            v5,
            (_DWORD)a3,
            a4);
    v14 = *(_QWORD *)(v13 + 8);
    *(_QWORD *)(v13 + 8) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,STARTUPAPPINFO>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,STARTUPAPPINFO>,void *>>>(v16);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      &StartupAppMonitor::s_showNotificationMap,
                      (__int64)&v17,
                      v14);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)(v8 + 64) = *(_QWORD *)a4;
    std::wstring::operator=(v8 + 72, a4 + 8);
    std::wstring::operator=(v8 + 104, a4 + 40);
    std::wstring::operator=(v8 + 136, a4 + 72);
    std::wstring::operator=(v8 + 168, a4 + 104);
    *(_DWORD *)(v8 + 200) = *(_DWORD *)(a4 + 136);
    *(_QWORD *)(v8 + 208) = *(_QWORD *)(a4 + 144);
    std::wstring::operator=(v8 + 216, a4 + 152);
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
