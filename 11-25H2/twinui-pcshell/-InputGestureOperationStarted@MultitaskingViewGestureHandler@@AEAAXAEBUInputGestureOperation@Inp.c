/*
 * XREFs of ?InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18048B830
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180071F24 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800FAC08 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AppWindow@?$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801CDA74 (-AppWindow@-$consume_Windows_Internal_Shell_SnapComponent_IControlWindow@UIControlWindow@SnapCom.c)
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x1801FA274 (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A72E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$InputGestureOperationStarted@_K@MultitaskingViewTelemetry@@SAX$$QEA_K@Z @ 0x18048808C (--$InputGestureOperationStarted@_K@MultitaskingViewTelemetry@@SAX$$QEA_K@Z.c)
 *     ??4?$function@$$A6AXPEAUHWND__@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1804893F4 (--4-$function@$$A6AXPEAUHWND__@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?InitiateSwipeDownAsync@MultitaskingViewGestureHandler@@AEAA?AUfire_and_forget@winrt@@UInputGestureOperation@Input@Internal@UI@Windows@3@AEBUInputGestureOperationEventArgs@56783@@Z @ 0x18048B760 (-InitiateSwipeDownAsync@MultitaskingViewGestureHandler@@AEAA-AUfire_and_forget@winrt@@UInputGest.c)
 *     ?Position@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18048BEE4 (-Position@-$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Inp.c)
 *     ?HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ @ 0x1804951C0 (-HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ.c)
 *     ?StartSwitchGestureOperationAsync@CAppThumbnailWindow@@QEAA?AUfire_and_forget@winrt@@UInputGestureOperation@Input@Internal@UI@Windows@3@AEBUInputGestureOperationEventArgs@56783@W4GestureDirection@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x180498910 (-StartSwitchGestureOperationAsync@CAppThumbnailWindow@@QEAA-AUfire_and_forget@winrt@@UInputGestu.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18065EE5C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall MultitaskingViewGestureHandler::InputGestureOperationStarted(
        MultitaskingViewGestureHandler *this,
        const struct winrt::Windows::UI::Internal::Input::InputGestureOperation *a2,
        const struct winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs *a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r13d
  __int64 v10; // rbx
  int (__fastcall *v11)(__int64, _DWORD *, GUID *, GUID *); // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  _QWORD *v17; // rbx
  _QWORD *v18; // r15
  CAppThumbnailWindow *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdx
  int *v22; // [rsp+20h] [rbp-79h]
  _BYTE v23[8]; // [rsp+30h] [rbp-69h] BYREF
  int v24[2]; // [rsp+38h] [rbp-61h] BYREF
  __int64 v25; // [rsp+40h] [rbp-59h] BYREF
  __int64 v26; // [rsp+48h] [rbp-51h] BYREF
  _DWORD v27[2]; // [rsp+50h] [rbp-49h] BYREF
  CAppThumbnailWindow *v28; // [rsp+58h] [rbp-41h] BYREF
  std::_Ref_count_base *v29; // [rsp+60h] [rbp-39h]
  __int64 (__fastcall **v30)(); // [rsp+70h] [rbp-29h] BYREF
  MultitaskingViewGestureHandler *v31; // [rsp+78h] [rbp-21h]
  __int64 (__fastcall ***v32)(); // [rsp+A8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v25 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::AppWindow((__int64 *)a2);
  MultitaskingViewTelemetry::InputGestureOperationStarted<unsigned __int64>(&v25);
  v6 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IControlWindow<winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::AppWindow((__int64 *)a2);
  if ( v6 == 4 )
  {
    *(_QWORD *)v24 = *(_QWORD *)a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)v24);
    MultitaskingViewGestureHandler::InitiateSwipeDownAsync((__int64)this, v23, (__int64 *)v24, (__int64)a3);
  }
  else if ( v6 == 6 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
      1u,
      v7,
      v8);
    *((_DWORD *)this + 57) = 0;
    *((_BYTE *)this + 224) = 0;
    v9 = MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(
           *((_DWORD *)this + 32),
           *((_DWORD *)this + 33));
    *(_QWORD *)v24 = 0LL;
    v27[0] = (int)*(float *)winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::Position(
                              a2,
                              &v25);
    v27[1] = (int)*(float *)(winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::Position(
                               a2,
                               &v25)
                           + 4);
    v10 = *((_QWORD *)this + 5);
    v11 = *(int (__fastcall **)(__int64, _DWORD *, GUID *, GUID *))(*(_QWORD *)v10 + 96LL);
    *(_QWORD *)v24 = 0LL;
    v22 = v24;
    if ( v11(v10, v27, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000) < 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgs(v13, v12, v14, v15);
    }
    else
    {
      v25 = 0LL;
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v24 + 40LL))(*(_QWORD *)v24, &v25);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x424,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)(unsigned int)v16,
          (int)v24);
      v17 = (_QWORD *)*((_QWORD *)this + 12);
      v18 = (_QWORD *)*((_QWORD *)this + 13);
      while ( v17 != v18 )
      {
        std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v28, v17);
        v19 = v28;
        if ( v25 == *((_QWORD *)v28 + 19) && CAppThumbnailWindow::HasSwitchAnimationVisuals(v28) )
        {
          v30 = off_18071D350;
          v31 = this;
          v32 = &v30;
          std::function<void (HWND__ *)>::operator=((__int64)v19 + 256, (__int64)&v30);
          std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
            (__int64)&v30,
            v20);
          v30 = off_18071D380;
          v31 = this;
          v32 = &v30;
          std::function<void (void)>::operator=((__int64)v19 + 320, (__int64)&v30);
          std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
            (__int64)&v30,
            v21);
          v26 = *(_QWORD *)a2;
          Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v26);
          LODWORD(v22) = v9;
          CAppThumbnailWindow::StartSwitchGestureOperationAsync(v19, v23, &v26, a3, v22);
          *((_BYTE *)this + 248) = 1;
          if ( v29 )
            std::_Ref_count_base::_Decref(v29);
          break;
        }
        if ( v29 )
          std::_Ref_count_base::_Decref(v29);
        v17 += 2;
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v24);
  }
}
