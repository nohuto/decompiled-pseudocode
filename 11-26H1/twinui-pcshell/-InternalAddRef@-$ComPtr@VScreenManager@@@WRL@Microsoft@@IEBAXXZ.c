/*
 * XREFs of ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180072E58
 * Callers:
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1800C8D64 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?OnApplicationViewChanged@ScreenManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18016A400 (-OnApplicationViewChanged@ScreenManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@P.c)
 *     ?ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802967F4 (-ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     wistd::__invoke_void_return_wrapper_void_::__call__lambda_cfd27ea05118e91876b01966f7f941a5__&_enum_Windows::Internal::Shell::Holographic::ShellState_const_&_ @ 0x180298190 (wistd--__invoke_void_return_wrapper_void_--__call__lambda_cfd27ea05118e91876b01966f7f941a5__-_en.c)
 *     CreationThreadDispatcher::RunAsync__lambda_0cedd56e0c33e1c71352c370e3ecb162___ @ 0x1802C21F8 (CreationThreadDispatcher--RunAsync__lambda_0cedd56e0c33e1c71352c370e3ecb162___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_19713afaab0e793c65926cb0aea68e27___ @ 0x1802C5C54 (CreationThreadDispatcher--RunAsync__lambda_19713afaab0e793c65926cb0aea68e27___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_be8637fd90d29ec88802c86b8fd24837___ @ 0x18033CFE4 (CreationThreadDispatcher--RunAsync__lambda_be8637fd90d29ec88802c86b8fd24837___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_a0e783bce093889fe72b74f8295df253___ @ 0x18039A030 (CreationThreadDispatcher--RunAsync__lambda_a0e783bce093889fe72b74f8295df253___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_1a4d461b071b17a49d9b71157d22f5c1___ @ 0x1803A06FC (CreationThreadDispatcher--RunAsync__lambda_1a4d461b071b17a49d9b71157d22f5c1___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_39011a0525b85c0c4a9a6636d6d62842___ @ 0x1803A07C4 (CreationThreadDispatcher--RunAsync__lambda_39011a0525b85c0c4a9a6636d6d62842___.c)
 *     ??$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@K@Z @ 0x1803E5C8C (--$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda.c)
 *     CreationThreadDispatcher::RunAsync__lambda_c3975a5b4ee2ba5280707fbe38be1371___ @ 0x18048AD68 (CreationThreadDispatcher--RunAsync__lambda_c3975a5b4ee2ba5280707fbe38be1371___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_fa553258777e9fe890f937adf5270d38___ @ 0x18048AE38 (CreationThreadDispatcher--RunAsync__lambda_fa553258777e9fe890f937adf5270d38___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1__&_::CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1__&___lambda_33b4202f4967ef1cd2a31cded00016d1__&_ @ 0x1804AA930 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1__-_--CTask.c)
 *     CreationThreadDispatcher::RunAsync__lambda_79769dc8d4a0a63a59daa3025d7ec5e4___ @ 0x1804EA2B8 (CreationThreadDispatcher--RunAsync__lambda_79769dc8d4a0a63a59daa3025d7ec5e4___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_3a62f6db24c191cee0c877e4c7c22fb6___ @ 0x1804F591C (CreationThreadDispatcher--RunAsync__lambda_3a62f6db24c191cee0c877e4c7c22fb6___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_61aaaea7faa44b78167a0b42c2312525___ @ 0x1804F5A04 (CreationThreadDispatcher--RunAsync__lambda_61aaaea7faa44b78167a0b42c2312525___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_6de8a3c9a7f2afeabfb52c8d09309e45___ @ 0x1804F5AEC (CreationThreadDispatcher--RunAsync__lambda_6de8a3c9a7f2afeabfb52c8d09309e45___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_e7b9edbfb0e1dadcbf069f212f8bd4bd___ @ 0x1804F5BD0 (CreationThreadDispatcher--RunAsync__lambda_e7b9edbfb0e1dadcbf069f212f8bd4bd___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_5fb34dca825284ea67ff945056291927___ @ 0x18050E6BC (CreationThreadDispatcher--RunAsync__lambda_5fb34dca825284ea67ff945056291927___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_6016a4952a1cba8173ba454c267c23ee___ @ 0x1805B6744 (CreationThreadDispatcher--RunAsync__lambda_6016a4952a1cba8173ba454c267c23ee___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___ @ 0x1806BE740 (CreationThreadDispatcher--RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(__int64 *a1, volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v2 + 44), a2);
  return result;
}
