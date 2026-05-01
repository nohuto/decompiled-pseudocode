/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___ @ 0x1800B0EFC
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800B0A80 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x1800B1074 (--1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     _lambda_e77611733156e07a25f619698f3ee1ef_::_lambda_e77611733156e07a25f619698f3ee1ef_ @ 0x180296BD0 (_lambda_e77611733156e07a25f619698f3ee1ef_--_lambda_e77611733156e07a25f619698f3ee1ef_.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_e77611733156e07a25f619698f3ee1ef_::_lambda_e77611733156e07a25f619698f3ee1ef__0 @ 0x180304538 (_lambda_e77611733156e07a25f619698f3ee1ef_--_lambda_e77611733156e07a25f619698f3ee1ef__0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___(
        _DWORD *a1,
        __int64 a2)
{
  __int64 v4; // rsi
  unsigned int v5; // r14d
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  int v8; // esi
  _DWORD *v10; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v11[4]; // [rsp+40h] [rbp-198h] BYREF
  _BYTE v12[336]; // [rsp+60h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  if ( a1[14] == 2 )
  {
    v8 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x820,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v10 = a1;
    if ( a1 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v4 = lambda_e77611733156e07a25f619698f3ee1ef_::_lambda_e77611733156e07a25f619698f3ee1ef__0(v11, &v10, a1, a2);
    v5 = a1[12];
    v6 = operator new(0x178uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( v6 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v6);
      lambda_e77611733156e07a25f619698f3ee1ef_::_lambda_e77611733156e07a25f619698f3ee1ef_(v7 + 2, v4);
      *v7 = &off_18071EA70;
    }
    else
    {
      v7 = 0LL;
    }
    v8 = SHTaskPoolQueueTask(3LL, 2LL, v5);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
    CFramePresentationTelemetry::SetSystemVisual::~SetSystemVisual((CFramePresentationTelemetry::SetSystemVisual *)v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11);
    if ( v8 >= 0 )
      ++a1[52];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
  }
  CFramePresentationTelemetry::SetSystemVisual::~SetSystemVisual((CFramePresentationTelemetry::SetSystemVisual *)(a2 + 16));
  return (unsigned int)v8;
}
