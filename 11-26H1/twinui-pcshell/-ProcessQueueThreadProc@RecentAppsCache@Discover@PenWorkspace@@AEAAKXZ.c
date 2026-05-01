/*
 * XREFs of ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800C9958
 * Callers:
 *     ?s_ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@CAKPEAX@Z @ 0x1803EE020 (-s_ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@CAKPEAX@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800C944C (-SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800C98D4 (-PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x1800CA1E4 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800CB114 (-LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?pop_front@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@QEAAXXZ @ 0x18016CAC8 (-pop_front@-$deque@UForegroundSwitchData@Discover@PenWorkspace@@V-$allocator@UForegroundSwitchDa.c)
 *     _anonymous_namespace_::IsTimeMoreRecent @ 0x1802139D0 (_anonymous_namespace_--IsTimeMoreRecent.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180289FE8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     _anonymous_namespace_::GetCurTime @ 0x1802BB86C (_anonymous_namespace_--GetCurTime.c)
 *     ?EnsureAppResolver@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1803EBC18 (-EnsureAppResolver@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?FailedToLoadDataFromDisk@PenWorkspaceBrokerTelemetry@@SAXXZ @ 0x1803EBE7C (-FailedToLoadDataFromDisk@PenWorkspaceBrokerTelemetry@@SAXXZ.c)
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1803EC380 (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?ProcessForegroundSwitch@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUForegroundSwitchData@23@AEBU_FILETIME@@@Z @ 0x1803ECDAC (-ProcessForegroundSwitch@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUForegroundSwitchData@23.c)
 *     ?front@?$queue@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$deque@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V?$allocator@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@@std@@@std@@@std@@QEAAAEAUPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@XZ @ 0x1803EDE38 (-front@-$queue@UPendingShowHideViewData@TabTipAdapter@KeyboardHosting@@V-$deque@UPendingShowHide.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::ProcessQueueThreadProc(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  HANDLE CurrentThread; // rax
  unsigned int v3; // edi
  int Defaults; // eax
  unsigned int v5; // r8d
  int v6; // r9d
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // xmm0_8
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  int v19; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct _FILETIME FileTime; // [rsp+68h] [rbp+38h] BYREF
  RTL_SRWLOCK *v22; // [rsp+70h] [rbp+40h] BYREF

  CurrentThread = GetCurrentThread();
  SetThreadDescription(CurrentThread, L"PenWorkspace work queue");
  CoInitializeEx(0LL, 2u);
  v3 = 0;
  if ( (int)PenWorkspace::Discover::RecentAppsCache::EnsureAppResolver(this) >= 0 )
  {
    if ( (int)PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk(this) < 0 )
    {
      PenWorkspaceBrokerTelemetry::FailedToLoadDataFromDisk();
      Defaults = PenWorkspace::Discover::RecentAppsCache::LoadDefaults(this);
      if ( Defaults < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x152,
          (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)(unsigned int)Defaults);
    }
    anonymous_namespace_::GetCurTime((LPFILETIME)this + 22);
    v7 = 0LL;
    FileTime = (struct _FILETIME)(*((_QWORD *)this + 22) + 72000000000LL);
    *((struct _FILETIME *)this + 22) = FileTime;
    while ( (v7 || wil::handle_wait(*((wil **)this + 19), (void *)0xFFFFFFFFLL, v5, v6))
         && !(unsigned __int8)std::_Atomic_storage<bool,1>::load((char *)this + 200) )
    {
      wil::AcquireSRWLockExclusive(&v22, (RTL_SRWLOCK *)this + 20);
      if ( *((_QWORD *)this + 17) )
      {
        v8 = std::queue<KeyboardHosting::TabTipAdapter::PendingShowHideViewData>::front();
        v9 = *(_QWORD *)v8;
        LODWORD(v8) = *(_DWORD *)(v8 + 8);
        v18 = v9;
        v19 = v8;
        std::deque<PenWorkspace::Discover::ForegroundSwitchData>::pop_front(v11, v10);
        v7 = *((_QWORD *)this + 17);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v22);
        FileTime = 0LL;
        anonymous_namespace_::GetCurTime(&FileTime);
        PenWorkspace::Discover::RecentAppsCache::ProcessForegroundSwitch(
          this,
          (struct PenWorkspace::Discover::ForegroundSwitchData *)&v18,
          &FileTime);
        if ( (unsigned __int8)anonymous_namespace_::IsTimeMoreRecent(&FileTime, (char *)this + 176) )
        {
          v12 = PenWorkspace::Discover::RecentAppsCache::PurgeLowUsageApps((RTL_SRWLOCK *)this);
          if ( v12 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x189,
              (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)(unsigned int)v12);
          v13 = PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(this);
          if ( v13 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x18B,
              (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)(unsigned int)v13);
          v14 = *(_QWORD *)&FileTime + 72000000000LL;
          *((_DWORD *)this + 44) = FileTime.dwLowDateTime - 1014444032;
          *((_DWORD *)this + 45) = HIDWORD(v14);
        }
      }
      else
      {
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v22);
      }
    }
    v15 = PenWorkspace::Discover::RecentAppsCache::PurgeLowUsageApps((RTL_SRWLOCK *)this);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x191,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v15);
    v16 = PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(this);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x194,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v16);
    v3 = 1;
  }
  CoUninitialize();
  (*(void (__fastcall **)(PenWorkspace::Discover::RecentAppsCache *))(*(_QWORD *)this + 16LL))(this);
  return v3;
}
