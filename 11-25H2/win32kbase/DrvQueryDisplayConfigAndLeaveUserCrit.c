/*
 * XREFs of DrvQueryDisplayConfigAndLeaveUserCrit @ 0x140047BB4
 * Callers:
 *     NtUserQueryDisplayConfig @ 0x140172D30 (NtUserQueryDisplayConfig.c)
 * Callees:
 *     DispBrokerGetCurrentMode @ 0x14002C1E0 (DispBrokerGetCurrentMode.c)
 *     ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x140043ED8 (-vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400458F8 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x1401ABA3C (-DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvQueryDisplayConfigAndLeaveUserCrit(
        __int64 a1,
        unsigned int *a2,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a3,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a4)
{
  __int64 v4; // rbx
  int v5; // esi
  bool v9; // di
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v15; // ebx
  __int64 v17; // rdx
  __int64 v18; // rdx
  bool v19; // [rsp+28h] [rbp-30h]
  __int64 *v20; // [rsp+30h] [rbp-28h] BYREF
  bool v21; // [rsp+38h] [rbp-20h]
  unsigned int v22; // [rsp+60h] [rbp+8h] BYREF

  v4 = (unsigned int)a1;
  v5 = a1 & 7;
  v9 = v5 == 4
    && ((unsigned int)DispBrokerGetCurrentMode(a1, (__int64)a2) == 3
     || (unsigned int)DispBrokerGetCurrentMode(a1, v17) == 2);
  v11 = *(__int64 **)(W32GetSessionState(a1) + 88);
  v20 = v11;
  v21 = !v9;
  if ( !v9 )
    GreAcquireSemaphoreShared<1,>(v11);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v10);
  WdLogSingleEntry1(4LL, v4);
  WdLogGlobalForLineNumber = 12178;
  if ( v5 == 4
    && ((unsigned int)DispBrokerGetCurrentMode(v13, v12) == 3 || (unsigned int)DispBrokerGetCurrentMode(v13, v18) == 2) )
  {
    if ( (unsigned int)DispBrokerGetCurrentMode(v13, v18) == 3 )
    {
      v22 = *a2;
      v15 = DispBrokerQueryDisplayConfig(v4 & 0xFFFFFFEF, v4 & 0x10, &v22, a3, a4, v19);
      if ( v15 >= 0 )
        *a2 = v22;
    }
    else
    {
      v15 = -1073741790;
    }
  }
  else
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v13);
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *, enum DISPLAYCONFIG_TOPOLOGY_ID *))(DxgkWin32kInterface + 216))(
            (unsigned int)v4 & 0xFFFFFFEF,
            v4 & 0x10,
            a2,
            a3,
            a4);
  }
  WdLogSingleEntry1(4LL, v15);
  WdLogGlobalForLineNumber = 12215;
  NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(&v20);
  return (unsigned int)v15;
}
