/*
 * XREFs of ?WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ @ 0x1801B9450
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18003BEF0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054000 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?add_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ @ 0x180084AB8 (-add_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ @ 0x180084ADC (-InternalRelease@-$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Wait@COperationWaiter@@QEAAJXZ @ 0x1801B9630 (-Wait@COperationWaiter@@QEAAJXZ.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@@012@@Z @ 0x1802CEDD0 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$ComPtr@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::WaitForPendingOperations(CFrameApplicationPresentation *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  RTL_SRWLOCK *v4; // rdi
  COperationWaiter *v5; // rsi
  volatile int *v6; // rdx
  void *v7; // rax
  __int64 v8; // rbx
  COperationWaiter *v9; // rcx
  int v10; // eax
  unsigned int v11; // esi
  int v13; // eax
  COperationWaiter *v14; // rcx
  volatile signed __int32 *v15[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  COperationWaiter *v17; // [rsp+68h] [rbp+38h] BYREF
  __int64 v18; // [rsp+70h] [rbp+40h] BYREF
  PSRWLOCK v19; // [rsp+78h] [rbp+48h] BYREF

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
LABEL_15:
    Microsoft::WRL::ComPtr<COperationWaiter>::InternalRelease((volatile signed __int32 **)&v17);
    return v3;
  }
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  v19 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = v17;
  v15[0] = (volatile signed __int32 *)v17;
  winrt::com_ptr<CMultitaskingViewManager>::add_ref((__int64 *)v15, v6);
  v7 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = (__int64)v7;
  if ( v7 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v7);
    *(_QWORD *)(v8 + 48) = 0LL;
    if ( (volatile signed __int32 **)(v8 + 48) != v15 )
    {
      *(_QWORD *)(v8 + 48) = v5;
      v15[0] = 0LL;
    }
    *(_QWORD *)v8 = off_1807065D0;
    *(_QWORD *)(v8 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  }
  else
  {
    v8 = 0LL;
  }
  v18 = v8;
  Microsoft::WRL::ComPtr<COperationWaiter>::InternalRelease(v15);
  if ( !v8 )
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x266,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007000ELL);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v9 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release((volatile signed __int32 *)v9);
    }
    return v3;
  }
  v10 = (*(__int64 (__fastcall **)(CFrameApplicationPresentation *, __int64))(*(_QWORD *)this + 232LL))(this, v8);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x269,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v19);
    v3 = v11;
    goto LABEL_15;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v13 = COperationWaiter::Wait(v17);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x26D,
      (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v13);
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release((volatile signed __int32 *)v14);
  }
  return 0LL;
}
