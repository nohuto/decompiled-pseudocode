/*
 * XREFs of ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x1803FCC40
 * Callers:
 *     ?GetInFocusViewData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUIAppViewExecutionData@23456@@Z @ 0x1803FBCE0 (-GetInFocusViewData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUIApp.c)
 *     ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1803FC230 (-OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUI.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800F7638 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180117530 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18013BBB8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017BAF4 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x1801BB910 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x1803F75D0 (-FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ.c)
 *     ??$AppExecutionDataCreated@AEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEA_KPEBG@TaskFlowDataEngineTelemetry@@SAXAEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEA_K$$QEAPEBG@Z @ 0x1803FAC24 (--$AppExecutionDataCreated@AEAW4AppViewExecutionState@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ??$find@PEAUIApplicationView@@UApplicationViewComparator@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@$0A@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@UApplicationViewComparator@456789@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@@1@AEBQEAUIApplicationView@@@Z @ 0x1803FB2BC (--$find@PEAUIApplicationView@@UApplicationViewComparator@AppViewInfoCache@DataEngine@TaskFlow@Sh.c)
 *     ??$try_emplace@$$V@?$map@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@UApplicationViewComparator@456789@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1803FB318 (--$try_emplace@$$V@-$map@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppVi.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x1803FB708 (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     ?Remove@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplicationView@@@Z @ 0x1803FC4E0 (-Remove@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAXPEAUIApplicationView@@.c)
 *     ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x1803FD368 (-TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 *     ?TryGetProcessIdForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAIPEAUHWND__@@PEAUIApplicationView@@_N@Z @ 0x1803FD538 (-TryGetProcessIdForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 *     ?get_system_time@filetime@wil@@YA?AU_FILETIME@@XZ @ 0x1803FD910 (-get_system_time@filetime@wil@@YA-AU_FILETIME@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
__int64 *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
        __int64 a1,
        __int64 *a2,
        int a3,
        void *a4)
{
  int v7; // r13d
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache *v8; // r15
  struct IApplicationView *v9; // rdx
  __int64 v11; // rcx
  int (__fastcall **v12)(void *, GUID *, void **); // rax
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *v13; // rcx
  __int64 *v14; // rbx
  int v15; // r12d
  unsigned int ProcessIdForApplicationView; // eax
  unsigned int v17; // edx
  __int64 AppIdInfoForApplicationView; // rbx
  int v19; // r12d
  _DWORD *Reserved1; // rbx
  wil::filetime *v21; // rcx
  struct _FILETIME system_time; // rbx
  int v23; // eax
  unsigned int v24; // r8d
  __int64 v25; // r14
  __int64 v26; // rcx
  HSTRING_HEADER *v27; // rax
  PVOID v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  int v31; // [rsp+20h] [rbp-128h]
  int v32; // [rsp+20h] [rbp-128h]
  _WORD v33[2]; // [rsp+60h] [rbp-E8h] BYREF
  char v34; // [rsp+64h] [rbp-E4h]
  void *v35; // [rsp+68h] [rbp-E0h] BYREF
  unsigned int v36; // [rsp+70h] [rbp-D8h]
  bool v37[4]; // [rsp+74h] [rbp-D4h] BYREF
  LPCWSTR pszPath; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+80h] [rbp-C8h] BYREF
  unsigned int v40; // [rsp+88h] [rbp-C0h]
  int v41; // [rsp+8Ch] [rbp-BCh] BYREF
  int v42; // [rsp+90h] [rbp-B8h]
  int v43; // [rsp+98h] [rbp-B0h] BYREF
  unsigned __int64 v44; // [rsp+A0h] [rbp-A8h] BYREF
  LPCWSTR v45; // [rsp+A8h] [rbp-A0h] BYREF
  RTL_SRWLOCK *v46; // [rsp+B0h] [rbp-98h] BYREF
  void *Src; // [rsp+B8h] [rbp-90h] BYREF
  void *v48; // [rsp+C0h] [rbp-88h] BYREF
  HWND WindowForView; // [rsp+D0h] [rbp-78h]
  __int64 *v50; // [rsp+D8h] [rbp-70h]
  HSTRING_HEADER v51; // [rsp+E0h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  v40 = a3;
  v45 = (LPCWSTR)a1;
  v50 = a2;
  v43 = a3;
  v7 = 0;
  v42 = 0;
  v39 = 0LL;
  v33[0] = 0;
  v36 = 0;
  pszPath = 0LL;
  wil::AcquireSRWLockExclusive(&v46, (RTL_SRWLOCK *)(a1 + 248));
  v8 = (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache *)(a1 + 256);
  v35 = a4;
  v9 = (struct IApplicationView *)std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>,0>>::find<IApplicationView *,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,0>(
                                    (__int64 **)(a1 + 256),
                                    &Src,
                                    &v35);
  if ( *(_QWORD *)v9 == *(_QWORD *)(a1 + 256) )
  {
    *(_DWORD *)v37 = 0;
    (*(void (__fastcall **)(void *, bool *))(*(_QWORD *)a4 + 216LL))(a4, v37);
    if ( *(_DWORD *)v37 != 1 )
    {
      LOBYTE(v33[0]) = 1;
      *a2 = 0LL;
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v46);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pszPath);
      ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)v33);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v39);
      return a2;
    }
  }
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a4,
                          v9);
  if ( !WindowForView )
  {
    TaskFlowDataEngineTelemetry::FailedToRetreiveWindowHandle(v11);
    HIBYTE(v33[0]) = 1;
    Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::Remove(
      (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache *)(a1 + 256),
      (struct IApplicationView *)a4);
    *a2 = 0LL;
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v46);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pszPath);
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)v33);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v39);
    return a2;
  }
  v12 = *(int (__fastcall ***)(void *, GUID *, void **))a4;
  v35 = 0LL;
  *(_DWORD *)v37 = (*v12)(a4, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v35) >= 0;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v35);
  v35 = a4;
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>,0>>::find<IApplicationView *,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,0>(
    (__int64 **)(a1 + 256),
    &v44,
    &v35);
  if ( v44 == *(_QWORD *)v8 )
  {
    v34 = 0;
    v14 = v50;
    v15 = v43;
    goto LABEL_8;
  }
  v15 = *(_DWORD *)(v44 + 40);
  *(_DWORD *)&v51.Reserved.Reserved2[4] = 0;
  v14 = (__int64 *)(v44 + 48);
  *(_DWORD *)&v51.Reserved.Reserved2[20] = 0;
  v34 = 1;
  if ( !*(_DWORD *)(v44 + 80) )
  {
LABEL_8:
    if ( v40 == 1 )
    {
      ProcessIdForApplicationView = v36;
    }
    else
    {
      ProcessIdForApplicationView = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryGetProcessIdForApplicationView(
                                      v13,
                                      WindowForView,
                                      (struct IApplicationView *)a4,
                                      v37[0]);
      v36 = ProcessIdForApplicationView;
      if ( ProcessIdForApplicationView )
      {
        wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
          &v35,
          (__int64)a4);
        std::map<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::try_emplace<>(
          v8,
          (__int64)&Src,
          (__int64 *)&v35);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v35);
        v17 = v36;
        *((_DWORD *)Src + 20) = v36;
        ProcessIdForApplicationView = v17;
      }
    }
    if ( !v34 )
      goto LABEL_20;
    goto LABEL_15;
  }
  ProcessIdForApplicationView = *(_DWORD *)(v44 + 80);
  v36 = ProcessIdForApplicationView;
LABEL_15:
  if ( v15 != -1 && v14[2] )
  {
    if ( (unsigned __int64)v14[3] > 7 )
      v14 = (__int64 *)*v14;
    wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v35,
      (__int64)v14,
      -1LL);
    v7 = 4;
    v42 = 4;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      (void **)&pszPath,
      &v35);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v35);
    goto LABEL_23;
  }
LABEL_20:
  AppIdInfoForApplicationView = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryGetAppIdInfoForApplicationView(
                                  v13,
                                  &Src,
                                  a4,
                                  ProcessIdForApplicationView);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
    (void **)&pszPath,
    (void **)(AppIdInfoForApplicationView + 8));
  v19 = *(_DWORD *)AppIdInfoForApplicationView;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v48);
  Src = (void *)pszPath;
  if ( !pszPath || v19 == -1 )
  {
    HIBYTE(v33[0]) = 1;
    Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::Remove(v8, (struct IApplicationView *)a4);
    *a2 = 0LL;
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v46);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pszPath);
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)v33);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v39);
    return a2;
  }
  v44 = std::_WChar_traits<wchar_t>::length((__int64)pszPath);
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    &v35,
    (__int64)a4);
  std::map<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::ApplicationViewComparator,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::try_emplace<>(
    v8,
    (__int64)&v51,
    (__int64 *)&v35);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v35);
  Reserved1 = v51.Reserved.Reserved1;
  std::wstring::assign((char *)v51.Reserved.Reserved1 + 48, Src, v44);
  Reserved1[10] = v19;
LABEL_23:
  if ( v40 == 1 )
    Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::Remove(v8, (struct IApplicationView *)a4);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v46);
  system_time = wil::filetime::get_system_time(v21);
  v35 = (void *)system_time;
  v44 = (unsigned __int64)WindowForView;
  v41 = 0;
  v23 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)a4 + 344LL))(a4, &v41);
  if ( v23 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x128,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
      (const char *)(unsigned int)v23,
      v31);
  v25 = *((_QWORD *)v45 + 34);
  Src = *(void **)(*(_QWORD *)v25 + 48LL);
  v26 = v39;
  v39 = 0LL;
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( pszPath )
  {
    v45 = pszPath;
    v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v51, &v45, v24);
    v42 = v7 | 2;
    v28 = v27[1].Reserved.Reserved1;
  }
  else
  {
    LODWORD(v28) = 0;
  }
  v32 = (int)v28;
  v29 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))Src)(v25, v40, system_time, WindowForView);
  if ( v29 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x133,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
      (const char *)(unsigned int)v29,
      v32);
  v45 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(pszPath);
  TaskFlowDataEngineTelemetry::AppExecutionDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::AppViewExecutionState &,__int64 &,unsigned __int64 &,unsigned short const *>(
    &v43,
    (__int64 *)&v35,
    (__int64 *)&v44,
    (__int64 *)&v45);
  LOBYTE(v33[0]) = 1;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pszPath);
  ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)v33);
  v30 = v39;
  v39 = 0LL;
  *a2 = v30;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v39);
  return a2;
}
