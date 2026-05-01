/*
 * XREFs of ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801D2050
 * Callers:
 *     ?OnApplicationViewChanged@ScreenManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180179B10 (-OnApplicationViewChanged@ScreenManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@P.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x18021E19C (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     CreationThreadDispatcher::RunAsync__lambda_c3f882fe1fc0b6b080fac59404359f44___ @ 0x18029A698 (CreationThreadDispatcher--RunAsync__lambda_c3f882fe1fc0b6b080fac59404359f44___.c)
 *     ??$MakeAndInitialize@VScreenManager@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VScreenManager@@@WRL@Microsoft@@@012@@Z @ 0x1802A8ED0 (--$MakeAndInitialize@VScreenManager@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$ComPtr@VSc.c)
 *     wistd::__invoke_void_return_wrapper_void_::__call__lambda_cfd27ea05118e91876b01966f7f941a5__&_enum_Windows::Internal::Shell::Holographic::ShellState_const_&_ @ 0x1802BD41C (wistd--__invoke_void_return_wrapper_void_--__call__lambda_cfd27ea05118e91876b01966f7f941a5__-_en.c)
 *     CreationThreadDispatcher::RunAsync__lambda_5c1050bbbdc103999695eee0b16b4eb6___ @ 0x1802CE694 (CreationThreadDispatcher--RunAsync__lambda_5c1050bbbdc103999695eee0b16b4eb6___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_9d1031bafd82ba6aeca8335abc3b4502___ @ 0x18033D3C8 (CreationThreadDispatcher--RunAsync__lambda_9d1031bafd82ba6aeca8335abc3b4502___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_4960ee92fd9b2748b82ff0c3d9d2829d___ @ 0x180392B00 (CreationThreadDispatcher--RunAsync__lambda_4960ee92fd9b2748b82ff0c3d9d2829d___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_1a4d461b071b17a49d9b71157d22f5c1___ @ 0x1803980F0 (CreationThreadDispatcher--RunAsync__lambda_1a4d461b071b17a49d9b71157d22f5c1___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_39011a0525b85c0c4a9a6636d6d62842___ @ 0x1803981B0 (CreationThreadDispatcher--RunAsync__lambda_39011a0525b85c0c4a9a6636d6d62842___.c)
 *     ??$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@K@Z @ 0x1803DCE30 (--$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda.c)
 *     CreationThreadDispatcher::RunAsync__lambda_3b7c4f2fe0a8fb0488a63b3b1e1281d6___ @ 0x18047A444 (CreationThreadDispatcher--RunAsync__lambda_3b7c4f2fe0a8fb0488a63b3b1e1281d6___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_ee2a45cc5bdcc8019082ab40d4404685___ @ 0x18047A508 (CreationThreadDispatcher--RunAsync__lambda_ee2a45cc5bdcc8019082ab40d4404685___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1__&_::CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1__&___lambda_33b4202f4967ef1cd2a31cded00016d1__&_ @ 0x180499A7C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1__-_--CTask.c)
 *     _lambda_de87d9780560173c9d125f808a86f278_::operator() @ 0x1804D8640 (_lambda_de87d9780560173c9d125f808a86f278_--operator().c)
 *     _lambda_0210cdf410b43223d5bb003804109f20_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_ @ 0x1804E00B0 (_lambda_0210cdf410b43223d5bb003804109f20_--operator()_winrt--Windows--System--Threading--ThreadP.c)
 *     CreationThreadDispatcher::RunAsync__lambda_ad7a42fd7c88720b7dc13ba1f6feb34a___ @ 0x1804E09D4 (CreationThreadDispatcher--RunAsync__lambda_ad7a42fd7c88720b7dc13ba1f6feb34a___.c)
 *     _lambda_7403f855236cea0e6d88639637f0f4a5_::operator() @ 0x1804E1840 (_lambda_7403f855236cea0e6d88639637f0f4a5_--operator().c)
 *     CreationThreadDispatcher::RunAsync__lambda_5fb34dca825284ea67ff945056291927___ @ 0x1804ED0C4 (CreationThreadDispatcher--RunAsync__lambda_5fb34dca825284ea67ff945056291927___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_6016a4952a1cba8173ba454c267c23ee___ @ 0x180592714 (CreationThreadDispatcher--RunAsync__lambda_6016a4952a1cba8173ba454c267c23ee___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___ @ 0x180697094 (CreationThreadDispatcher--RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
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
