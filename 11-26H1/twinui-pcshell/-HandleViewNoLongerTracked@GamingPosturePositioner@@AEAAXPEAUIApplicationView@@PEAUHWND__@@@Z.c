/*
 * XREFs of ?HandleViewNoLongerTracked@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUHWND__@@@Z @ 0x1804FDAE0
 * Callers:
 *     ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180500130 (-OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018ADAC (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??4?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802B8D3C (--4-$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_polic.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ?RemoveView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804F1BC4 (-RemoveView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ??$HandlingViewNoLongerTracked@AEAPEAUHWND__@@AEAPEAU1@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@0@Z @ 0x1804F3FCC (--$HandlingViewNoLongerTracked@AEAPEAUHWND__@@AEAPEAU1@@GamingPosturePositionerTelemetryProvider.c)
 *     ?ContainView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804F9868 (-ContainView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?GetRootSwitchableView@GamingPosturePositioner@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1804FD340 (-GetRootSwitchableView@GamingPosturePositioner@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_excep.c)
 *     ?HandleViewFallback@GamingPosturePositioner@@AEAAX_N@Z @ 0x1804FD9E4 (-HandleViewFallback@GamingPosturePositioner@@AEAAX_N@Z.c)
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804FF4B8 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805021D8 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N0@Z @ 0x180502408 (-ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N0@Z.c)
 *     ?SetViewCloaking@GamingPosturePositioner@@CAXPEAUIApplicationView@@PEAUHWND__@@_N@Z @ 0x180503718 (-SetViewCloaking@GamingPosturePositioner@@CAXPEAUIApplicationView@@PEAUHWND__@@_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59720924@@@details@wil@@QEAA_NXZ @ 0x180504DE8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59720924@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingPosturePositioner::HandleViewNoLongerTracked(
        GamingPosturePositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        HWND a3)
{
  struct IApplicationView *v6; // rbx
  __int64 v7; // rcx
  __int64 *RootSwitchableView; // rax
  struct IApplicationView *v9; // rdx
  struct IUnknown *v10; // rdx
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 *v14; // rax
  int ViewPrimary; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rax
  const struct _tlgProvider_t *v20; // rax
  __int64 v21; // r9
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  struct IUnknown *v23; // [rsp+70h] [rbp+40h] BYREF
  HWND v24; // [rsp+80h] [rbp+50h] BYREF
  __int64 (__fastcall ***WindowForView)(ApplicationViewHelpers *, GUID *, __int64 *); // [rsp+88h] [rbp+58h] BYREF

  v24 = a3;
  v6 = 0LL;
  v23 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    RootSwitchableView = GamingPosturePositioner::GetRootSwitchableView(v7, (__int64 *)&WindowForView, (__int64)a2);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
      (__int64 *)&v23,
      RootSwitchableView);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&WindowForView);
    WindowForView = 0LL;
    v6 = (struct IApplicationView *)v23;
    if ( v23 && !SHIsSameObject((struct IUnknown *)a2, v23) )
      WindowForView = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))ApplicationViewHelpers::GetWindowForView(
                                                                                               a2,
                                                                                               v9);
    GamingPosturePositionerTelemetryProvider::HandlingViewNoLongerTracked<HWND__ * &,HWND__ * &>(
      (__int64 *)&v24,
      (__int64 *)&WindowForView);
  }
  GamingApplicationViewCollection::RemoveView((RTL_SRWLOCK *)this + 89, (struct IUnknown *)a2);
  v10 = (struct IUnknown *)*((_QWORD *)this + 31);
  if ( v10 && SHIsSameObject((struct IUnknown *)a2, v10) )
  {
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    {
      v11 = GamingPosturePositionerTelemetryProvider::Provider();
      if ( *(_DWORD *)v11 > 4u )
      {
        WindowForView = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
          (__int64)v11,
          byte_1808153F0,
          0LL,
          v12,
          (__int64)&WindowForView);
      }
    }
    GamingPosturePositioner::ReleasePrimaryView(this, 0, 0);
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    {
      v14 = GamingPosturePositioner::GetRootSwitchableView(v13, (__int64 *)&WindowForView, (__int64)a2);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
        (__int64 *)&v23,
        v14);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&WindowForView);
      v6 = (struct IApplicationView *)v23;
    }
    if ( v6 && GamingApplicationViewCollection::ContainView((RTL_SRWLOCK *)this + 89, (struct IUnknown *)v6) )
    {
      ViewPrimary = GamingPosturePositioner::MakeViewPrimary(this, v6);
      v16 = retaddr;
      if ( ViewPrimary < 0 )
      {
        v17 = 3793LL;
LABEL_30:
        wil::details::in1diag3::_Log_Hr(
          v16,
          (void *)v17,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
          (const char *)(unsigned int)ViewPrimary);
      }
    }
    else
    {
      GamingPosturePositioner::HandleViewFallback(this, 1);
    }
  }
  else if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_59720924>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_59720924>::GetImpl'::`2'::impl) )
  {
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    {
      v19 = GamingPosturePositioner::GetRootSwitchableView(v18, (__int64 *)&WindowForView, (__int64)a2);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
        (__int64 *)&v23,
        v19);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&WindowForView);
      v6 = (struct IApplicationView *)v23;
    }
    if ( v6 && SHIsSameObject(*((struct IUnknown **)this + 31), (struct IUnknown *)v6) )
    {
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
      {
        GamingPosturePositioner::SetViewCloaking((struct IApplicationView *)a2, a3, 0);
      }
      else
      {
        if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
        {
          v20 = GamingPosturePositionerTelemetryProvider::Provider();
          if ( *(_DWORD *)v20 > 4u )
          {
            WindowForView = a2;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
              (__int64)v20,
              byte_18081539C,
              0LL,
              v21,
              (__int64)&WindowForView);
          }
        }
        ViewPrimary = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), __int64))(*a2)[12])(
                        a2,
                        1LL);
        v16 = retaddr;
        if ( ViewPrimary < 0 )
        {
          v17 = 3818LL;
          goto LABEL_30;
        }
      }
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
}
