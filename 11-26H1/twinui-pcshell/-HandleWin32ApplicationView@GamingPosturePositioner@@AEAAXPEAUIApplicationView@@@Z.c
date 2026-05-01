/*
 * XREFs of ?HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804FE334
 * Callers:
 *     ?HandleApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804FD5E0 (-HandleApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180500130 (-OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@455@Z @ 0x18000AE54 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U3@U3@@-$_tlgW.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C1DD0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800F7710 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?IsViewShownInSwitchers@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18016D508 (-IsViewShownInSwitchers@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180173FA4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017BAF4 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018ADAC (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x180326550 (--$emplace@VActivityThreadWatcher@wil@@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVAct.c)
 *     ??1?$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ @ 0x180328D64 (--1-$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$HandlingView@AEAPEAUHWND__@@AEAY05$$CBGAEA_N_NI@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAY05$$CBGAEA_N$$QEA_N$$QEAI@Z @ 0x1804F3ED0 (--$HandlingView@AEAPEAUHWND__@@AEAY05$$CBGAEA_N_NI@GamingPosturePositionerTelemetryProvider@@SAX.c)
 *     ?AddView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804F8AA0 (-AddView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?BringToFront@GamingApplicationViewCollection@@QEAAXPEAUIApplicationView@@@Z @ 0x1804F9750 (-BringToFront@GamingApplicationViewCollection@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?HasFallbackOccurredRecently@GamingPosturePositioner@@AEAA_NXZ @ 0x1804FE7A8 (-HasFallbackOccurredRecently@GamingPosturePositioner@@AEAA_NXZ.c)
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804FF4B8 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805021D8 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?SetFocus@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1805031CC (-SetFocus@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?ShouldImmediatelyMakeViewPrimary@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180503870 (-ShouldImmediatelyMakeViewPrimary@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1805039E0 (-WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA-AVActivityThreadWatcher@wil@@PE.c)
 *     ?HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18067FEAC (-HasRootSwitchableOwner@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall GamingPosturePositioner::HandleWin32ApplicationView(
        GamingPosturePositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  struct IApplicationView *v4; // rdx
  __int64 v5; // rax
  HWND WindowForView; // r14
  struct IApplicationView *v7; // rdx
  int IsViewShownInSwitchers; // ebx
  const char *v9; // r9
  struct IApplicationView *v10; // rdx
  __int64 (__fastcall *v11)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  void **v12; // rax
  struct IApplicationView *v13; // rdx
  void *v14; // rdi
  const char *v15; // r9
  HANDLE v16; // rbx
  char *FileNameW; // rax
  const char *v18; // r9
  const struct _tlgProvider_t *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  BOOL v22; // eax
  RTL_SRWLOCK *v23; // rcx
  const struct _tlgProvider_t *v24; // rax
  __int64 v25; // r9
  int ViewPrimary; // eax
  const char *v27; // r9
  DWORD v28; // [rsp+64h] [rbp-324h] BYREF
  DWORD dwProcessId; // [rsp+68h] [rbp-320h] BYREF
  DWORD dwSize; // [rsp+6Ch] [rbp-31Ch] BYREF
  HWND v31; // [rsp+70h] [rbp-318h] BYREF
  void *v32; // [rsp+78h] [rbp-310h] BYREF
  void *v33; // [rsp+80h] [rbp-308h] BYREF
  void *v34; // [rsp+88h] [rbp-300h] BYREF
  int v35[2]; // [rsp+90h] [rbp-2F8h] BYREF
  void *v36; // [rsp+98h] [rbp-2F0h] BYREF
  HWND v37; // [rsp+A0h] [rbp-2E8h] BYREF
  HWND v38; // [rsp+A8h] [rbp-2E0h] BYREF
  _BYTE v39[80]; // [rsp+B0h] [rbp-2D8h] BYREF
  _BYTE v40[80]; // [rsp+100h] [rbp-288h] BYREF
  WCHAR ExeName[264]; // [rsp+150h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+388h] [rbp+0h]

  v39[72] = 0;
  try
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    {
      v5 = GamingPosturePositionerTelemetryProvider::WatchCurrentThread(v40, "HandleWin32ApplicationView");
      std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>((__int64)v39, v5);
      wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v40);
    }
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, v4);
    v31 = WindowForView;
    v28 = 0;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    {
      LOBYTE(IsViewShownInSwitchers) = ApplicationViewHelpers::IsViewShownInSwitchers((ApplicationViewHelpers *)a2, v7);
      if ( !(unsigned int)GetWindowBand(WindowForView, &v28) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0xB26,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
          v9);
      dwProcessId = v28;
      GamingPosturePositionerTelemetryProvider::HandlingView<HWND__ * &,unsigned short const (&)[6],bool &,bool,unsigned int>((__int64 *)&v31);
    }
    else
    {
      v31 = 0LL;
      v11 = (*a2)[17];
      v12 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v31);
      ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), void **))v11)(
        a2,
        v12);
      dwProcessId = 0;
      v14 = 0LL;
      v34 = 0LL;
      if ( WindowForView )
      {
        if ( !(unsigned int)GetWindowBand(WindowForView, &v28) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0xB33,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
            v15);
        if ( GetWindowThreadProcessId(WindowForView, &dwProcessId) )
        {
          v16 = OpenProcess(0x1000u, 0, dwProcessId);
          v33 = v16;
          if ( (((unsigned __int64)v16 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          {
            memset_0(ExeName, 0, 0x208uLL);
            dwSize = 260;
            if ( QueryFullProcessImageNameW(v16, 0, ExeName, &dwSize) )
            {
              FileNameW = (char *)PathFindFileNameW(ExeName);
              if ( FileNameW )
              {
                wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
                  &v32,
                  FileNameW,
                  0xFFFFFFFFFFFFFFFFuLL,
                  v18);
                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
                  &v34,
                  &v32);
                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v32);
                v14 = v34;
              }
            }
          }
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v33);
        }
      }
      IsViewShownInSwitchers = (unsigned __int8)ApplicationViewHelpers::IsViewShownInSwitchers(
                                                  (ApplicationViewHelpers *)a2,
                                                  v13);
      if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
      {
        v19 = GamingPosturePositionerTelemetryProvider::Provider();
        if ( *(_DWORD *)v19 > 4u )
        {
          dwSize = v28;
          LODWORD(v33) = IsViewShownInSwitchers;
          v36 = v14;
          LODWORD(v32) = dwProcessId;
          v37 = v31;
          v38 = WindowForView;
          *(_QWORD *)v35 = a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)v19,
            (__int64)&unk_1808161AE,
            v20,
            v21,
            (__int64)v35,
            (__int64)&v38,
            &v37,
            (__int64)&v32,
            &v36);
        }
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v34);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v31);
    }
    if ( (_BYTE)IsViewShownInSwitchers
      && v28 == 1
      && !ApplicationViewHelpers::HasRootSwitchableOwner((struct IUnknown *)a2, v10) )
    {
      v22 = IsIconic(WindowForView);
      v23 = (RTL_SRWLOCK *)((char *)this + 712);
      if ( v22 )
        GamingApplicationViewCollection::AddView(v23, (struct IUnknown *)a2);
      else
        GamingApplicationViewCollection::BringToFront(v23, (struct IUnknown *)a2);
      if ( GamingPosturePositioner::HasFallbackOccurredRecently(this)
        || GamingPosturePositioner::ShouldImmediatelyMakeViewPrimary(this, (struct IApplicationView *)a2) )
      {
        if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
        {
          v24 = GamingPosturePositionerTelemetryProvider::Provider();
          if ( *(_DWORD *)v24 > 4u )
          {
            *(_QWORD *)v35 = a2;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
              (__int64)v24,
              byte_1808160BE,
              0LL,
              v25,
              (__int64)v35);
          }
        }
        ViewPrimary = GamingPosturePositioner::MakeViewPrimary(this, (struct IApplicationView *)a2);
        if ( ViewPrimary < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xB6D,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
            (const char *)(unsigned int)ViewPrimary);
        GamingPosturePositioner::SetFocus(this, (struct IApplicationView *)a2);
      }
    }
    std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)v39);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xB72,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      v27);
  }
}
