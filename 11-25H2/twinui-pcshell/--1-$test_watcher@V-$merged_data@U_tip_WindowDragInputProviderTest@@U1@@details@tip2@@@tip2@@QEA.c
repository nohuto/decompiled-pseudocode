/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802971D4
 * Callers:
 *     ?OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z @ 0x180273D70 (-OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z.c)
 *     _WindowDragInputProvider::OnWindowArrangementMessage_::_1_::dtor$2 @ 0x1806D2706 (_WindowDragInputProvider--OnWindowArrangementMessage_--_1_--dtor$2.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802971FC (--1-$com_ptr_t@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@Uerr_returnco.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::~test_watcher<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>,wil::err_returncode_policy>(a1 + 48);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
