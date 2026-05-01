/*
 * XREFs of ?TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x1805517AC
 * Callers:
 *     ?OnTerminateTimer@Win32AppStateManager@@AEAAXXZ @ 0x180551070 (-OnTerminateTimer@Win32AppStateManager@@AEAAXXZ.c)
 *     ?TerminateApp@Win32AppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180551430 (-TerminateApp@Win32AppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@W.c)
 * Callees:
 *     ??$DebugInfo@AEAY0CE@$$CBG@AppUsageTelemetry@@SAXAEAY0CE@$$CBG@Z @ 0x18054F5F4 (--$DebugInfo@AEAY0CE@$$CBG@AppUsageTelemetry@@SAXAEAY0CE@$$CBG@Z.c)
 *     ?TerminateApp@Win32AppInfo@@QEAAX_N@Z @ 0x18055138C (-TerminateApp@Win32AppInfo@@QEAAX_N@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1805522E8 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$s.c)
 */

char __fastcall Win32AppStateManager::TerminateAppOnce(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v4; // rdi
  char v5; // si
  __int64 v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = (_QWORD *)(a1 + 64);
  v5 = 0;
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::find(
    a1 + 64,
    &v8,
    a2);
  v6 = v8;
  if ( v8 != *v4 )
  {
    AppUsageTelemetry::DebugInfo<unsigned short const (&)[36]>(L"Found active app entry to terminate");
    Win32AppInfo::TerminateApp(*(Win32AppInfo **)(v6 + 64), a3);
    return 1;
  }
  return v5;
}
