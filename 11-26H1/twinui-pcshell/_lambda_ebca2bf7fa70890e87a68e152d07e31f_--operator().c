/*
 * XREFs of _lambda_ebca2bf7fa70890e87a68e152d07e31f_::operator() @ 0x18050F28C
 * Callers:
 *     ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x18050F820 (-ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1800AF60C (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ?IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z @ 0x1805105AC (-IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z.c)
 *     ?PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicationViewOperation@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@PEAUIUnknown@@@Z @ 0x180510900 (-PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicatio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_ebca2bf7fa70890e87a68e152d07e31f_::operator()(__int64 **a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  CDesktopPositioner *v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  CDesktopPositioner *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  unsigned __int8 v14; // [rsp+60h] [rbp+28h] BYREF
  int v15; // [rsp+68h] [rbp+30h] BYREF
  struct IApplicationViewOperation *v16; // [rsp+70h] [rbp+38h] BYREF
  struct IApplicationView *v17; // [rsp+78h] [rbp+40h] BYREF

  v17 = 0LL;
  v2 = **a1;
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v2 + 32LL);
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v17);
  v5 = v3(v2, *(unsigned int *)a1[1], &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 790LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_22;
  }
  v15 = 0;
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v17 + 216LL))(v17, &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 793LL;
    goto LABEL_5;
  }
  v16 = 0LL;
  v8 = (CDesktopPositioner *)a1[2];
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  v9 = CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(v8, v17, &v16);
  v6 = v9;
  if ( v9 >= 0 )
  {
    v9 = CDesktopPositioner::PositionViewForPositionerHandoff(a1[2], v17, v16, *(unsigned int *)a1[3], *a1[4], *a1[5]);
    v6 = v9;
    if ( v9 >= 0 )
    {
      if ( v15
        && (v9 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)v16 + 96LL))(
                   v16,
                   1LL),
            v6 = v9,
            v9 < 0) )
      {
        v10 = 804LL;
      }
      else
      {
        v14 = 0;
        if ( *(_DWORD *)a1[3] == 5
          && (int)CDesktopPositioner::IsWindowMinimizing(v11, (struct IUnknown *)*a1[5], &v14) >= 0
          && v14
          && (v9 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, _QWORD))(*(_QWORD *)v16 + 96LL))(
                     v16,
                     0LL),
              v6 = v9,
              v9 < 0) )
        {
          v10 = 812LL;
        }
        else
        {
          v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)v17 + 320LL))(
                 v17,
                 v16);
          v6 = v9;
          if ( v9 >= 0 )
          {
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
            v6 = 0;
            goto LABEL_22;
          }
          v10 = 815LL;
        }
      }
    }
    else
    {
      v10 = 798LL;
    }
  }
  else
  {
    v10 = 796LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
LABEL_22:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  return v6;
}
