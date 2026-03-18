/*
 * XREFs of DrvGetDisplayConfigBufferSizesAndLeaveUserCrit @ 0x140047A1C
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x1401700F0 (NtUserGetDisplayConfigBufferSizes.c)
 * Callees:
 *     DispBrokerGetCurrentMode @ 0x14002C1E0 (DispBrokerGetCurrentMode.c)
 *     ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x140043ED8 (-vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400458F8 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x1401ABA3C (-DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvGetDisplayConfigBufferSizesAndLeaveUserCrit(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rdi
  int v3; // esi
  int v4; // ebx
  bool v6; // bp
  __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  int DisplayConfig; // eax
  bool v16; // [rsp+28h] [rbp-20h]
  __int64 *v17; // [rsp+30h] [rbp-18h] BYREF
  bool v18; // [rsp+38h] [rbp-10h]

  v2 = (unsigned int)a1;
  v3 = a1 & 7;
  v4 = 0;
  v6 = v3 == 4
    && ((unsigned int)DispBrokerGetCurrentMode(a1, (__int64)a2) == 3
     || (unsigned int)DispBrokerGetCurrentMode(a1, v13) == 2);
  v8 = *(__int64 **)(W32GetSessionState(a1) + 88);
  v17 = v8;
  v18 = !v6;
  if ( !v6 )
    GreAcquireSemaphoreShared<1,>(v8);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v7);
  WdLogSingleEntry1(4LL, v2);
  WdLogGlobalForLineNumber = 12101;
  if ( v3 == 4
    && ((unsigned int)DispBrokerGetCurrentMode(v10, v9) == 3 || (unsigned int)DispBrokerGetCurrentMode(v10, v14) == 2) )
  {
    if ( (unsigned int)DispBrokerGetCurrentMode(v10, v14) == 3 )
    {
      DisplayConfig = DispBrokerQueryDisplayConfig(v2 & 0xFFFFFFEF, v2 & 0x10, a2, 0LL, 0LL, v16);
      if ( DisplayConfig != -1073741789 )
        v4 = DisplayConfig;
    }
    else
    {
      v4 = -1073741790;
    }
  }
  else
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v10);
    v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(DxgkWin32kInterface + 208))((unsigned int)v2, a2);
  }
  WdLogSingleEntry1(4LL, v4);
  WdLogGlobalForLineNumber = 12132;
  NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(&v17);
  return (unsigned int)v4;
}
