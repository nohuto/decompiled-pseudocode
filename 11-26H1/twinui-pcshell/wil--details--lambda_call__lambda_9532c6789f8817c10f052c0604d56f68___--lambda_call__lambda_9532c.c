/*
 * XREFs of wil::details::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___ @ 0x1802EFB98
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___1_long_ @ 0x1802EFA74 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802EFA74.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x1802F80F4 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802EF970 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_1802EF970.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)a1);
  *(_QWORD *)a1 = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  *(_BYTE *)(a1 + 328) = *(_BYTE *)(a2 + 328);
  result = a1;
  *(_BYTE *)(a2 + 328) = 0;
  return result;
}
