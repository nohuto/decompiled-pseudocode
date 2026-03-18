/*
 * XREFs of DrvGetDisplayConfigBufferSizesAndLeaveUserCrit @ 0x14003D0E4
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x1400FA930 (NtUserGetDisplayConfigBufferSizes.c)
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

__int64 __fastcall DrvGetDisplayConfigBufferSizesAndLeaveUserCrit(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rdi
  int v3; // ebx
  bool v5; // si
  __int64 SessionState; // rax
  int v7; // r8d
  const wchar_t *v8; // rcx
  _DWORD *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v13; // edi
  int v14; // ecx
  int v15; // r8d
  struct _ERESOURCE *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  int DisplayConfig; // eax
  bool v23; // [rsp+28h] [rbp-20h]

  v2 = (unsigned int)a1;
  v3 = a1 & 7;
  v5 = v3 != 4 || (unsigned int)DispBrokerGetCurrentMode() != 3 && (unsigned int)DispBrokerGetCurrentMode() != 2;
  SessionState = W32GetSessionState(a1);
  v8 = L"DynamicModeChange";
  v9 = *(_DWORD **)(SessionState + 88);
  if ( v5 )
  {
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        (unsigned int)L"DynamicModeChange",
        (unsigned int)&LockAcquireShared,
        v7,
        *v9 + 624,
        (__int64)L"DynamicModeChange");
    EngAcquireSemaphoreShared((HSEMAPHORE)(*(_QWORD *)v9 + 624LL));
    GrepAcquireLockValidate<1>();
  }
  UserSessionSwitchLeaveCritWithNonPaged(v8);
  WdLogSingleEntry1(4LL, v2);
  WdLogGlobalForLineNumber = 11957;
  if ( v3 == 4 && ((unsigned int)DispBrokerGetCurrentMode() == 3 || (unsigned int)DispBrokerGetCurrentMode() == 2) )
  {
    if ( (unsigned int)DispBrokerGetCurrentMode() == 3 )
    {
      DisplayConfig = DispBrokerQueryDisplayConfig(v2 & 0xFFFFFFEF, v2 & 0x10, a2, 0LL, 0LL, v23);
      v13 = 0;
      if ( DisplayConfig != -1073741789 )
        v13 = DisplayConfig;
    }
    else
    {
      v13 = -1073741790;
    }
  }
  else
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v11, v10);
    v13 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(DxgkWin32kInterface + 208))((unsigned int)v2, a2);
  }
  WdLogSingleEntry1(4LL, v13);
  WdLogGlobalForLineNumber = 11988;
  if ( v5 )
  {
    v16 = (struct _ERESOURCE *)(*(_QWORD *)v9 + 624LL);
    if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v14, (unsigned int)&LockRelease, v15, *v9 + 624, (__int64)L"DynamicModeChange");
    v17 = W32GetCurrentThreadCrossSessionCheck();
    v18 = v17 + 8;
    v19 = -v17;
    if ( (v18 & -(__int64)(v19 != 0)) != 0 && (*(_BYTE *)((v18 & -(__int64)(v19 != 0)) + 9))-- == 1 )
      *(_QWORD *)(v18 & -(__int64)(v19 != 0)) &= ~2uLL;
    GreReleaseSemaphoreSharedInternal(v16);
  }
  return (unsigned int)v13;
}
