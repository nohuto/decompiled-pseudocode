/*
 * XREFs of ?ToggleAllUpView@CAllUpViewService@@UEAAJPEAUHMONITOR__@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180497A00
 * Callers:
 *     ?StartSwipe@CAllUpViewService@@UEAAJIUtagPOINT@@@Z @ 0x1804979B0 (-StartSwipe@CAllUpViewService@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_6c2381c8148a5bf607d7998e82322cb8_::__lambda_6c2381c8148a5bf607d7998e82322cb8_ @ 0x1800902F4 (_lambda_6c2381c8148a5bf607d7998e82322cb8_--__lambda_6c2381c8148a5bf607d7998e82322cb8_.c)
 *     MakeMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___ @ 0x18049748C (MakeMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAllUpViewService::ToggleAllUpView(__int64 a1, __int64 a2, int a3)
{
  HRESULT v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64, GUID *, GUID *, __int64 *); // rdi
  int v11; // eax
  unsigned int v12; // edi
  int MultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f; // eax
  __int64 v14; // rdx
  void *ppvOut; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  int v20; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v22; // [rsp+90h] [rbp+30h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+48h] BYREF

  ppvOut = 0LL;
  if ( *(_QWORD *)(a1 - 24) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    v6 = IUnknown_QueryService(
           *(IUnknown **)(a1 - 24),
           (const GUID *const)&SID_ImmersiveLauncher,
           &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
           &ppvOut);
    v7 = retaddr;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 32LL))(ppvOut, 5LL);
      v7 = retaddr;
      if ( v6 >= 0 )
        goto LABEL_7;
      v8 = 59LL;
    }
    else
    {
      v8 = 57LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v7,
      (void *)v8,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewservice.cpp",
      (const char *)(unsigned int)v6);
  }
LABEL_7:
  v17 = *(_QWORD *)(a1 + 24);
  v9 = v17;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
  v23 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v9 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  v11 = v10(v9, a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v23);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v18 = v9;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
    v19 = v23;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
    v20 = a3;
    v22 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
    MultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f = MakeMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f_(
                                                                              &v22,
                                                                              (__int64)&v18);
    v12 = MultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f;
    if ( MultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f >= 0 )
    {
      MultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 16) + 24LL))(
                                                                                *(_QWORD *)(a1 + 16),
                                                                                v22,
                                                                                1LL);
      v12 = MultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f;
      if ( MultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f >= 0 )
      {
LABEL_14:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
        lambda_6c2381c8148a5bf607d7998e82322cb8_::__lambda_6c2381c8148a5bf607d7998e82322cb8_(&v18);
        goto LABEL_15;
      }
      v14 = 114LL;
    }
    else
    {
      v14 = 111LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewservice.cpp",
      (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x46,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewservice.cpp",
    (const char *)(unsigned int)v11);
LABEL_15:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  return v12;
}
