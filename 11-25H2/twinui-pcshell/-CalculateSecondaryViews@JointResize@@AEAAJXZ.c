/*
 * XREFs of ?CalculateSecondaryViews@JointResize@@AEAAJXZ @ 0x1800498A0
 * Callers:
 *     ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x18004AB7C (-OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x180516450 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CalculateSecondaryViews@JointResizeTelemetry@@QEAA@XZ @ 0x1800482B8 (--1CalculateSecondaryViews@JointResizeTelemetry@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800482E4 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004A0B8 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StartActivity@CalculateSecondaryViews@JointResizeTelemetry@@QEAAXXZ @ 0x18004A15C (-StartActivity@CalculateSecondaryViews@JointResizeTelemetry@@QEAAXXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180056C00 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800F44C8 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800F646C (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801F83D0 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_1801F83D0.c)
 *     ??1?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801F8428 (--1-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_1801F8428.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180295800 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029743C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAA?A_T$$QEAUSecondaryViewInfo@JointResize@@@Z @ 0x1802B2824 (--$emplace_back@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@@V-$all.c)
 *     ??$AdjacentView@_KAEAH@CalculateSecondaryViews@JointResizeTelemetry@@QEAAX$$QEA_KAEAH@Z @ 0x1802C7318 (--$AdjacentView@_KAEAH@CalculateSecondaryViews@JointResizeTelemetry@@QEAAX$$QEA_KAEAH@Z.c)
 *     ??1SecondaryViewInfo@JointResize@@QEAA@XZ @ 0x1802CE0EC (--1SecondaryViewInfo@JointResize@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$ComplementaryView@_KAEAH@CalculateSecondaryViews@JointResizeTelemetry@@QEAAX$$QEA_KAEAH@Z @ 0x180513D94 (--$ComplementaryView@_KAEAH@CalculateSecondaryViews@JointResizeTelemetry@@QEAAX$$QEA_KAEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=15 #try_helpers=1
__int64 __fastcall JointResize::CalculateSecondaryViews(JointResize *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int *v4; // r15
  int v5; // eax
  unsigned int v6; // ebx
  ApplicationViewHelpers *v8; // rdi
  int v9; // eax
  struct IApplicationView *v10; // rdx
  unsigned int v11; // ebx
  HWND v12; // rsi
  ApplicationViewHelpers *v13; // rbx
  int v14; // edi
  int v15; // eax
  struct IApplicationView *v16; // rdx
  unsigned int v17; // esi
  HWND WindowForView; // rsi
  int v19; // [rsp+30h] [rbp-268h] BYREF
  int v20[2]; // [rsp+38h] [rbp-260h] BYREF
  __int64 v21; // [rsp+40h] [rbp-258h] BYREF
  ApplicationViewHelpers *v22; // [rsp+48h] [rbp-250h] BYREF
  int v23; // [rsp+50h] [rbp-248h] BYREF
  ApplicationViewHelpers *v24; // [rsp+58h] [rbp-240h] BYREF
  __int64 *v25; // [rsp+60h] [rbp-238h]
  int v26; // [rsp+68h] [rbp-230h] BYREF
  __int64 v27; // [rsp+70h] [rbp-228h] BYREF
  int v28; // [rsp+78h] [rbp-220h]
  int v29; // [rsp+80h] [rbp-218h] BYREF
  __int64 v30; // [rsp+88h] [rbp-210h] BYREF
  __int64 *v31; // [rsp+90h] [rbp-208h]
  ApplicationViewHelpers *v32; // [rsp+98h] [rbp-200h] BYREF
  ApplicationViewHelpers *v33; // [rsp+A0h] [rbp-1F8h] BYREF
  int v34; // [rsp+A8h] [rbp-1F0h]
  int v35; // [rsp+ACh] [rbp-1ECh]
  HWND v36; // [rsp+B0h] [rbp-1E8h]
  __int128 v37; // [rsp+B8h] [rbp-1E0h]
  char v38; // [rsp+C8h] [rbp-1D0h]
  int v39; // [rsp+C9h] [rbp-1CFh]
  __int16 v40; // [rsp+CDh] [rbp-1CBh]
  char v41; // [rsp+CFh] [rbp-1C9h]
  __int64 v42; // [rsp+D0h] [rbp-1C8h] BYREF
  char v43; // [rsp+E0h] [rbp-1B8h]
  char v44; // [rsp+ECh] [rbp-1ACh]
  __int128 v45; // [rsp+F0h] [rbp-1A8h]
  __int128 v46; // [rsp+100h] [rbp-198h] BYREF
  void **v47; // [rsp+110h] [rbp-188h] BYREF
  _BYTE v48[272]; // [rsp+118h] [rbp-180h] BYREF
  char v49[8]; // [rsp+228h] [rbp-70h] BYREF
  _BYTE v50[48]; // [rsp+230h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+0h]

  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v47);
  v47 = &JointResizeTelemetry::CalculateSecondaryViews::`vftable';
  JointResizeTelemetry::CalculateSecondaryViews::StartActivity((JointResizeTelemetry::CalculateSecondaryViews *)&v47);
  v21 = 0LL;
  *(_QWORD *)v20 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 18);
  v3 = *v2;
  *(_QWORD *)v20 = 0LL;
  v4 = (int *)((char *)this + 320);
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(v3 + 40))(
         v2,
         *((_QWORD *)this + 26),
         *((unsigned int *)this + 80),
         &v21);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v26 = 0;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 24LL))(v21, &v26);
    v19 = 0;
    (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)v20 + 24LL))(*(_QWORD *)v20, &v19);
    if ( v26 || v19 )
    {
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
        &v27,
        v21);
      v23 = 0;
      v24 = 0LL;
      v25 = &v27;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v23);
      v29 = v28;
      v30 = 0LL;
      v31 = &v27;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v29);
      while ( v23 != v29 || v25 != v31 )
      {
        v13 = v24;
        v32 = v24;
        if ( v24 )
          (*(void (__fastcall **)(ApplicationViewHelpers *))(*(_QWORD *)v24 + 8LL))(v24);
        switch ( *v4 )
        {
          case 10:
            v14 = 11;
            break;
          case 11:
            v14 = 10;
            break;
          case 12:
            v14 = 15;
            break;
          case 15:
            v14 = 12;
            break;
          default:
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x2B9,
              (unsigned int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
              (const char *)0x80070057LL,
              (int)v20);
        }
        LODWORD(v22) = v14;
        v46 = 0LL;
        v15 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, __int128 *))(*(_QWORD *)v13 + 128LL))(v13, &v46);
        v17 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2BC,
            (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
            (const char *)(unsigned int)v15);
          if ( v13 )
            (*(void (__fastcall **)(ApplicationViewHelpers *))(*(_QWORD *)v13 + 16LL))(v13);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
          if ( *(_QWORD *)v20 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v20 + 16LL))(*(_QWORD *)v20);
          if ( v21 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          v47 = &JointResizeTelemetry::CalculateSecondaryViews::`vftable';
          wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)&v47);
          wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v50);
          wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v49);
          wil::ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>(v48);
          return v17;
        }
        WindowForView = ApplicationViewHelpers::GetWindowForView(v13, v16);
        v33 = v13;
        if ( v13 )
          (*(void (__fastcall **)(ApplicationViewHelpers *))(*(_QWORD *)v13 + 8LL))(v13);
        v34 = v14;
        v35 = 0;
        v36 = WindowForView;
        v37 = v46;
        v38 = 1;
        v39 = 0;
        v40 = 0;
        v41 = 0;
        v45 = 0LL;
        v42 = 0LL;
        v43 = 0;
        v44 = 0;
        std::vector<JointResize::SecondaryViewInfo>::emplace_back<JointResize::SecondaryViewInfo>(
          (char *)this + 216,
          &v33);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v42);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v33);
        v32 = (ApplicationViewHelpers *)WindowForView;
        JointResizeTelemetry::CalculateSecondaryViews::AdjacentView<unsigned __int64,int &>(&v47, &v32, &v22);
        if ( v13 )
          (*(void (__fastcall **)(ApplicationViewHelpers *))(*(_QWORD *)v13 + 16LL))(v13);
        ++v23;
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v23);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
        &v27,
        *(_QWORD *)v20);
      v23 = 0;
      v24 = 0LL;
      v25 = &v27;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v23);
      v29 = v28;
      v30 = 0LL;
      v31 = &v27;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v29);
      while ( v23 != v29 || v25 != v31 )
      {
        v8 = v24;
        v22 = v24;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
        v46 = 0LL;
        v9 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, __int128 *))(*(_QWORD *)v8 + 128LL))(v8, &v46);
        v11 = v9;
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2C5,
            (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
            (const char *)(unsigned int)v9);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v20);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
          JointResizeTelemetry::CalculateSecondaryViews::~CalculateSecondaryViews((JointResizeTelemetry::CalculateSecondaryViews *)&v47);
          return v11;
        }
        v12 = ApplicationViewHelpers::GetWindowForView(v8, v10);
        wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
          &v33,
          v8);
        v34 = *v4;
        v35 = 0;
        v36 = v12;
        v37 = v46;
        v38 = 0;
        v39 = 0;
        v40 = 0;
        v41 = 0;
        v45 = 0LL;
        v42 = 0LL;
        v43 = 0;
        v44 = 0;
        std::vector<JointResize::SecondaryViewInfo>::emplace_back<JointResize::SecondaryViewInfo>(
          (char *)this + 216,
          &v33);
        JointResize::SecondaryViewInfo::~SecondaryViewInfo((JointResize::SecondaryViewInfo *)&v33);
        v32 = (ApplicationViewHelpers *)v12;
        JointResizeTelemetry::CalculateSecondaryViews::ComplementaryView<unsigned __int64,int &>(
          &v47,
          &v32,
          (char *)this + 320);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
        ++v23;
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v23);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
      wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(&v47);
      if ( *(_QWORD *)v20 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v20 + 16LL))(*(_QWORD *)v20);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      v47 = &JointResizeTelemetry::CalculateSecondaryViews::`vftable';
      wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)&v47);
      wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v50);
      wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v49);
      wil::ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>(v48);
      return 0LL;
    }
    else
    {
      if ( *(_QWORD *)v20 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v20 + 16LL))(*(_QWORD *)v20);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      v47 = &JointResizeTelemetry::CalculateSecondaryViews::`vftable';
      wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)&v47);
      wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v50);
      wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v49);
      wil::ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>(v48);
      return 2147500037LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A7,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v5);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v47 = &JointResizeTelemetry::CalculateSecondaryViews::`vftable';
    wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)&v47);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v50);
    wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v49);
    wil::ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>(v48);
    return v6;
  }
}
