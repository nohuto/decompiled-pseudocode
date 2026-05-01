/*
 * XREFs of ?ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N0@Z @ 0x180502408
 * Callers:
 *     ?ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1804FA010 (-ControlLost@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUn.c)
 *     ?HandleFallbackForMinimizedView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804FD620 (-HandleFallbackForMinimizedView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?HandleViewNoLongerTracked@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUHWND__@@@Z @ 0x1804FDAE0 (-HandleViewNoLongerTracked@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUHWND__@@@Z.c)
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804FF4B8 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180500130 (-OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x18000AF78 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1KUtagRECT@@@Z@std@@@Z @ 0x1804FF398 (-LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV-$func_ea_1804FF398.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805021D8 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?ReleaseSecondaryView@GamingPosturePositioner@@AEAAXXZ @ 0x180502664 (-ReleaseSecondaryView@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?SetInterceptMoveAndSize@GamingPosturePositioner@@AEAAXPEAUHWND__@@_N@Z @ 0x180503354 (-SetInterceptMoveAndSize@GamingPosturePositioner@@AEAAXPEAUHWND__@@_N@Z.c)
 *     ?SetViewCloaking@GamingPosturePositioner@@CAXPEAUIApplicationView@@PEAUHWND__@@_N@Z @ 0x180503718 (-SetViewCloaking@GamingPosturePositioner@@CAXPEAUIApplicationView@@PEAUHWND__@@_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60153759@@@details@wil@@QEAA_NXZ @ 0x180504EE4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60153759@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GamingPosturePositioner::ReleasePrimaryView(GamingPosturePositioner *this, char a2, char a3)
{
  __int64 *v6; // rbx
  char IsEnabled; // al
  struct IApplicationView *v8; // rdx
  __int64 (__fastcall ***v9)(ApplicationViewHelpers *, GUID *, __int64 *); // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // rax
  int v13; // eax
  char v14; // al
  struct IApplicationView *v15; // rcx
  int v16; // eax
  const char *v17; // r9
  HWND v18[2]; // [rsp+48h] [rbp-80h] BYREF
  int v19[2]; // [rsp+58h] [rbp-70h]
  int v20; // [rsp+62h] [rbp-66h]
  __int16 v21; // [rsp+66h] [rbp-62h]
  _QWORD v22[2]; // [rsp+70h] [rbp-58h] BYREF
  char v23; // [rsp+80h] [rbp-48h]
  char v24; // [rsp+81h] [rbp-47h]
  int v25; // [rsp+82h] [rbp-46h]
  __int16 v26; // [rsp+86h] [rbp-42h]
  _QWORD *v27; // [rsp+A8h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  try
  {
    v6 = (__int64 *)((char *)this + 248);
    if ( *((_QWORD *)this + 31) )
    {
      v18[0] = 0LL;
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl);
      v9 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*v6;
      if ( IsEnabled )
      {
        v22[0] = off_180750178;
        v22[1] = v18;
        v23 = a2;
        v24 = a3;
        v25 = v20;
        v26 = v21;
        v27 = v22;
        GamingPosturePositioner::LogViewDiagnosticInfo(v9, (__int64)v22);
        if ( v27 )
        {
          v10 = v22;
          LOBYTE(v10) = v27 != v22;
          (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v27 + 32LL))(v27, v10);
        }
      }
      else
      {
        v18[0] = (HWND)ApplicationViewHelpers::GetWindowForView(v9, v8);
      }
      if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
      {
        v12 = GamingPosturePositionerTelemetryProvider::Provider(v11);
        if ( *(_DWORD *)v12 > 4u )
        {
          v18[1] = v18[0];
          *(_QWORD *)v19 = *v6;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
            (__int64)v12,
            (__int64)&unk_18081673E);
        }
      }
      if ( a3 )
      {
        if ( a2 )
        {
          if ( v18[0] )
          {
            v13 = DwmpTransitionWindow(v18[0], 805306386LL);
            if ( v13 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x506,
                (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
                (const char *)(unsigned int)v13);
          }
        }
        v14 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl);
        v15 = (struct IApplicationView *)*v6;
        if ( v14 )
        {
          GamingPosturePositioner::SetViewCloaking(v15, v18[0], 1);
        }
        else
        {
          v16 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, __int64))(*(_QWORD *)v15 + 96LL))(
                  v15,
                  1LL,
                  1LL);
          if ( v16 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x50F,
              (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
              (const char *)(unsigned int)v16);
        }
      }
      GamingPosturePositioner::SetInterceptMoveAndSize(this, v18[0], 0);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v6);
      *((_BYTE *)this + 652) = 0;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_60153759>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_60153759>::GetImpl'::`2'::impl) )
      GamingPosturePositioner::ReleaseSecondaryView(this);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x51D,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      v17);
  }
}
