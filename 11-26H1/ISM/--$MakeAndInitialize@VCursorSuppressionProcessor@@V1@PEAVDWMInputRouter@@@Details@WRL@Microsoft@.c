/*
 * XREFs of ??$MakeAndInitialize@VCursorSuppressionProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAVCursorSuppressionProcessor@@$$QEAPEAVDWMInputRouter@@@Z @ 0x1801A21A0
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180055204 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800292CC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002A9EC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemServerConnection@@@Z @ 0x18014A2C0 (--4-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemServerConne.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIContextualProcessor@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1801A2628 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIContextualProcessor@@VFtmBase@23@@WR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CursorSuppressionProcessor,CursorSuppressionProcessor,DWMInputRouter *>(
        __int64 *a1,
        __int64 *a2)
{
  void *v4; // rax
  __int64 v5; // rsi
  Microsoft::Bamo::BaseBamoConnection *BamoServerConnection; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v9; // [rsp+60h] [rbp+30h] BYREF
  void *v10; // [rsp+70h] [rbp+40h] BYREF
  __int64 v11; // [rsp+78h] [rbp+48h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = (__int64)v4;
  v10 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IContextualProcessor,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IContextualProcessor,Microsoft::WRL::FtmBase>(v4);
    *(_QWORD *)v5 = &CursorSuppressionProcessor::`vftable'{for `IInspectable'};
    *(_QWORD *)(v5 + 8) = &CursorSuppressionProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IContextualProcessor,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
    *(_QWORD *)(v5 + 16) = &CursorProcessor::`vftable'{for `IWeakReferenceSource'};
    *(_QWORD *)(v5 + 24) = &CursorProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *(_QWORD *)(v5 + 72) = 0LL;
    *(_QWORD *)(v5 + 80) = 0LL;
    *(_DWORD *)(v5 + 88) = 2;
    *(_DWORD *)(v5 + 92) = 0x7FFFFFFF;
    *(_DWORD *)(v5 + 96) = 0x7FFFFFFF;
    v11 = v5;
    v10 = 0LL;
    v9 = *a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v9);
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    Microsoft::WRL::ComPtr<InputSystemServerConnection>::operator=(
      (Microsoft::Bamo::BaseBamoConnection **)(v5 + 80),
      BamoServerConnection);
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)(v5 + 72), &v9);
    if ( CursorSuppressionProcessor::s_processor )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\cursorsuppression\\system\\lib\\"
             "cursorsuppressionprocessor.cpp",
        (const char *)0x8000FFFFLL,
        (int)&v9);
    CursorSuppressionProcessor::s_processor = (CursorSuppressionProcessor *)v5;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *a1 = v5;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v10);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v10);
    return 2147942414LL;
  }
}
