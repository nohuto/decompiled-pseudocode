/*
 * XREFs of ?WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ @ 0x18010D4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180071690 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008BE90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?add_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ @ 0x18010DA98 (-add_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ @ 0x18010DABC (-InternalRelease@-$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c_____lambda_d2d428d678afc9667605d89a88a71b6c___ @ 0x18010DAE4 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c_.c)
 *     ?Wait@COperationWaiter@@QEAAJXZ @ 0x18010DB80 (-Wait@COperationWaiter@@QEAAJXZ.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@@012@@Z @ 0x1802C6290 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$ComPtr@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::WaitForPendingOperations(CFrameApplicationPresentation *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  RTL_SRWLOCK *v4; // rbx
  __int64 *CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c_____lambda_d2d428d678afc9667605d89a88a71b6c; // rax
  __int64 v6; // rdi
  volatile signed __int32 *v7; // rcx
  COperationWaiter *v8; // rcx
  int v10; // eax
  int v11; // esi
  int v12; // eax
  COperationWaiter *v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  PSRWLOCK v15; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  COperationWaiter *v17; // [rsp+58h] [rbp+28h] BYREF
  COperationWaiter *v18; // [rsp+60h] [rbp+30h] BYREF
  volatile signed __int32 *v19; // [rsp+68h] [rbp+38h] BYREF

  v17 = 0LL;
  v2 = Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(&v17);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x250,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v2);
LABEL_13:
    Microsoft::WRL::ComPtr<COperationWaiter>::InternalRelease(&v17);
    return v3;
  }
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  v15 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v18 = v17;
  winrt::com_ptr<CMultitaskingViewManager>::add_ref(&v18);
  CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c_____lambda_d2d428d678afc9667605d89a88a71b6c = (__int64 *)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c_____lambda_d2d428d678afc9667605d89a88a71b6c___(&v19, &v18);
  v6 = *CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c_____lambda_d2d428d678afc9667605d89a88a71b6c;
  v14 = *CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c_____lambda_d2d428d678afc9667605d89a88a71b6c;
  *CAsyncCallbackWithLambda__lambda_d2d428d678afc9667605d89a88a71b6c_____lambda_d2d428d678afc9667605d89a88a71b6c = 0LL;
  v7 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(v7);
  }
  Microsoft::WRL::ComPtr<COperationWaiter>::InternalRelease(&v18);
  if ( v6 )
  {
    v10 = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *, __int64))(*(_QWORD *)this + 232LL))(this, v6);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x269,
        (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v15);
      v3 = v11;
      goto LABEL_13;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v12 = COperationWaiter::Wait(v17);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x26D,
        (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v12);
    v13 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release((volatile signed __int32 *)v13);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x266,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007000ELL);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v8 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release((volatile signed __int32 *)v8);
    }
    return 2147942414LL;
  }
}
