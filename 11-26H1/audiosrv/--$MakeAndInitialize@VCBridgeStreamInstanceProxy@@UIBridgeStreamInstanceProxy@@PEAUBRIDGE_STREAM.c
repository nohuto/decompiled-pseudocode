/*
 * XREFs of ??$MakeAndInitialize@VCBridgeStreamInstanceProxy@@UIBridgeStreamInstanceProxy@@PEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIStreamGroupProxy@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEA_J@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeStreamInstanceProxy@@$$QEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIStreamGroupProxy@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEA_J@Z @ 0x1800C2ED8
 * Callers:
 *     _lambda_9d267c7ebe07ecbec4fbf9be6438edfc_::operator() @ 0x1800C4A94 (_lambda_9d267c7ebe07ecbec4fbf9be6438edfc_--operator().c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CBridgeStreamInstanceProxy@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroupProxy@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@_J@Z @ 0x1800FF160 (-RuntimeClassInitialize@CBridgeStreamInstanceProxy@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStre.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBridgeStreamInstanceProxy,IBridgeStreamInstanceProxy,BRIDGE_STREAM_DESCRIPTOR *,IStreamGroupProxy * &,std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>> &,__int64 &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        int a4,
        __int64 *a5)
{
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  int v11; // edi
  __int64 v12; // rax
  void *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = operator new[](0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v14 = v9;
  if ( v9 )
  {
    *v9 = &CStreamInstanceProxyImpl::`vftable';
    v9[2] = 0LL;
    v9[3] = 0LL;
    v9[4] = 0LL;
    *((_DWORD *)v9 + 13) = 1;
    *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CStreamInstanceProxyImpl,IBridgeStreamInstanceProxy>::`vftable'{for `Microsoft::WRL::Details::Selector<CStreamInstanceProxyImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IBridgeStreamInstanceProxy>>'};
    v9[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CStreamInstanceProxyImpl,IBridgeStreamInstanceProxy>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IBridgeStreamInstanceProxy>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IBridgeStreamInstanceProxy>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v10 = &CBridgeStreamInstanceProxy::`vftable'{for `Microsoft::WRL::Details::Selector<CStreamInstanceProxyImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IBridgeStreamInstanceProxy>>'};
    v10[5] = &CBridgeStreamInstanceProxy::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IBridgeStreamInstanceProxy>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IBridgeStreamInstanceProxy>>'};
    v14 = 0LL;
    v11 = CBridgeStreamInstanceProxy::RuntimeClassInitialize((_DWORD)v10, *a2, *a3, a4, *a5);
    v12 = *v10;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))v12)(
              v10,
              &GUID_bf2d2329_18b4_4ac6_a896_d9b5b4b18b74,
              a1);
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(v12 + 16))(v10);
    }
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v14);
  return (unsigned int)v11;
}
