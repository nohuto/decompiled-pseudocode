/*
 * XREFs of ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180575C9C
 * Callers:
 *     _lambda_bfcda2f4b09e169516dee7a5816294eb_::operator() @ 0x18057491C (_lambda_bfcda2f4b09e169516dee7a5816294eb_--operator().c)
 *     ?UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x180575AA0 (-UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafe.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E204C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18012FD24 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositio.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013D314 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180285658 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18029A968 (--$_Find_lower_bound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Lower_bound_duplicate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18035DF74 (--$_Lower_bound_duplicate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree.c)
 *     ??$DebugInfo@AEAY0DL@$$CBG@AppUsageTelemetry@@SAXAEAY0DL@$$CBG@Z @ 0x180573A44 (--$DebugInfo@AEAY0DL@$$CBG@AppUsageTelemetry@@SAXAEAY0DL@$$CBG@Z.c)
 *     ??$_Emplace@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@std@@_N@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV?$shared_ptr@VWin32AppInfo@@@1@@Z @ 0x18057408C (--$_Emplace@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@VWin3.c)
 *     ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x180574174 (--$_Emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBV12@@-$_Tree@V-$.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180574288 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@-$_.c)
 *     ??$make_shared@VWin32AppInfo@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@YA?AV?$shared_ptr@VWin32AppInfo@@@0@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@@Z @ 0x18057444C (--$make_shared@VWin32AppInfo@@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@.c)
 *     ??0ExeData@@QEAA@$$QEAU0@@Z @ 0x180574688 (--0ExeData@@QEAA@$$QEAU0@@Z.c)
 *     ??0ExeData@@QEAA@AEBU0@@Z @ 0x1805746C0 (--0ExeData@@QEAA@AEBU0@@Z.c)
 *     ??1?$_Optional_destruct_base@UExeData@@$0A@@std@@QEAA@XZ @ 0x1805747AC (--1-$_Optional_destruct_base@UExeData@@$0A@@std@@QEAA@XZ.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@XZ @ 0x18057487C (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAA@XZ.c)
 *     ??1ExeData@@QEAA@XZ @ 0x1805748A4 (--1ExeData@@QEAA@XZ.c)
 *     ?FindExeDataForPid@Win32AppInfo@@QEAA?AV?$optional@UExeData@@@std@@I@Z @ 0x180574CA8 (-FindExeDataForPid@Win32AppInfo@@QEAA-AV-$optional@UExeData@@@std@@I@Z.c)
 *     ?IsProcessActive@Win32ProcessInfo@@QEAA_NXZ @ 0x1805751E4 (-IsProcessActive@Win32ProcessInfo@@QEAA_NXZ.c)
 *     ?RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x180575400 (-RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV-$basic_string@GU-$char_traits@G@.c)
 *     ?SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x180575510 (-SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ?UpdateView@Win32AppInfo@@QEAAXIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x18057628C (-UpdateView@Win32AppInfo@@QEAAXIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@2@AEBQEAUHWND__@@@Z @ 0x180576464 (-find@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UExeData@@U-$less@PEAUHWND__@@@std@@V-$allocator@U-$pa.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1805764A8 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$s.c)
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180576934 (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 *     ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x1805769D0 (-GetAppIdForSpecialCategoryApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std.c)
 *     ?TryGetProcessExePathAndAppId@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@I@Z @ 0x180576FE4 (-TryGetProcessExePathAndAppId@@YA-AU-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall Win32AppStateManager::UpdateAppViewWorker(__int64 a1, RTL_SRWLOCK *a2, int a3, __int64 a4)
{
  char v7; // r15
  char v8; // r14
  RTL_SRWLOCK *v9; // rdx
  __int64 v10; // r8
  RTL_SRWLOCK *v11; // rbx
  __int64 *v12; // r9
  __int64 *v13; // r9
  __int64 **v14; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r8
  unsigned int v23; // esi
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 ExeDataForPid; // rax
  __int64 v27; // rbx
  _QWORD *ProcessExePathAndAppId; // rbx
  const WCHAR *v29; // rcx
  _QWORD *v30; // rdx
  _QWORD *AppIdForSpecialCategoryApp; // rax
  __int64 v32; // rbx
  __int64 v33; // rcx
  _QWORD *v34; // rdx
  _QWORD *v35; // rax
  wchar_t *v36; // rdx
  DWORD dwProcessId[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v39; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v40[4]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v41[4]; // [rsp+78h] [rbp-88h] BYREF
  char v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  _BYTE v44[80]; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t v45[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v46; // [rsp+108h] [rbp+8h]
  unsigned __int64 v47; // [rsp+110h] [rbp+10h]
  _QWORD v48[3]; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v49; // [rsp+130h] [rbp+30h]
  RTL_SRWLOCK *v50[2]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v51; // [rsp+148h] [rbp+48h]
  RTL_SRWLOCK *v52; // [rsp+160h] [rbp+60h] BYREF
  std::_Ref_count_base *v53; // [rsp+168h] [rbp+68h]

  v43 = a4;
  v7 = 0;
  v8 = 0;
  std::wstring::wstring((__int64)v45);
  v50[0] = v9;
  Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)dwProcessId, (RTL_SRWLOCK *)(a1 + 96));
  std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::find(
    a1 + 104,
    &v52,
    v50);
  if ( v52 == *(RTL_SRWLOCK **)(a1 + 104) )
  {
    v42 = 0;
  }
  else
  {
    ExeData::ExeData((ExeData *)&v39, (const struct ExeData *)&v52[5]);
    v42 = 1;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)dwProcessId);
  if ( a3 != 1 )
  {
    std::wstring::wstring((__int64)v48);
    if ( v42 )
    {
      v23 = v39;
LABEL_26:
      std::wstring::operator=((char *)v48, (char *)v40, v22);
      std::wstring::operator=((char *)v45, (char *)v41, v24);
      goto LABEL_58;
    }
    dwProcessId[0] = 0;
    GetWindowThreadProcessId((HWND)a2, dwProcessId);
    v23 = dwProcessId[0];
    if ( dwProcessId[0] && v23 != GetCurrentProcessId() )
    {
      Microsoft::WRL::Wrappers::SRWLock::LockShared(&v52, (RTL_SRWLOCK *)(a1 + 56));
      v25 = **(_QWORD **)(a1 + 64);
      *(_QWORD *)dwProcessId = v25;
      while ( !*(_BYTE *)(v25 + 25) )
      {
        ExeDataForPid = Win32AppInfo::FindExeDataForPid(*(_QWORD **)(v25 + 64), (__int64)v44, v23);
        v27 = ExeDataForPid;
        if ( *(_BYTE *)(ExeDataForPid + 72) )
        {
          if ( v42 )
          {
            v39 = *(_DWORD *)ExeDataForPid;
            std::wstring::operator=(v40, (_QWORD *)(ExeDataForPid + 8));
            std::wstring::operator=(v41, (_QWORD *)(v27 + 40));
          }
          else
          {
            ExeData::ExeData(&v39, (_DWORD *)ExeDataForPid);
            v42 = 1;
          }
        }
        else if ( v42 )
        {
          ExeData::~ExeData((ExeData *)&v39);
          v42 = 0;
        }
        std::_Optional_destruct_base<ExeData,0>::~_Optional_destruct_base<ExeData,0>((ExeData *)v44);
        if ( v42 )
        {
          ExeDataCache::SaveExeData(a1 + 96, (__int64)a2, v39, (__int64)v40, (__int64)v41);
          break;
        }
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(dwProcessId);
        v25 = *(_QWORD *)dwProcessId;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v52);
      if ( v42 )
        goto LABEL_26;
      ProcessExePathAndAppId = (_QWORD *)TryGetProcessExePathAndAppId(&v52, v23);
      std::wstring::operator=(v48, ProcessExePathAndAppId);
      std::wstring::operator=(v45, ProcessExePathAndAppId + 4);
      std::pair<std::wstring const,std::wstring>::~pair<std::wstring const,std::wstring>(&v52);
      if ( v48[2] )
      {
        if ( v46 )
        {
          AppUsageTelemetry::DebugInfo<unsigned short const (&)[59]>(v29);
        }
        else
        {
          v30 = v48;
          if ( v49 > 7 )
            v30 = (_QWORD *)v48[0];
          AppIdForSpecialCategoryApp = (_QWORD *)GetAppIdForSpecialCategoryApp(&v52, v30, v23);
          std::wstring::operator=(v45, AppIdForSpecialCategoryApp);
          std::wstring::_Tidy_deallocate(&v52);
        }
        if ( !v46 )
        {
          Microsoft::WRL::Wrappers::SRWLock::LockShared(&v52, (RTL_SRWLOCK *)(a1 + 120));
          std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<UwpAppPackageInfo>,std::less<void>,std::allocator<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>>,0>>::_Find_lower_bound<std::wstring>(
            a1 + 128,
            v50,
            (__int64)v48);
          v32 = v51;
          if ( !std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::_Lower_bound_duplicate<std::wstring>(
                  v33,
                  v51,
                  (const wchar_t *)v48)
            || v32 == *(_QWORD *)(a1 + 128) )
          {
            std::wstring::wstring((__int64)v50);
          }
          else
          {
            std::wstring::wstring((__int64)v50, (_QWORD *)(v32 + 64));
          }
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v52);
          std::wstring::operator=(v45, v50);
          std::wstring::_Tidy_deallocate(v50);
          if ( !v46 )
          {
            v34 = v48;
            if ( v49 > 7 )
              v34 = (_QWORD *)v48[0];
            v35 = (_QWORD *)ComputeAppIdFromExePath(&v52, v34);
            std::wstring::operator=(v45, v35);
            std::wstring::_Tidy_deallocate(&v52);
            wil::AcquireSRWLockExclusive(&v52, (RTL_SRWLOCK *)(a1 + 120));
            std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Emplace<std::wstring const &,std::wstring const &>(
              (__int64 *)(a1 + 128),
              (__int64)v50,
              (wchar_t *)v48,
              v45);
            CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v52);
          }
          v8 = 0;
        }
        ExeDataCache::SaveExeData(a1 + 96, (__int64)a2, v23, (__int64)v48, (__int64)v45);
LABEL_58:
        wil::AcquireSRWLockExclusive(v50, (RTL_SRWLOCK *)(a1 + 56));
        std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::find(
          a1 + 64,
          &v52,
          v45);
        if ( v52 == *(RTL_SRWLOCK **)(a1 + 64) )
        {
          std::make_shared<Win32AppInfo,std::wstring &>(&v52, v45);
          Win32AppInfo::UpdateView((_DWORD)v52, v23, (unsigned int)v48, (_DWORD)a2, a3);
          std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::_Emplace<std::wstring &,std::shared_ptr<Win32AppInfo>>(
            (__int64 *)(a1 + 64),
            (__int64)dwProcessId,
            v45,
            &v52);
          v8 = 1;
          if ( v53 )
            std::_Ref_count_base::_Decref(v53);
        }
        else
        {
          Win32AppInfo::UpdateView(v52[8].Ptr, v23, (unsigned int)v48, (_DWORD)a2, a3);
        }
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v50);
        std::wstring::_Tidy_deallocate(v48);
        if ( v8 )
          goto LABEL_63;
        goto LABEL_67;
      }
    }
    std::wstring::_Tidy_deallocate(v48);
    goto LABEL_67;
  }
  if ( v42 )
  {
    std::wstring::operator=((char *)v45, (char *)v41, v10);
    wil::AcquireSRWLockExclusive(v50, (RTL_SRWLOCK *)(a1 + 56));
    std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::find(
      a1 + 64,
      &v52,
      v45);
    v11 = v52;
    if ( v52 != *(RTL_SRWLOCK **)(a1 + 64) )
    {
      Win32AppInfo::UpdateView(v52[8].Ptr, v39, (unsigned int)v40, (_DWORD)a2, 1);
      v12 = (__int64 *)**((_QWORD **)v11[8].Ptr + 4);
      while ( !*((_BYTE *)v12 + 25) )
      {
        if ( Win32ProcessInfo::IsProcessActive((__int64 ***)v12[5]) )
          goto LABEL_20;
        v14 = (__int64 **)v13[2];
        if ( *((_BYTE *)v14 + 25) )
        {
          for ( i = (__int64 *)v13[1]; !*((_BYTE *)i + 25) && v13 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v13 = i;
          v12 = i;
        }
        else
        {
          v12 = (__int64 *)v13[2];
          for ( j = *v14; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v12 = j;
        }
      }
      v7 = 1;
      v17 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Extract(
              (_QWORD *)(a1 + 64),
              (__int64)v11);
      std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>,void *>>>(
        v18,
        v17);
    }
LABEL_20:
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v50);
    v52 = a2;
    wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)dwProcessId, (RTL_SRWLOCK *)(a1 + 96));
    std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::find(
      a1 + 104,
      v50,
      &v52);
    if ( v50[0] != *(RTL_SRWLOCK **)(a1 + 104) )
    {
      v19 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Extract(
              (_QWORD *)(a1 + 104),
              (__int64)v50[0]);
      std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>(
        v20,
        v19);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)dwProcessId);
    if ( v7 )
    {
      Win32AppStateManager::RemoveAppFromTerminationTarget(a1, (__int64)v45, 1);
      v8 = 0;
LABEL_63:
      v36 = v45;
      if ( v47 > 7 )
        v36 = *(wchar_t **)v45;
      LOBYTE(v21) = v8;
      (*(void (__fastcall **)(__int64, wchar_t *, __int64))(*(_QWORD *)v43 + 24LL))(v43, v36, v21);
    }
  }
LABEL_67:
  std::_Optional_destruct_base<ExeData,0>::~_Optional_destruct_base<ExeData,0>((ExeData *)&v39);
  return std::wstring::_Tidy_deallocate(v45);
}
