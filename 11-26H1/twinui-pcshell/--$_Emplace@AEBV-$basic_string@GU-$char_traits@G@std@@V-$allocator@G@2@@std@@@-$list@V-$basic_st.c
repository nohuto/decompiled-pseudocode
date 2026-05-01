/*
 * XREFs of ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@QEAU21@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1802AAC6C
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x180030EA0 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x1801DF5B0 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 *     ?CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ @ 0x1801E6AC0 (-CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<std::wstring>::_Emplace<std::wstring const &>(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rcx
  _QWORD *v8; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) == 0x555555555555555LL )
    std::_Xlength_error("list too long");
  v8 = std::_Allocate<16,std::_Default_allocate_traits>(0x30uLL);
  std::wstring::wstring((__int64)(v8 + 2), a3);
  ++*(_QWORD *)(a1 + 8);
  v6 = *(_QWORD **)(a2 + 8);
  *v8 = a2;
  v8[1] = v6;
  *(_QWORD *)(a2 + 8) = v8;
  *v6 = v8;
  return v8;
}
