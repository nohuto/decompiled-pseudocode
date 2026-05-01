/*
 * XREFs of ?UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z @ 0x1802917C8
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x1800E17E0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z @ 0x1801E95A0 (-CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z.c)
 * Callees:
 *     ??1STARTUPAPPINFO@@QEAA@XZ @ 0x180030E00 (--1STARTUPAPPINFO@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$01PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031D64 (--$_Construct@$01PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800324B0 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800CA6B4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$_Insert_or_assign@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAUSTARTUPAPPINFO@@@Z @ 0x1802918A4 (--$_Insert_or_assign@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@USTARTUPAPPIN.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall StartupAppMonitor::UpdateNotificationMap(unsigned __int64 *a1)
{
  _OWORD *v2; // rdx
  __int64 v3; // rcx
  void *v4; // rdx
  const char *v5; // r9
  __int64 result; // rax
  unsigned int v7; // [rsp+20h] [rbp-58h]
  _BYTE v8[16]; // [rsp+28h] [rbp-50h] BYREF
  STARTUPAPPINFO *v9; // [rsp+38h] [rbp-40h]
  _OWORD v10[2]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    v9 = (STARTUPAPPINFO *)a1;
    std::_Mutex_base::lock((std::_Mutex_base *)&StartupAppMonitor::s_showNotificationMapMutex);
    v2 = a1 + 5;
    memset(v10, 0, sizeof(v10));
    if ( a1[8] > 7 )
      v2 = *(_OWORD **)v2;
    std::wstring::_Construct<2,unsigned short const *>(v10, v2, a1[7]);
    std::map<std::wstring,STARTUPAPPINFO>::_Insert_or_assign<std::wstring,STARTUPAPPINFO>(v3, v8, v10, a1);
    wil::details::SetEvent((wil::details *)StartupAppMonitor::s_showNotificationMapUpdateEvent, v4);
    std::wstring::_Tidy_deallocate(v10);
    _Mtx_unlock((_Mtx_t)&StartupAppMonitor::s_showNotificationMapMutex);
    STARTUPAPPINFO::~STARTUPAPPINFO((STARTUPAPPINFO *)a1);
    result = 0LL;
  }
  catch ( ... )
  {
    v7 = wil::details::in1diag3::Return_CaughtException(
           retaddr,
           (void *)0x150,
           (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
           v5);
    STARTUPAPPINFO::~STARTUPAPPINFO(v9);
    return v7;
  }
  return result;
}
