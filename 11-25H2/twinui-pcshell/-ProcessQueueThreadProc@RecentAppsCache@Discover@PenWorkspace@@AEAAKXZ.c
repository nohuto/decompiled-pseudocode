/*
 * XREFs of ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800A49F8
 * Callers:
 *     ?s_ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@CAKPEAX@Z @ 0x1803E48A0 (-s_ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@CAKPEAX@Z.c)
 * Callees:
 *     ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18002BF2C (-SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800A4570 (-PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800A45F4 (-LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x1800A53F0 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180142B50 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     _anonymous_namespace_::IsTimeMoreRecent @ 0x1802228C0 (_anonymous_namespace_--IsTimeMoreRecent.c)
 *     _anonymous_namespace_::GetCurTime @ 0x1802C48EC (_anonymous_namespace_--GetCurTime.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C5854 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?EnsureAppResolver@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1803E25A4 (-EnsureAppResolver@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?FailedToLoadDataFromDisk@PenWorkspaceBrokerTelemetry@@SAXXZ @ 0x1803E27FC (-FailedToLoadDataFromDisk@PenWorkspaceBrokerTelemetry@@SAXXZ.c)
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1803E2D20 (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?ProcessForegroundSwitch@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUForegroundSwitchData@23@AEBU_FILETIME@@@Z @ 0x1803E375C (-ProcessForegroundSwitch@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUForegroundSwitchData@23.c)
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
  struct _FILETIME v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // xmm0_8
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  int v18; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct _FILETIME FileTime; // [rsp+68h] [rbp+38h] BYREF
  char v21; // [rsp+70h] [rbp+40h] BYREF

  CurrentThread = GetCurrentThread();
  SetThreadDescription(CurrentThread, L"PenWorkspace work queue");
  CoInitializeEx(0LL, 2u);
  v3 = 0;
  if ( (int)PenWorkspace::Discover::RecentAppsCache::EnsureAppResolver(this) >= 0 )
  {
    if ( (int)PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk((RTL_SRWLOCK *)this) < 0 )
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
    v8 = (struct _FILETIME)(*((_QWORD *)this + 22) + 72000000000LL);
    FileTime = v8;
    *((_DWORD *)this + 44) = v8.dwLowDateTime;
LABEL_6:
    *((_DWORD *)this + 45) = v8.dwHighDateTime;
    while ( (v7 || wil::handle_wait(*((wil **)this + 19), (void *)0xFFFFFFFFLL, v5, v6))
         && !(unsigned __int8)std::_Atomic_storage<bool,1>::load((char *)this + 200) )
    {
      wil::AcquireSRWLockExclusive(&v21, (char *)this + 160);
      v9 = *((_QWORD *)this + 17);
      if ( v9 )
      {
        v7 = v9 - 1;
        v10 = *(__int64 **)(*((_QWORD *)this + 14) + 8 * (*((_QWORD *)this + 16) & (*((_QWORD *)this + 15) - 1LL)));
        v11 = *v10;
        LODWORD(v10) = *((_DWORD *)v10 + 2);
        v17 = v11;
        v18 = (int)v10;
        *((_QWORD *)this + 17) = v9 - 1;
        if ( v9 == 1 )
          *((_QWORD *)this + 16) = 0LL;
        else
          ++*((_QWORD *)this + 16);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v21);
        FileTime = 0LL;
        anonymous_namespace_::GetCurTime(&FileTime);
        PenWorkspace::Discover::RecentAppsCache::ProcessForegroundSwitch(
          this,
          (struct PenWorkspace::Discover::ForegroundSwitchData *)&v17,
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
          v8 = (struct _FILETIME)(*(_QWORD *)&FileTime + 72000000000LL);
          *((_DWORD *)this + 44) = FileTime.dwLowDateTime - 1014444032;
          goto LABEL_6;
        }
      }
      else
      {
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v21);
      }
    }
    v14 = PenWorkspace::Discover::RecentAppsCache::PurgeLowUsageApps((RTL_SRWLOCK *)this);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x191,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v14);
    v15 = PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(this);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x194,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v15);
    v3 = 1;
  }
  CoUninitialize();
  (*(void (__fastcall **)(PenWorkspace::Discover::RecentAppsCache *))(*(_QWORD *)this + 16LL))(this);
  return v3;
}
