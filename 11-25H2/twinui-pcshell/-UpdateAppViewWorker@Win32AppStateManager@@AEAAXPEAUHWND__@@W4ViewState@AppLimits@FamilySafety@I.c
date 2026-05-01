/*
 * XREFs of ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180551B10
 * Callers:
 *     _lambda_bfcda2f4b09e169516dee7a5816294eb_::operator() @ 0x180550674 (_lambda_bfcda2f4b09e169516dee7a5816294eb_--operator().c)
 *     ?UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x180551910 (-UpdateAppView@Win32AppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafe.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AEF48 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B5D10 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800C40C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801134D8 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositio.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802CC708 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$DebugInfo@AEAY0DL@$$CBG@AppUsageTelemetry@@SAXAEAY0DL@$$CBG@Z @ 0x18054F758 (--$DebugInfo@AEAY0DL@$$CBG@AppUsageTelemetry@@SAXAEAY0DL@$$CBG@Z.c)
 *     ??$_Emplace@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@std@@_N@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV?$shared_ptr@VWin32AppInfo@@@1@@Z @ 0x18054FDE0 (--$_Emplace@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@VWin3.c)
 *     ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x18054FEC8 (--$_Emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBV12@@-$_Tree@V-$.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18054FFDC (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@-$_.c)
 *     ??$make_shared@VWin32AppInfo@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@YA?AV?$shared_ptr@VWin32AppInfo@@@0@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@@Z @ 0x1805501B4 (--$make_shared@VWin32AppInfo@@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@.c)
 *     ??0ExeData@@QEAA@$$QEAU0@@Z @ 0x180550310 (--0ExeData@@QEAA@$$QEAU0@@Z.c)
 *     ??0ExeData@@QEAA@AEBU0@@Z @ 0x180550380 (--0ExeData@@QEAA@AEBU0@@Z.c)
 *     ??1?$_Optional_destruct_base@UExeData@@$0A@@std@@QEAA@XZ @ 0x18055046C (--1-$_Optional_destruct_base@UExeData@@$0A@@std@@QEAA@XZ.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@XZ @ 0x18055053C (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAA@XZ.c)
 *     ??1ExeData@@QEAA@XZ @ 0x180550564 (--1ExeData@@QEAA@XZ.c)
 *     ?FindExeDataForPid@Win32AppInfo@@QEAA?AV?$optional@UExeData@@@std@@I@Z @ 0x1805509F8 (-FindExeDataForPid@Win32AppInfo@@QEAA-AV-$optional@UExeData@@@std@@I@Z.c)
 *     ?GetAppIdFromExePath@ExePathToAppIdMapping@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180550B78 (-GetAppIdFromExePath@ExePathToAppIdMapping@@QEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ?IsProcessActive@Win32ProcessInfo@@QEAA_NXZ @ 0x180551004 (-IsProcessActive@Win32ProcessInfo@@QEAA_NXZ.c)
 *     ?RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x180551220 (-RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV-$basic_string@GU-$char_traits@G@.c)
 *     ?SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x180551320 (-SaveExeData@ExeDataCache@@QEAAXPEAUHWND__@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ?UpdateView@Win32AppInfo@@QEAAXIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1805520CC (-UpdateView@Win32AppInfo@@QEAAXIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@2@AEBQEAUHWND__@@@Z @ 0x1805522A4 (-find@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UExeData@@U-$less@PEAUHWND__@@@std@@V-$allocator@U-$pa.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1805522E8 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$s.c)
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1805526F4 (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 *     ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x180552790 (-GetAppIdForSpecialCategoryApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std.c)
 *     ?TryGetProcessExePathAndAppId@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@I@Z @ 0x180552E00 (-TryGetProcessExePathAndAppId@@YA-AU-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall Win32AppStateManager::UpdateAppViewWorker(__int64 a1, RTL_SRWLOCK *a2, int a3, __int64 a4)
{
  char v7; // r13
  __int64 v8; // r8
  RTL_SRWLOCK *v9; // rbx
  __int64 *v10; // r9
  __int64 *v11; // r9
  __int64 **v12; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  void **v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  DWORD v20; // edi
  __int64 v21; // rax
  __int64 ExeDataForPid; // rax
  __int64 v23; // rbx
  __int64 v24; // r15
  __int64 v25; // r8
  __int64 ProcessExePathAndAppId; // rbx
  const WCHAR *v27; // rcx
  __int128 *v28; // rdx
  __int64 AppIdForSpecialCategoryApp; // rax
  __int64 AppIdFromExePath; // rax
  __int128 *v31; // rdx
  __int64 v32; // rax
  __int128 *v33; // rdx
  char v34; // [rsp+30h] [rbp-D0h]
  DWORD dwProcessId[2]; // [rsp+38h] [rbp-C8h] BYREF
  RTL_SRWLOCK *v36[3]; // [rsp+48h] [rbp-B8h] BYREF
  void *v37; // [rsp+60h] [rbp-A0h] BYREF
  char v38[32]; // [rsp+68h] [rbp-98h] BYREF
  char v39[32]; // [rsp+88h] [rbp-78h] BYREF
  char v40; // [rsp+A8h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  _BYTE v42[80]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v43; // [rsp+108h] [rbp+8h] BYREF
  __int64 v44; // [rsp+118h] [rbp+18h]
  unsigned __int64 v45; // [rsp+120h] [rbp+20h]
  __int128 v46; // [rsp+128h] [rbp+28h] BYREF
  __int64 v47; // [rsp+138h] [rbp+38h]
  unsigned __int64 v48; // [rsp+140h] [rbp+40h]
  RTL_SRWLOCK *v49; // [rsp+150h] [rbp+50h] BYREF
  std::_Ref_count_base *v50; // [rsp+158h] [rbp+58h]

  v41 = a4;
  v7 = 0;
  v34 = 0;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 7LL;
  LOWORD(v43) = 0;
  v36[0] = a2;
  Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK **)dwProcessId, (RTL_SRWLOCK *)(a1 + 96));
  std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::find(
    a1 + 104,
    &v49,
    v36);
  if ( v49 == *(RTL_SRWLOCK **)(a1 + 104) )
  {
    v40 = 0;
  }
  else
  {
    ExeData::ExeData((ExeData *)&v37, (const struct ExeData *)&v49[5]);
    v40 = 1;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)dwProcessId);
  if ( a3 != 1 )
  {
    v46 = 0LL;
    v47 = 0LL;
    v48 = 7LL;
    LOWORD(v46) = 0;
    if ( v40 )
    {
      v20 = (unsigned int)v37;
LABEL_41:
      std::wstring::operator=((char *)&v46, v38, v8);
      std::wstring::operator=((char *)&v43, v39, v25);
      goto LABEL_54;
    }
    dwProcessId[0] = 0;
    GetWindowThreadProcessId((HWND)a2, dwProcessId);
    v20 = dwProcessId[0];
    if ( dwProcessId[0] && v20 != GetCurrentProcessId() )
    {
      Microsoft::WRL::Wrappers::SRWLock::LockShared(&v49, (RTL_SRWLOCK *)(a1 + 56));
      v21 = **(_QWORD **)(a1 + 64);
      *(_QWORD *)dwProcessId = v21;
      while ( !*(_BYTE *)(v21 + 25) )
      {
        ExeDataForPid = Win32AppInfo::FindExeDataForPid(*(_QWORD *)(v21 + 64), (__int64)v42, v20);
        v23 = ExeDataForPid;
        if ( *(_BYTE *)(ExeDataForPid + 72) )
        {
          if ( v40 )
          {
            LODWORD(v37) = *(_DWORD *)ExeDataForPid;
            std::wstring::operator=((__int64)v38, ExeDataForPid + 8);
            std::wstring::operator=((__int64)v39, v23 + 40);
          }
          else
          {
            ExeData::ExeData((__int64)&v37, ExeDataForPid);
            v40 = 1;
          }
        }
        else if ( v40 )
        {
          ExeData::~ExeData(&v37);
          v40 = 0;
        }
        std::_Optional_destruct_base<ExeData,0>::~_Optional_destruct_base<ExeData,0>((ExeData *)v42);
        if ( v40 )
        {
          v24 = a1 + 96;
          ExeDataCache::SaveExeData(a1 + 96, (__int64)a2, (unsigned int)v37, (__int64)v38, (__int64)v39);
          goto LABEL_40;
        }
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(dwProcessId);
        v21 = *(_QWORD *)dwProcessId;
      }
      v24 = a1 + 96;
LABEL_40:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v49);
      if ( v40 )
        goto LABEL_41;
      ProcessExePathAndAppId = TryGetProcessExePathAndAppId(&v49, v20);
      std::wstring::operator=((__int64)&v46, ProcessExePathAndAppId);
      std::wstring::operator=((__int64)&v43, ProcessExePathAndAppId + 32);
      std::pair<std::wstring const,std::wstring>::~pair<std::wstring const,std::wstring>((void **)&v49);
      if ( v47 )
      {
        if ( v44 )
        {
          AppUsageTelemetry::DebugInfo<unsigned short const (&)[59]>(v27);
        }
        else
        {
          v28 = &v46;
          if ( v48 > 7 )
            v28 = (__int128 *)v46;
          AppIdForSpecialCategoryApp = GetAppIdForSpecialCategoryApp(&v49, v28, v20);
          std::wstring::operator=((__int64)&v43, AppIdForSpecialCategoryApp);
          std::wstring::_Tidy_deallocate((void **)&v49);
        }
        if ( !v44 )
        {
          AppIdFromExePath = ExePathToAppIdMapping::GetAppIdFromExePath(
                               (RTL_SRWLOCK *)(a1 + 120),
                               (__int64)&v49,
                               (unsigned __int16 *)&v46);
          std::wstring::operator=((__int64)&v43, AppIdFromExePath);
          std::wstring::_Tidy_deallocate((void **)&v49);
          if ( !v44 )
          {
            v31 = &v46;
            if ( v48 > 7 )
              v31 = (__int128 *)v46;
            v32 = ComputeAppIdFromExePath(&v49, v31);
            std::wstring::operator=((__int64)&v43, v32);
            std::wstring::_Tidy_deallocate((void **)&v49);
            wil::AcquireSRWLockExclusive(&v49, (RTL_SRWLOCK *)(a1 + 120));
            std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Emplace<std::wstring const &,std::wstring const &>(
              (__int64 *)(a1 + 128),
              (__int64)v36,
              (unsigned __int16 *)&v46,
              (__int64)&v43);
            CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v49);
          }
        }
        ExeDataCache::SaveExeData(v24, (__int64)a2, v20, (__int64)&v46, (__int64)&v43);
LABEL_54:
        wil::AcquireSRWLockExclusive(v36, (RTL_SRWLOCK *)(a1 + 56));
        std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::find(
          a1 + 64,
          &v49,
          &v43);
        if ( v49 == *(RTL_SRWLOCK **)(a1 + 64) )
        {
          std::make_shared<Win32AppInfo,std::wstring &>(&v49, (__int64)&v43);
          Win32AppInfo::UpdateView((_DWORD)v49, v20, (unsigned int)&v46, (_DWORD)a2, a3);
          std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::_Emplace<std::wstring &,std::shared_ptr<Win32AppInfo>>(
            (__int64 *)(a1 + 64),
            (__int64)dwProcessId,
            (unsigned __int16 *)&v43,
            &v49);
          v34 = 1;
          if ( v50 )
            std::_Ref_count_base::_Decref(v50);
        }
        else
        {
          Win32AppInfo::UpdateView(v49[8].Ptr, v20, (unsigned int)&v46, (_DWORD)a2, a3);
        }
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v36);
        std::wstring::_Tidy_deallocate((void **)&v46);
        LOBYTE(v19) = v34;
        if ( v34 )
          goto LABEL_59;
        goto LABEL_63;
      }
    }
    std::wstring::_Tidy_deallocate((void **)&v46);
    goto LABEL_63;
  }
  if ( v40 )
  {
    std::wstring::operator=((char *)&v43, v39, v8);
    wil::AcquireSRWLockExclusive(v36, (RTL_SRWLOCK *)(a1 + 56));
    std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::find(
      a1 + 64,
      &v49,
      &v43);
    v9 = v49;
    if ( v49 != *(RTL_SRWLOCK **)(a1 + 64) )
    {
      Win32AppInfo::UpdateView(v49[8].Ptr, (_DWORD)v37, (unsigned int)v38, (_DWORD)a2, 1);
      v10 = (__int64 *)**((_QWORD **)v9[8].Ptr + 4);
      while ( !*((_BYTE *)v10 + 25) )
      {
        if ( Win32ProcessInfo::IsProcessActive((__int64 ***)v10[5]) )
          goto LABEL_20;
        v12 = (__int64 **)v11[2];
        if ( *((_BYTE *)v12 + 25) )
        {
          for ( i = (__int64 *)v11[1]; !*((_BYTE *)i + 25) && v11 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v11 = i;
          v10 = i;
        }
        else
        {
          v10 = (__int64 *)v11[2];
          for ( j = *v12; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v10 = j;
        }
      }
      v7 = 1;
      v15 = (void **)std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Extract(
                       (_QWORD *)(a1 + 64),
                       (__int64)v9);
      std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>,void *>>>(
        v16,
        v15);
    }
LABEL_20:
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v36);
    v49 = a2;
    wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)dwProcessId, (RTL_SRWLOCK *)(a1 + 96));
    std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::find(
      a1 + 104,
      v36,
      &v49);
    if ( v36[0] != *(RTL_SRWLOCK **)(a1 + 104) )
    {
      v17 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Extract(
              (_QWORD *)(a1 + 104),
              (__int64)v36[0]);
      std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>(
        v18,
        v17);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)dwProcessId);
    if ( v7 )
    {
      Win32AppStateManager::RemoveAppFromTerminationTarget(a1, (unsigned __int16 *)&v43, 1);
      LOBYTE(v19) = 0;
LABEL_59:
      v33 = &v43;
      if ( v45 > 7 )
        v33 = (__int128 *)v43;
      (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v41 + 24LL))(v41, v33, v19);
    }
  }
LABEL_63:
  std::_Optional_destruct_base<ExeData,0>::~_Optional_destruct_base<ExeData,0>((ExeData *)&v37);
  std::wstring::_Tidy_deallocate((void **)&v43);
}
