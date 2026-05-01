/*
 * XREFs of ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x1803A1C30
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180074CE0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??$AppLaunched@W4Location@PerfTrack@@PEBG@AppLaunchTelemetry@PerfTrack@@SAX$$QEAW4Location@1@$$QEAPEBG@Z @ 0x1803A0188 (--$AppLaunched@W4Location@PerfTrack@@PEBG@AppLaunchTelemetry@PerfTrack@@SAX$$QEAW4Location@1@$$Q.c)
 *     ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x1803A1248 (-ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z.c)
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1803A16B0 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     ?OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1803A1E34 (-OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::LaunchOrCloseAppAsync(
        CortanaStoreAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  CortanaStoreAppExperienceManager *v3; // rbx
  ExperienceManagerUtils *v4; // rcx
  winrt::hstring *v5; // rax
  CortanaStoreAppExperienceManager *v6; // rcx
  int v7; // eax
  const char *v8; // r9
  unsigned int v9; // ebx
  __int64 result; // rax
  HWND v11; // rsi
  HMONITOR v12; // r14
  HMONITOR v13; // rdi
  HRESULT WindowAttribute; // eax
  winrt::hstring *StoreCortanaAumId; // rax
  CortanaStoreAppExperienceManager *v16; // rcx
  int v17; // eax
  unsigned int v18; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int pvAttribute; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+58h] [rbp+10h] BYREF
  const unsigned __int16 *v22; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int32 *v23; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    v3 = (CortanaStoreAppExperienceManager *)((char *)this - 120);
    v4 = (ExperienceManagerUtils *)*((_QWORD *)this + 14);
    if ( v4 )
    {
      v11 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(v4, a2);
      v12 = MonitorFromWindow(v11, 0);
      v13 = MonitorFromRect((LPCRECT)((char *)this + 184), 0);
      pvAttribute = 0;
      WindowAttribute = DwmGetWindowAttribute(v11, 0xEu, &pvAttribute, 4u);
      if ( WindowAttribute < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1F6,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)WindowAttribute);
      if ( pvAttribute || v12 != v13 )
      {
        StoreCortanaAumId = CortanaExperienceHelpers::GetStoreCortanaAumId((CortanaExperienceHelpers::Testing *)&v23);
        v22 = winrt::hstring::c_str(StoreCortanaAumId);
        v21 = 38;
        PerfTrack::AppLaunchTelemetry::AppLaunched<enum PerfTrack::Location,unsigned short const *>(&v21, &v22);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v23);
        v17 = CortanaStoreAppExperienceManager::ActivateAppAsync(v16, 0, &pvData);
        v18 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1FD,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
            (const char *)(unsigned int)v17);
          return v18;
        }
      }
      else
      {
        CortanaStoreAppExperienceManager::OnViewConsolidationRequested(v3);
      }
      result = 0LL;
    }
    else
    {
      v5 = CortanaExperienceHelpers::GetStoreCortanaAumId((CortanaExperienceHelpers::Testing *)&v23);
      v22 = winrt::hstring::c_str(v5);
      v21 = 38;
      PerfTrack::AppLaunchTelemetry::AppLaunched<enum PerfTrack::Location,unsigned short const *>(&v21, &v22);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v23);
      v7 = CortanaStoreAppExperienceManager::ActivateAppAsync(v6, 0, &pvData);
      v9 = v7;
      if ( v7 >= 0 )
      {
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1EB,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v7);
        result = v9;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x205,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                           v8);
  }
  return result;
}
