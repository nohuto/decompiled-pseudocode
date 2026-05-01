/*
 * XREFs of ?GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AU?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@UWindowId@WindowManagement@ApplicationModel@567@W4UnoccludedWindowsOptions@34567@@Z @ 0x180216550
 * Callers:
 *     ?GetUnoccludedSnappedWindowsForWindow@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@IPEAIPEAPEAU423@@Z @ 0x1802164C0 (-GetUnoccludedSnappedWindowsForWindow@-$produce@UTaskGroupsComponent@implementation@TaskGroups@S.c)
 *     ?OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIGuidedSnapAssistController@WindowSnapping@4567@AEBUGuidedSnapAssistCompletedArgs@94567@@Z @ 0x180589290 (-OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@W.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800CA0DC (-RemoveAll@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipCo.c)
 *     ?CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E3EA0 (-CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PE.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x18012BE08 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?0UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@AEBV?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@Z @ 0x18029E138 (--$-0UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@-$com_array@UWindowId@.c)
 *     ??$_Emplace_one_at_back@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEAAAEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@$$QEAU234567@@Z @ 0x1802C1D34 (--$_Emplace_one_at_back@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@-$v.c)
 *     CoTaskMemFree_0 @ 0x1802CA554 (CoTaskMemFree_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::GetUnoccludedSnappedWindowsForWindow(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const char *a4)
{
  HMONITOR v7; // r15
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, HMONITOR, __int64 *); // rdi
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  char v13; // di
  _QWORD *v14; // rsi
  _QWORD *v15; // r15
  LPVOID *v16; // rcx
  LPVOID v17; // rdx
  char v18; // bl
  int v19; // eax
  __int64 v21; // [rsp+28h] [rbp-59h]
  __int64 v22; // [rsp+38h] [rbp-49h] BYREF
  LPVOID v23; // [rsp+40h] [rbp-41h] BYREF
  __int128 v24; // [rsp+48h] [rbp-39h]
  __int64 v25; // [rsp+58h] [rbp-29h] BYREF
  __int128 v26; // [rsp+60h] [rbp-21h] BYREF
  __int64 v27; // [rsp+70h] [rbp-11h]
  int v28; // [rsp+78h] [rbp-9h]
  LPVOID pv[2]; // [rsp+80h] [rbp-1h] BYREF
  _QWORD *v30; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v31; // [rsp+98h] [rbp+17h]
  __int64 v32; // [rsp+A0h] [rbp+1Fh]
  __int64 v33; // [rsp+A8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  int v35; // [rsp+100h] [rbp+7Fh] BYREF

  v28 = 0;
  LOBYTE(a4) = ~(_BYTE)a4;
  if ( ((unsigned __int8)a4 & 1) != 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB6,
      (unsigned int)"pcshell\\twinui\\taskgroups\\lib\\taskgroupscomponent.cpp",
      a4);
  v26 = 0LL;
  v27 = 0LL;
  v7 = MonitorFromWindow((HWND)a3, 0);
  if ( v7 )
  {
    v22 = 0LL;
    LODWORD(v23) = 0;
    v24 = 0LL;
    v8 = *(_QWORD *)(a1 + 152);
    v9 = *(__int64 (__fastcall **)(__int64, HMONITOR, __int64 *))(*(_QWORD *)v8 + 48LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v22);
    v10 = v9(v8, v7, &v22);
    winrt::check_hresult(&v35, v10, &v23);
    LODWORD(v23) = 0;
    v24 = 0LL;
    v25 = 0LL;
    v11 = CSnappedWindowModel_CreateInstance(0LL, *(_QWORD *)(a1 + 136), *(_QWORD *)(a1 + 152), 1, v21, &v25);
    winrt::check_hresult(&v35, v11, &v23);
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    LODWORD(v23) = 0;
    v24 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD **))(*(_QWORD *)v25 + 24LL))(v25, v22, &v30);
    winrt::check_hresult(&v35, v12, &v23);
    v13 = 0;
    v14 = v30;
    v15 = &v30[v31];
    if ( v30 == v15 )
      goto LABEL_10;
    do
    {
      v35 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 80LL))(*v14);
      std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Emplace_one_at_back<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
        &v26,
        &v35);
      if ( *(_DWORD *)(*((_QWORD *)&v26 + 1) - 4LL) == a3 )
        v13 = 1;
      ++v14;
    }
    while ( v14 != v15 );
    if ( !v13 )
    {
LABEL_10:
      pv[1] = 0LL;
      v16 = pv;
      v17 = 0LL;
      v18 = 5;
    }
    else
    {
      v16 = (LPVOID *)winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
                        &v23,
                        &v26);
      v17 = *v16;
      v18 = 3;
    }
    v19 = *((_DWORD *)v16 + 2);
    *(_QWORD *)a2 = v17;
    *(_DWORD *)(a2 + 8) = v19;
    *v16 = 0LL;
    *((_DWORD *)v16 + 2) = 0;
    if ( (v18 & 4) != 0 )
    {
      v18 &= ~4u;
      if ( pv[0] )
        CoTaskMemFree_0(pv[0]);
    }
    if ( (v18 & 2) != 0 && v23 )
    {
      CoTaskMemFree_0(v23);
      v23 = 0LL;
      LODWORD(v24) = 0;
    }
    CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)&v30);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
  }
  else
  {
    winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
      a2,
      &v26);
  }
  std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64 *)&v26);
  return a2;
}
