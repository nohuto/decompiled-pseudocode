/*
 * XREFs of ?SetAppStateForViews@CApplicationViewManager@@AEAAJPEAUIObjectArray@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x180308D14
 * Callers:
 *     ?SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@Z @ 0x180308EB0 (-SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@.c)
 *     ?SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_STATE@@@Z @ 0x180308F50 (-SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_ST.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x18018C714 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_1b91a7a6515db6d6d798acc687776bab___ @ 0x180307208 (ShellPositionerHelpers--PerformCallbackOnView__lambda_1b91a7a6515db6d6d798acc687776bab___.c)
 *     _lambda_1b91a7a6515db6d6d798acc687776bab_::_lambda_1b91a7a6515db6d6d798acc687776bab_ @ 0x180307654 (_lambda_1b91a7a6515db6d6d798acc687776bab_--_lambda_1b91a7a6515db6d6d798acc687776bab_.c)
 *     _lambda_1b91a7a6515db6d6d798acc687776bab_::__lambda_1b91a7a6515db6d6d798acc687776bab_ @ 0x1803078C4 (_lambda_1b91a7a6515db6d6d798acc687776bab_--__lambda_1b91a7a6515db6d6d798acc687776bab_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::SetAppStateForViews(__int64 a1, __int64 a2, int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  unsigned int v9; // eax
  int v10; // esi
  unsigned int i; // r14d
  __int64 (__fastcall *v12)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v13; // rax
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rbx
  IUnknown **v17; // rax
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  unsigned int v21; // [rsp+98h] [rbp+48h] BYREF
  int v22; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+58h] BYREF

  v22 = a3;
  v21 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v21);
  if ( v6 < 0 )
  {
    v7 = 903LL;
    goto LABEL_3;
  }
  v9 = v21;
  if ( !v21 )
  {
    v6 = -2147319765;
    v7 = 904LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v10 = 0;
  for ( i = 0; i < v9; ++i )
  {
    v23 = 0LL;
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
    v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v23);
    v14 = v12(a2, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v13);
    if ( v14 >= 0 )
    {
      v15 = lambda_1b91a7a6515db6d6d798acc687776bab_::_lambda_1b91a7a6515db6d6d798acc687776bab_(
              (__int64)v19,
              &v23,
              &v22);
      v16 = v23;
      v17 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk(a1 + 32, &v18);
      v6 = ShellPositionerHelpers::PerformCallbackOnView__lambda_1b91a7a6515db6d6d798acc687776bab___(*v17, v16, v15);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
      lambda_1b91a7a6515db6d6d798acc687776bab_::__lambda_1b91a7a6515db6d6d798acc687776bab_(v19);
      if ( a3 == 1 && v6 >= 0 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
        return (unsigned int)v6;
      }
      if ( v10 >= 0 )
        v10 = v6;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x38E,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v14);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
    v9 = v21;
  }
  return (unsigned int)v10;
}
