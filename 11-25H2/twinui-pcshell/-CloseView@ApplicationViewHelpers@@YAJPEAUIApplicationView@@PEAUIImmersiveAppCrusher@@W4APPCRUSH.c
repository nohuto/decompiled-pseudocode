/*
 * XREFs of ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x180659AF8
 * Callers:
 *     ?SetViewStateForDesiredAppState@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x180324BF0 (-SetViewStateForDesiredAppState@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803FBE04 (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1804B2760 (-CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804DD9DC (-CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewStateForDesiredAppState@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1804E8CA0 (-SetViewStateForDesiredAppState@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATI.c)
 *     ?_CloseView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804F0EF0 (-_CloseView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1804F8C80 (-SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180508460 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z @ 0x18055244C (-CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z.c)
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806999EC (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitch.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180051C40 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800F10D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____lambda_1a5eae780b6c1663d254d797c20a7e0a___ @ 0x180659900 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a5eae780b6c1.c)
 *     _lambda_1a5eae780b6c1663d254d797c20a7e0a_::__lambda_1a5eae780b6c1663d254d797c20a7e0a_ @ 0x1806599C8 (_lambda_1a5eae780b6c1663d254d797c20a7e0a_--__lambda_1a5eae780b6c1663d254d797c20a7e0a_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationViewHelpers::CloseView(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        IUnknown *a2,
        int a3,
        int a4,
        int a5)
{
  int (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v10; // rax
  int v11; // eax
  int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v16; // rax
  int v17; // eax
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64 *); // rdi
  int v20; // eax
  int v21; // eax
  volatile signed __int32 **v22; // rax
  HWND v23; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v26; // [rsp+30h] [rbp-50h] BYREF
  HWND hwnd; // [rsp+38h] [rbp-48h] BYREF
  __int64 v28; // [rsp+40h] [rbp-40h] BYREF
  __int64 v29; // [rsp+48h] [rbp-38h] BYREF
  volatile signed __int32 *v30; // [rsp+50h] [rbp-30h] BYREF
  __int64 v31; // [rsp+58h] [rbp-28h] BYREF
  __int64 v32; // [rsp+60h] [rbp-20h] BYREF
  int v33; // [rsp+68h] [rbp-18h]
  int v34; // [rsp+6Ch] [rbp-14h]
  int v35; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 pvAttribute; // [rsp+A0h] [rbp+20h] BYREF

  v29 = 0LL;
  v28 = 0LL;
  v9 = (int (__fastcall *)(_QWORD, GUID *, __int64 *))**a1;
  v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IWin32ApplicationView>>(&v29);
  if ( v9(a1, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v10) >= 0 )
  {
    hwnd = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v29 + 24LL))(v29, &hwnd);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = (unsigned int)v11;
      v14 = 132LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)v13);
      goto LABEL_23;
    }
    if ( (a5 & 1) != 0 )
    {
      LODWORD(pvAttribute) = 1;
      DwmSetWindowAttribute(hwnd, 3u, &pvAttribute, 4u);
    }
    PostMessageW(hwnd, 0x112u, 0xF060uLL, 0LL);
    goto LABEL_9;
  }
  v15 = **a1;
  v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v28);
  v17 = v15(a1, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v16);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x94,
      (int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)(unsigned int)v17);
LABEL_9:
    v12 = 0;
    goto LABEL_23;
  }
  if ( !a2 )
  {
    v12 = -2147019873;
    v13 = 2147947423LL;
    v14 = 150LL;
    goto LABEL_12;
  }
  pvAttribute = 0LL;
  v18 = v28;
  v19 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&pvAttribute);
  v20 = v19(v18, &pvAttribute);
  v12 = v20;
  if ( v20 >= 0 )
  {
    v26 = 0LL;
    v21 = CMarshaledInterface::Marshal(&v26, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, a2, 2);
    v12 = v21;
    if ( v21 >= 0 )
    {
      v31 = v26;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v31);
      v32 = pvAttribute;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v32);
      v33 = a3;
      v34 = a4;
      v35 = a5;
      v22 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a5eae780b6c1663d254d797c20a7e0a_____lambda_1a5eae780b6c1663d254d797c20a7e0a___(
              (volatile signed __int32 **)&hwnd,
              (__int64)&v31);
      v30 = *v22;
      *v22 = 0LL;
      v23 = hwnd;
      if ( hwnd )
      {
        hwnd = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release((volatile signed __int32 *)v23);
      }
      CurrentThreadId = GetCurrentThreadId();
      v12 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
      lambda_1a5eae780b6c1663d254d797c20a7e0a_::__lambda_1a5eae780b6c1663d254d797c20a7e0a_(&v31);
      if ( v12 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA8,
          (int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
          (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA0,
        (int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v21);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x99,
      (int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)(unsigned int)v20);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&pvAttribute);
LABEL_23:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
  return (unsigned int)v12;
}
