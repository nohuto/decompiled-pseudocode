/*
 * XREFs of ??0STARTUPAPPINFO@@QEAA@$$QEAU0@@Z @ 0x1802B4EF4
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x1800E17E0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z @ 0x1801E95A0 (-CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z.c)
 *     ??$?0V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAUSTARTUPAPPINFO@@@Z @ 0x18058395C (--$-0V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@USTARTUPAPPINFO@@@-$_Tree_tem.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall STARTUPAPPINFO::STARTUPAPPINFO(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r9

  *a1 = *a2;
  std::wstring::wstring((__int64)(a1 + 1), (__int64)(a2 + 1));
  std::wstring::wstring(v3 + 40, v2 + 40);
  std::wstring::wstring(v5 + 72, v4 + 72);
  std::wstring::wstring(v7 + 104, v6 + 104);
  *(_DWORD *)(v9 + 136) = *(_DWORD *)(v8 + 136);
  *(_QWORD *)(v9 + 144) = *(_QWORD *)(v8 + 144);
  std::wstring::wstring(v9 + 152, v8 + 152);
  return v10;
}
