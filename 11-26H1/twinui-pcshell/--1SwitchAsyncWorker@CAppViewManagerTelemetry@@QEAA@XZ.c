/*
 * XREFs of ??1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x1802F0090
 * Callers:
 *     _lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_::__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_ @ 0x1802EFC64 (_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_--__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_.c)
 *     _lambda_9532c6789f8817c10f052c0604d56f68_::__lambda_9532c6789f8817c10f052c0604d56f68_ @ 0x1802EFCA4 (_lambda_9532c6789f8817c10f052c0604d56f68_--__lambda_9532c6789f8817c10f052c0604d56f68_.c)
 *     wil::details::lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___::_lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___ @ 0x1802EFDF8 (wil--details--lambda_call__lambda_9532c6789f8817c10f052c0604d56f68___--_lambda_call__lambda_9532.c)
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x1802F5CCC (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x1802F80F4 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 *     _CAppViewManager::_ContinueSwitchAsyncWorker_::_1_::dtor$0 @ 0x1806E103D (_CAppViewManager--_ContinueSwitchAsyncWorker_--_1_--dtor$0.c)
 *     _CAppViewManager::_ContinueSwitchAsyncWorker_::_1_::dtor$1 @ 0x1806E104F (_CAppViewManager--_ContinueSwitchAsyncWorker_--_1_--dtor$1.c)
 *     _CAppViewManager::_SwitchAsyncWorker_::_1_::dtor$0 @ 0x1806E10FA (_CAppViewManager--_SwitchAsyncWorker_--_1_--dtor$0.c)
 *     _CAppViewManager::_SwitchAsyncWorker_::_1_::dtor$3 @ 0x1806E110C (_CAppViewManager--_SwitchAsyncWorker_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180041AA8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
