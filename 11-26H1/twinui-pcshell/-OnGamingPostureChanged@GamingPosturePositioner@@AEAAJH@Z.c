/*
 * XREFs of ?OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z @ 0x180500B10
 * Callers:
 *     ?ControlGained@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1804F98C0 (-ControlGained@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnk.c)
 *     CAsyncCallbackWithLambda__lambda_6cd7bf6f86c6b42e1fbc2c6bc413e11c___::Invoke @ 0x1804FEBB0 (CAsyncCallbackWithLambda__lambda_6cd7bf6f86c6b42e1fbc2c6bc413e11c___--Invoke.c)
 *     CAsyncCallbackWithLambda__lambda_aaa29ad71ed7f57812cd6c4aeeafb90e___::Invoke @ 0x1804FEBF0 (CAsyncCallbackWithLambda__lambda_aaa29ad71ed7f57812cd6c4aeeafb90e___--Invoke.c)
 *     ?perform_delayed_initialization@GamingPosturePositioner@@UEAAXXZ @ 0x180505500 (-perform_delayed_initialization@GamingPosturePositioner@@UEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18008FE80 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800B6908 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x1800F7C3C (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F9150 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_1800F9150.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800F91D4 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWINEVENTHOOK__@@P6AHPEAU1@@Z$1?UnhookWinEvent@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWINEVENTHOOK__@@@Z @ 0x18022F878 (-reset@-$unique_storage@U-$resource_policy@PEAUHWINEVENTHOOK__@@P6AHPEAU1@@Z$1-UnhookWinEvent@@Y.c)
 *     ??$make_wnf_subscription@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1802A7AD0 (--$make_wnf_subscription@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x180326550 (--$emplace@VActivityThreadWatcher@wil@@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVAct.c)
 *     ??1?$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ @ 0x180328D64 (--1-$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ @ 0x1803307AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_60149300@@@details@wil@@QEAA_NXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHWINEVENTHOOK__@@P6AHPEAU1@@Z$1?UnhookWinEvent@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180468A90 (--1-$unique_storage@U-$resource_policy@PEAUHWINEVENTHOOK__@@P6AHPEAU1@@Z$1-UnhookWinEvent@@YAH0@.c)
 *     ??$OnGamingPostureChanged@AEA_N@GamingPosturePositionerTelemetryProvider@@SAXAEA_N@Z @ 0x1804F5164 (--$OnGamingPostureChanged@AEA_N@GamingPosturePositionerTelemetryProvider@@SAXAEA_N@Z.c)
 *     ??$SetWindowAsFallbackForeground@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@@Z @ 0x1804F6204 (--$SetWindowAsFallbackForeground@AEAPEAUHWND__@@@GamingPosturePositionerTelemetryProvider@@SAXAE.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1805021D8 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?SetVisibility@GamingFallbackWindow@@QEAAX_N@Z @ 0x18050378C (-SetVisibility@GamingFallbackWindow@@QEAAX_N@Z.c)
 *     ?WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1805039E0 (-WatchCurrentThread@GamingPosturePositionerTelemetryProvider@@SA-AVActivityThreadWatcher@wil@@PE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59118310@@@details@wil@@QEAA_NXZ @ 0x180504CBC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59118310@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GamingPosturePositioner::OnGamingPostureChanged(GamingPosturePositioner *this, int a2)
{
  unsigned __int8 v3; // di
  __int64 v4; // rax
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r9
  __int64 v7; // r8
  int v8; // eax
  wil::details *v9; // rdx
  int v10; // eax
  HWINEVENTHOOK v11; // rax
  wil::details **wnf; // rax
  struct wil::details::wnf_subscription_state_base *v13; // rdx
  int idProcess; // [rsp+20h] [rbp-E0h]
  char v16[8]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details *v17; // [rsp+48h] [rbp-B8h] BYREF
  HWINEVENTHOOK v18[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[80]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v20[8]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v21[14]; // [rsp+B8h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v3 = a2 != 0;
  v16[0] = a2 != 0;
  v19[72] = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
  {
    v4 = GamingPosturePositionerTelemetryProvider::WatchCurrentThread(v20, "OnGamingPostureChanged");
    std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>((__int64)v19, v4);
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v20);
    GamingPosturePositionerTelemetryProvider::OnGamingPostureChanged<bool &>(v16);
  }
  if ( *((_QWORD *)this + 94) && *((_BYTE *)this + 648) != v3 )
  {
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
    {
      v5 = GamingPosturePositionerTelemetryProvider::Provider();
      if ( *(_DWORD *)v5 > 4u )
      {
        LODWORD(v17) = v3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          (__int64)v5,
          byte_180816038,
          0LL,
          v6,
          (__int64)&v17);
      }
    }
    v7 = 0LL;
    if ( v3 )
      v7 = 4LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 24) + 56LL))(
           *((_QWORD *)this + 24),
           4LL,
           v7);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA3B,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
        (const char *)(unsigned int)v8,
        idProcess);
    GamingFallbackWindow::SetVisibility(*((GamingFallbackWindow **)this + 96), v3);
    if ( v3 )
      v9 = *(wil::details **)(*((_QWORD *)this + 96) + 24LL);
    else
      v9 = 0LL;
    v17 = v9;
    v10 = (*(__int64 (__fastcall **)(_QWORD, wil::details *, _QWORD))(**((_QWORD **)this + 27) + 56LL))(
            *((_QWORD *)this + 27),
            v9,
            0LL);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA41,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
        (const char *)(unsigned int)v10);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_60149300>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_60149300>::GetImpl'::`2'::impl) )
      GamingPosturePositionerTelemetryProvider::SetWindowAsFallbackForeground<HWND__ * &>((__int64 *)&v17);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_59118310>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_59118310>::GetImpl'::`2'::impl) )
    {
      if ( v3 )
      {
        v11 = SetWinEventHook(
                0x20u,
                0x20u,
                0LL,
                (WINEVENTPROC)lambda_fe44875c696bc544c1b0599fc0c72566_::_lambda_invoker_cdecl_,
                0,
                0,
                0);
        v18[0] = v11;
        if ( (HWINEVENTHOOK *)((char *)this + 160) != v18 )
        {
          wil::details::unique_storage<wil::details::resource_policy<HWINEVENTHOOK__ *,int (*)(HWINEVENTHOOK__ *),&int UnhookWinEvent(HWINEVENTHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HWINEVENTHOOK__ *,HWINEVENTHOOK__ *,0,std::nullptr_t>>::reset(
            (HWINEVENTHOOK *)this + 20,
            v11);
          v18[0] = 0LL;
        }
        wil::details::unique_storage<wil::details::resource_policy<HWINEVENTHOOK__ *,int (*)(HWINEVENTHOOK__ *),&int UnhookWinEvent(HWINEVENTHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HWINEVENTHOOK__ *,HWINEVENTHOOK__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HWINEVENTHOOK__ *,int (*)(HWINEVENTHOOK__ *),&int UnhookWinEvent(HWINEVENTHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HWINEVENTHOOK__ *,HWINEVENTHOOK__ *,0,std::nullptr_t>>(v18);
        v21[0] = off_1807504C8;
        v21[13] = v21;
        wnf = (wil::details **)wil::make_wnf_subscription<unsigned long>(
                                 &v17,
                                 &WNF_SHEL_LOCKSCREEN_ACTIVE,
                                 (__int64)v20,
                                 0xFFFFFFFF);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
          (wil::details **)this + 19,
          wnf);
        if ( v17 )
          wil::details::delete_wnf_subscription_state(v17, v13);
        wistd::function<bool (long)>::~function<bool (long)>((__int64)v20);
      }
      else
      {
        wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
          (void (__fastcall ****)(_QWORD, __int64))this + 19,
          0LL);
        wil::details::unique_storage<wil::details::resource_policy<HWINEVENTHOOK__ *,int (*)(HWINEVENTHOOK__ *),&int UnhookWinEvent(HWINEVENTHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HWINEVENTHOOK__ *,HWINEVENTHOOK__ *,0,std::nullptr_t>>::reset(
          (HWINEVENTHOOK *)this + 20,
          0LL);
      }
    }
    *((_BYTE *)this + 648) = v3;
  }
  std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::~_Optional_destruct_base<wil::ActivityThreadWatcher,0>((wil::ActivityThreadWatcher *)v19);
  return 0LL;
}
