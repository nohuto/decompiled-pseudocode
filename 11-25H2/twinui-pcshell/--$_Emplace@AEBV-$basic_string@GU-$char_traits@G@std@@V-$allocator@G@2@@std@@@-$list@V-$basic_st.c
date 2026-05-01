/*
 * XREFs of ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@QEAU21@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1802B6688
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x1800589A0 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 *     ?CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ @ 0x18005C6E0 (-CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ.c)
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x18005E1C0 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<std::wstring>::_Emplace<std::wstring const &>(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rcx
  _QWORD *v8; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) == 0x555555555555555LL )
    std::_Xlength_error("list too long");
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  std::wstring::wstring((__int64)(v8 + 2), a3);
  ++*(_QWORD *)(a1 + 8);
  v6 = *(_QWORD **)(a2 + 8);
  *v8 = a2;
  v8[1] = v6;
  *(_QWORD *)(a2 + 8) = v8;
  *v6 = v8;
  return v8;
}
