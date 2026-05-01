/*
 * XREFs of ?SetUwpViewFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180503480
 * Callers:
 *     _lambda_61aaaea7faa44b78167a0b42c2312525_::operator() @ 0x1804F7D5C (_lambda_61aaaea7faa44b78167a0b42c2312525_--operator().c)
 *     ?ArrangeViewForFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804F8EF4 (-ArrangeViewForFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?HandleUwpApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@_N@Z @ 0x1804FD780 (-HandleUwpApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B150C (-InternalRelease@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018ADAC (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x180326550 (--$emplace@VActivityThreadWatcher@wil@@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVAct.c)
 *     ??1?$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ @ 0x180328D64 (--1-$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??$MakeAndInitializeOrThrow@VCCommonApplicationViewPosition@@AEAUCRect@Geometry@@@wil@@YA?AV?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@AEAUCRect@Geometry@@@Z @ 0x1804EF3D4 (--$MakeAndInitializeOrThrow@VCCommonApplicationViewPosition@@AEAUCRect@Geometry@@@wil@@YA-AV-$Co.c)
 *     ?CreateApplicationViewOperation@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewOperation@@Uerr_exception_policy@wil@@@wil@@W4APPLICATION_FRAME_CHROME_OPTIONS@@V?$function@$$A6A?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ@std@@@Z @ 0x1804F01CC (-CreateApplicationViewOperation@KioskPositioner@@AEAA-AV-$com_ptr_t@UIApplicationViewOperation@@.c)
 *     ??$RepositioningView@AEAPEAUHWND__@@AEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAJ1111111@Z @ 0x1804F576C (--$RepositioningView@AEAPEAUHWND__@@AEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@GamingPosturePositionerTele.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805021D8 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?SetPositionerMonitor@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1805033F0 (-SetPositionerMonitor@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@.c)
 *     ?WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1805039E0 (-WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA-AVActivityThreadWatcher@wil@@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall GamingPosturePositioner::SetUwpViewFullScreen(
        GamingPosturePositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IImmersiveApplication **a3)
{
  __int64 v6; // rax
  GamingPosturePositioner *v7; // rcx
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r9
  int v10; // eax
  struct IApplicationView *v11; // rdx
  const char *v12; // r9
  __int64 v13; // rcx
  HWND v14; // rbx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-E0h]
  int v19[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v21[10]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[80]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v23; // [rsp+100h] [rbp+0h] BYREF
  struct tagRECT Rect; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v22[72] = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    v6 = GamingPosturePositionerTelemetryProvider::WatchCurrentThread(v21, "SetUwpViewFullScreen");
    std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>((__int64)v22, v6);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v21);
  }
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    v8 = GamingPosturePositionerTelemetryProvider::Provider((__int64)v7);
    if ( *(_DWORD *)v8 > 4u )
    {
      *(_QWORD *)v19 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        (__int64)v8,
        byte_180815BD1,
        0LL,
        v9,
        (__int64)v19);
    }
  }
  GamingPosturePositioner::SetPositionerMonitor(v7, a2, a3);
  v23 = 0LL;
  v10 = (*((__int64 (__fastcall **)(struct IImmersiveApplication **, __int128 *))*a3 + 11))(a3, &v23);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC6C,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v10,
      v18);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    *(_QWORD *)v19 = ApplicationViewHelpers::GetWindowForView(a2, v11);
    Rect = 0LL;
    if ( !GetWindowRect(*(HWND *)v19, &Rect) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xC73,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
        v12);
    GamingPosturePositionerTelemetryProvider::RepositioningView<HWND__ * &,long &,long &,long &,long &,long &,long &,long &,long &>();
  }
  wil::MakeAndInitializeOrThrow<CCommonApplicationViewPosition,Geometry::CRect &>(&v20, &v23);
  v21[0] = off_1807502C8;
  v21[1] = this;
  v21[7] = v21;
  KioskPositioner::CreateApplicationViewOperation(v13, (__int64 *)v19, 0, (__int64)v21);
  v14 = *(HWND *)v19;
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v19 + 80LL))(*(_QWORD *)v19, v20);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC7B,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v15);
  v16 = (*(__int64 (__fastcall **)(HWND, __int64))(*(_QWORD *)v14 + 96LL))(v14, 1LL);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC7C,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v16);
  v17 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), HWND))(*a2)[40])(
          a2,
          v14);
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC7D,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      (const char *)(unsigned int)v17);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v19);
  Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease(&v20);
  std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)v22);
}
