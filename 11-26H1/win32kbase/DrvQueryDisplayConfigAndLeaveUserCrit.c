/*
 * XREFs of DrvQueryDisplayConfigAndLeaveUserCrit @ 0x14003D2F0
 * Callers:
 *     NtUserQueryDisplayConfig @ 0x1400FB0F0 (NtUserQueryDisplayConfig.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EngAcquireSemaphoreShared @ 0x14001C5E0 (EngAcquireSemaphoreShared.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     W32GetCurrentThreadCrossSessionCheck @ 0x14003D690 (W32GetCurrentThreadCrossSessionCheck.c)
 *     ??$GrepAcquireLockValidate@$00@@YAXXZ @ 0x14003D720 (--$GrepAcquireLockValidate@$00@@YAXXZ.c)
 *     DispBrokerGetCurrentMode @ 0x14007D610 (DispBrokerGetCurrentMode.c)
 *     ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x14007D67C (-DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvQueryDisplayConfigAndLeaveUserCrit(
        __int64 a1,
        unsigned int *a2,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a3,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a4)
{
  __int64 v4; // rdi
  int v5; // ebx
  bool v9; // si
  __int64 SessionState; // rax
  int v11; // r8d
  const wchar_t *v12; // rcx
  _DWORD *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v17; // edi
  int v18; // ecx
  int v19; // r8d
  struct _ERESOURCE *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  bool v26; // [rsp+28h] [rbp-30h]
  unsigned int v27; // [rsp+60h] [rbp+8h] BYREF

  v4 = (unsigned int)a1;
  v5 = a1 & 7;
  v9 = v5 != 4 || (unsigned int)DispBrokerGetCurrentMode() != 3 && (unsigned int)DispBrokerGetCurrentMode() != 2;
  SessionState = W32GetSessionState(a1);
  v12 = L"DynamicModeChange";
  v13 = *(_DWORD **)(SessionState + 88);
  if ( v9 )
  {
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        (unsigned int)L"DynamicModeChange",
        (unsigned int)&LockAcquireShared,
        v11,
        *v13 + 624,
        (__int64)L"DynamicModeChange");
    EngAcquireSemaphoreShared((HSEMAPHORE)(*(_QWORD *)v13 + 624LL));
    GrepAcquireLockValidate<1>();
  }
  UserSessionSwitchLeaveCritWithNonPaged(v12);
  WdLogSingleEntry1(4LL, v4);
  WdLogGlobalForLineNumber = 12034;
  if ( v5 == 4 && ((unsigned int)DispBrokerGetCurrentMode() == 3 || (unsigned int)DispBrokerGetCurrentMode() == 2) )
  {
    if ( (unsigned int)DispBrokerGetCurrentMode() == 3 )
    {
      v27 = *a2;
      v17 = DispBrokerQueryDisplayConfig(v4 & 0xFFFFFFEF, v4 & 0x10, &v27, a3, a4, v26);
      if ( v17 >= 0 )
        *a2 = v27;
    }
    else
    {
      v17 = -1073741790;
    }
  }
  else
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v15, v14);
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *, enum DISPLAYCONFIG_TOPOLOGY_ID *))(DxgkWin32kInterface + 216))(
            (unsigned int)v4 & 0xFFFFFFEF,
            v4 & 0x10,
            a2,
            a3,
            a4);
  }
  WdLogSingleEntry1(4LL, v17);
  WdLogGlobalForLineNumber = 12071;
  if ( v9 )
  {
    v20 = *(struct _ERESOURCE **)v13;
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v18,
        (unsigned int)&LockRelease,
        v19,
        (_DWORD)v20 + 624,
        (__int64)L"DynamicModeChange");
    v21 = W32GetCurrentThreadCrossSessionCheck();
    v22 = v21 + 8;
    v23 = -v21;
    if ( (v22 & -(__int64)(v23 != 0)) != 0 && (*(_BYTE *)((v22 & -(__int64)(v23 != 0)) + 9))-- == 1 )
      *(_QWORD *)(v22 & -(__int64)(v23 != 0)) &= ~2uLL;
    GreReleaseSemaphoreSharedInternal(v20 + 6);
  }
  return (unsigned int)v17;
}
