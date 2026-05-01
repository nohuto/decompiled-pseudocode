/*
 * XREFs of _lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_::_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_ @ 0x1802F4A5C
 * Callers:
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___1_long___lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___ @ 0x1802F401C (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1802F401C.c)
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802F4B00 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_1802F4B00.c)
 *     wil::details::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___ @ 0x1802F4C84 (wil--details--lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___--lambda_call__lambda_9532c.c)
 */

__int64 __fastcall lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_::_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int64 *v5; // rsi
  __int64 v6; // rax

  *(_QWORD *)a1 = 0LL;
  if ( (__int64 *)a1 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    *(_QWORD *)a1 = v4;
  }
  *(_QWORD *)(a1 + 8) = a2[1];
  *(_QWORD *)(a1 + 16) = a2[2];
  *(_DWORD *)(a1 + 24) = *((_DWORD *)a2 + 6);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 32,
    a2 + 4);
  *(_QWORD *)(a1 + 32) = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  wil::details::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___(
    a1 + 360,
    a2 + 45);
  v5 = a2 + 87;
  *(_QWORD *)(a1 + 696) = 0LL;
  if ( (__int64 *)(a1 + 696) != v5 )
  {
    v6 = *v5;
    *v5 = 0LL;
    *(_QWORD *)(a1 + 696) = v6;
  }
  return a1;
}
