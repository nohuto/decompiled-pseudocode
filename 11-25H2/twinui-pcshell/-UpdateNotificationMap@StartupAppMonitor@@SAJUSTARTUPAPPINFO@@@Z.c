/*
 * XREFs of ?UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z @ 0x18029A81C
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x18005C120 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z @ 0x1801F41A0 (-CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1STARTUPAPPINFO@@QEAA@XZ @ 0x18005A178 (--1STARTUPAPPINFO@@QEAA@XZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x18005A388 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800A589C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$_Insert_or_assign@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAUSTARTUPAPPINFO@@@Z @ 0x18029A8D8 (--$_Insert_or_assign@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@USTARTUPAPPIN.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall StartupAppMonitor::UpdateNotificationMap(STARTUPAPPINFO *a1)
{
  __int64 v2; // rcx
  void *v3; // rdx
  const char *v4; // r9
  __int64 result; // rax
  unsigned int v6; // [rsp+20h] [rbp-58h]
  _BYTE v7[16]; // [rsp+28h] [rbp-50h] BYREF
  STARTUPAPPINFO *v8; // [rsp+38h] [rbp-40h]
  void *v9[4]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    v8 = a1;
    std::_Mutex_base::lock((std::_Mutex_base *)&StartupAppMonitor::s_showNotificationMapMutex);
    std::wstring::wstring((__int64)v9, (__int64)a1 + 40);
    std::map<std::wstring,STARTUPAPPINFO>::_Insert_or_assign<std::wstring,STARTUPAPPINFO>(v2, v7, v9, a1);
    wil::details::SetEvent((wil::details *)StartupAppMonitor::s_showNotificationMapUpdateEvent, v3);
    std::wstring::_Tidy_deallocate(v9);
    _Mtx_unlock((_Mtx_t)&StartupAppMonitor::s_showNotificationMapMutex);
    STARTUPAPPINFO::~STARTUPAPPINFO(a1);
    result = 0LL;
  }
  catch ( ... )
  {
    v6 = wil::details::in1diag3::Return_CaughtException(
           retaddr,
           (void *)0x150,
           (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
           v4);
    STARTUPAPPINFO::~STARTUPAPPINFO(v8);
    return v6;
  }
  return result;
}
