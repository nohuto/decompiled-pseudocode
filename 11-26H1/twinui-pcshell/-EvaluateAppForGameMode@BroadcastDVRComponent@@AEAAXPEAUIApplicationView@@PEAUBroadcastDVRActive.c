/*
 * XREFs of ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18004ECD4
 * Callers:
 *     ?OnApplicationViewChangedGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180050A50 (-OnApplicationViewChangedGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATIO.c)
 *     ?ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@@Z @ 0x18018DDA8 (-ApplicationChangedTask@BroadcastDVRComponent@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED.c)
 *     ?OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z @ 0x180313404 (-OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x18004D9C8 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x18004E77C (-GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@U-$pair@KVString@Internal@W.c)
 *     ?IsExpandedResources@BroadcastDVRComponent@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x18004F1F4 (-IsExpandedResources@BroadcastDVRComponent@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x18004F948 (-GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV-$vector@U-$pair@KVString@Intern.c)
 *     ?_Tidy@?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAAXXZ @ 0x18004FB4C (-_Tidy@-$vector@U-$pair@KVString@Internal@Windows@@@std@@V-$allocator@U-$pair@KVString@Internal@.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ApplyGameRelatedForGameModeProcess@BroadcastDVRComponent@@AEAAXKAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x18004FEF8 (-ApplyGameRelatedForGameModeProcess@BroadcastDVRComponent@@AEAAXKAEBV-$vector@U-$pair@KVString@I.c)
 *     ?TelemetryLogProcessesLaunchedAfterGame@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@@Z @ 0x18005006C (-TelemetryLogProcessesLaunchedAfterGame@BroadcastDVRComponent@@AEAAXAEBV-$vector@VString@Interna.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C1DD0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?_Tidy@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXXZ @ 0x1800F07C4 (-_Tidy@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@AEA.c)
 *     ??$_Destroy_range@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Windows@@QEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x1800F09A4 (--$_Destroy_range@V-$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ?RemoveKnownProcessesFromProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAV23@@Z @ 0x1800F0A18 (-RemoveKnownProcessesFromProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@VString@Internal@W.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x180161744 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017DF48 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??$_Move_unchecked@PEAVString@Internal@Windows@@PEAV123@@std@@YAPEAVString@Internal@Windows@@PEAV123@00@Z @ 0x180184478 (--$_Move_unchecked@PEAVString@Internal@Windows@@PEAV123@@std@@YAPEAVString@Internal@Windows@@PEA.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180190638 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?GetGameModeRequest@BroadcastDVRComponent@@AEAAXW4GameModeReason@@PEAUGameConfigInfo@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x1801C2288 (-GetGameModeRequest@BroadcastDVRComponent@@AEAAXW4GameModeReason@@PEAUGameConfigInfo@@PEAU_RM_GA.c)
 *     ?push_back@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAAX$$QEAVString@Internal@Windows@@@Z @ 0x1801C5E40 (-push_back@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@.c)
 *     ?TelemetryLogProcessesLaunchedWithGame@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@@Z @ 0x180201678 (-TelemetryLogProcessesLaunchedWithGame@BroadcastDVRComponent@@AEAAXAEBV-$vector@VString@Internal.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?IsGameModeGame@BroadcastDVRComponent@@AEAA_NPEAUGameConfigInfo@@PEAW4GameModeReason@@@Z @ 0x1803125EC (-IsGameModeGame@BroadcastDVRComponent@@AEAA_NPEAUGameConfigInfo@@PEAW4GameModeReason@@@Z.c)
 *     ?clear@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@QEAAXXZ @ 0x180315368 (-clear@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@std@@@std@@QEA.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall BroadcastDVRComponent::EvaluateAppForGameMode(
        Windows::Internal::String **this,
        struct IApplicationView *a2,
        HWND *a3)
{
  LSTATUS ValueW; // eax
  bool v7; // sf
  BroadcastDVRComponent *v8; // rcx
  struct GameConfigInfo *v9; // r12
  HWND v10; // r15
  HWND v11; // rbx
  int IsExpandedResources; // eax
  BroadcastDVRComponent *v13; // rcx
  unsigned int v14; // edi
  HSTRING v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r15
  __int128 i; // rdi
  Windows::Internal::String *v20; // rdi
  const char *v21; // r9
  HANDLE v22; // rbx
  const WCHAR *FileNameW; // rax
  int LargestValidResourceRequest; // esi
  int v25; // eax
  int v26; // eax
  HSTRING v27; // rcx
  __int64 v28; // rcx
  bool v29; // [rsp+40h] [rbp-2B8h] BYREF
  DWORD v30; // [rsp+44h] [rbp-2B4h] BYREF
  DWORD pcbData[2]; // [rsp+48h] [rbp-2B0h] BYREF
  unsigned int pvData; // [rsp+50h] [rbp-2A8h] BYREF
  HANDLE v33; // [rsp+58h] [rbp-2A0h] BYREF
  HANDLE hProcess; // [rsp+60h] [rbp-298h] BYREF
  __int128 v35; // [rsp+68h] [rbp-290h] BYREF
  __int64 v36; // [rsp+78h] [rbp-280h]
  __int128 v37; // [rsp+80h] [rbp-278h] BYREF
  __int128 v38; // [rsp+90h] [rbp-268h]
  __int64 v39; // [rsp+A0h] [rbp-258h]
  WCHAR Filename[264]; // [rsp+B0h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F8h] [rbp+0h]

  pvData = 0;
  pcbData[0] = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Policies\\Microsoft\\Windows\\GameDVR",
             L"AllowAutoGameMode",
             0x10u,
             0LL,
             &pvData,
             pcbData);
  v7 = ValueW < 0;
  if ( ValueW > 0 )
    v7 = 1;
  if ( (v7 || pvData)
    && ((int)SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\GameBar", L"AutoGameModeEnabled", &pvData) < 0
     || pvData) )
  {
    v30 = 0;
    v29 = 0;
    v9 = (struct GameConfigInfo *)(a3 + 2);
    v10 = *a3;
    v11 = a3[1];
    IsExpandedResources = BroadcastDVRComponent::IsExpandedResources(v8, a2, &v29);
    if ( IsExpandedResources != -2147023728 && IsExpandedResources != -2147024444 )
    {
      v13 = retaddr;
      if ( IsExpandedResources < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7DD,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(unsigned int)IsExpandedResources);
    }
    LOBYTE(v13) = v29;
    v14 = v29 ? 5 : 0;
    pcbData[0] = v14;
    if ( !v29 )
    {
      if ( !BroadcastDVRComponent::IsGameModeGame(v13, v9, (enum GameModeReason *)pcbData) )
        return;
      v14 = pcbData[0];
    }
    if ( v10 )
      v11 = v10;
    GetWindowThreadProcessId(v11, &v30);
    if ( v30 )
    {
      if ( v30 == *((_DWORD *)this + 114) )
      {
        try
        {
          v35 = 0LL;
          v36 = 0LL;
          BroadcastDVRComponent::GetNonServiceProcessListAndIds(this, &v35);
          BroadcastDVRComponent::ApplyGameRelatedForGameModeProcess(this, v30, &v35);
          v37 = 0LL;
          *(_QWORD *)&v38 = 0LL;
          BroadcastDVRComponent::GetSortedUniqueProcessList(v15, (__int64 *)&v35, (__int64)&v37);
          BroadcastDVRComponent::RemoveKnownProcessesFromProcessList(v16, this + 44, &v37);
          BroadcastDVRComponent::TelemetryLogProcessesLaunchedAfterGame(v17, &v37);
          v18 = v37;
          for ( i = v37; (_QWORD)i != *((_QWORD *)&i + 1); *(_QWORD *)&i = i + 8 )
            std::vector<Windows::Internal::String>::push_back(this + 44, i);
          if ( v18 != *((_QWORD *)&i + 1) )
          {
            v20 = (Windows::Internal::String *)std::_Move_unchecked<Windows::Internal::String *,Windows::Internal::String *>(
                                                 *((_QWORD *)&i + 1),
                                                 *((_QWORD *)&i + 1));
            std::_Destroy_range<std::allocator<Windows::Internal::String>>(v20);
            *((_QWORD *)&v37 + 1) = v20;
          }
          std::_Sort_unchecked<Windows::Internal::String *,std::less<void>>(
            this[44],
            this[45],
            (this[45] - this[44]) >> 3,
            0);
          std::vector<Windows::Internal::String>::_Tidy(&v37);
          std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Tidy(&v35);
        }
        catch ( std::bad_alloc )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x804,
            (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
            (const char *)0x8007000ELL);
        }
      }
      else
      {
        hProcess = 0LL;
        v33 = OpenProcess(0x1000u, 0, v30);
        wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
          &hProcess,
          &v33);
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v33);
        v22 = hProcess;
        if ( hProcess )
        {
          v33 = 0LL;
          *(_QWORD *)pcbData = a2;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)pcbData);
          if ( !a2
            || (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(pcbData, &v33) < 0
            || !K32GetModuleFileNameExW(v22, 0LL, Filename, 0x104u)
            || (FileNameW = PathFindFileNameW(Filename),
                CompareStringOrdinal(FileNameW, -1, L"applicationframehost.exe", -1, 1) != 2) )
          {
            v37 = 0LL;
            v38 = 0LL;
            v39 = 0LL;
            RmGameModeInitializeResourceRequest(&v37);
            LargestValidResourceRequest = RmGameModeGetLargestValidResourceRequest(&v37);
            if ( LargestValidResourceRequest >= 0 )
            {
              BroadcastDVRComponent::GetGameModeRequest(this, v14, v9, &v37);
              v25 = RmGameModeRegisterProcess(v22, &v37, 0LL);
              if ( v25 >= 0 )
              {
                *((_DWORD *)this + 114) = v30;
                v35 = 0LL;
                v36 = 0LL;
                BroadcastDVRComponent::GetNonServiceProcessListAndIds(this, &v35);
                BroadcastDVRComponent::ApplyGameRelatedForGameModeProcess(this, v30, &v35);
                std::vector<Windows::Internal::String>::clear(this + 44);
                BroadcastDVRComponent::GetSortedUniqueProcessList(v27, (__int64 *)&v35, (__int64)(this + 44));
                BroadcastDVRComponent::TelemetryLogProcessesLaunchedWithGame(v28, this + 44);
                std::vector<std::pair<unsigned long,Windows::Internal::String>>::_Tidy(&v35);
              }
              else if ( v25 != -1073740008 )
              {
                v26 = v25 | 0x10000000;
                if ( v26 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x833,
                    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
                    (const char *)(unsigned int)v26);
              }
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x825,
                (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
                (const char *)(LargestValidResourceRequest | 0x10000000u));
            }
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)pcbData);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
        }
        else
        {
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x845,
            (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
            v21);
        }
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hProcess);
      }
    }
  }
}
