/*
 * XREFs of ??1?$ComPtr@VInputSiteManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180070304
 * Callers:
 *     _SystemCursorController2::SystemCursorController2_::_1_::dtor$1 @ 0x1801D55DD (_SystemCursorController2--SystemCursorController2_--_1_--dtor$1.c)
 *     _DWMInputRouter::UpdateForegroundTarget_::_1_::dtor$2 @ 0x1801D5C3A (_DWMInputRouter--UpdateForegroundTarget_--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::Make_InputSite_gsl::span_InputSiteId__1__&_unsigned_long_&_InputSiteManager____::_1_::dtor$3 @ 0x1801D5EED (_Microsoft--WRL--Details--Make_InputSite_gsl--span_InputSiteId__1__-_unsigned_long__ea_1801D5EED.c)
 *     _ControllerNavigationManager::RegisterOverride_::_1_::dtor$0 @ 0x1801D5F2C (_ControllerNavigationManager--RegisterOverride_--_1_--dtor$0.c)
 *     _PenEventsTipToGlassAdapter::NotifyTipToGlass_::_1_::dtor$0 @ 0x1801D5F6B (_PenEventsTipToGlassAdapter--NotifyTipToGlass_--_1_--dtor$0.c)
 *     _PenEventsTipToGlassAdapter::IsTipToGlassRequired_::_1_::dtor$0 @ 0x1801D60BE (_PenEventsTipToGlassAdapter--IsTipToGlassRequired_--_1_--dtor$0.c)
 *     _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$1 @ 0x1801D79C1 (_AnimationDataProvider--GetBamoDataSourceStub_--_1_--dtor$1.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$5 @ 0x1801D7A00 (_DragNDropProcessor--HitTest_--_1_--dtor$5.c)
 *     _ShellGesturesProcessor::TryFindResumableAnimationTarget_::_1_::dtor$0 @ 0x1801D7BAB (_ShellGesturesProcessor--TryFindResumableAnimationTarget_--_1_--dtor$0.c)
 *     _CUIHierarchy::NotifyWindowOfActivationStateChange_::_1_::dtor$1 @ 0x1801D89F2 (_CUIHierarchy--NotifyWindowOfActivationStateChange_--_1_--dtor$1.c)
 *     _EdgyProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$2 @ 0x1801D8AE5 (_EdgyProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$2.c)
 *     _ForegroundManager::SetInputDelegation_::_1_::dtor$0 @ 0x1801D8C8F (_ForegroundManager--SetInputDelegation_--_1_--dtor$0.c)
 *     _InputProcess::InputProcess_::_1_::dtor$1 @ 0x1801D9484 (_InputProcess--InputProcess_--_1_--dtor$1.c)
 *     _ResizeProcessor::HitTest_::_1_::dtor$0 @ 0x1801DA13B (_ResizeProcessor--HitTest_--_1_--dtor$0.c)
 *     _DragNDropProcessor::SetupInteractionContext_::_1_::dtor$0 @ 0x1801DAC5C (_DragNDropProcessor--SetupInteractionContext_--_1_--dtor$0.c)
 *     _AnimationDataProvider::CreateProcessIdList_::_1_::dtor$0 @ 0x1801DAC92 (_AnimationDataProvider--CreateProcessIdList_--_1_--dtor$0.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$4 @ 0x1801DB021 (_DragNDropProcessor--HitTest_--_1_--dtor$4.c)
 *     _CUIHostInputObjectProxy::TransferForegroundToComponent_::_1_::dtor$0 @ 0x1801DB11F (_CUIHostInputObjectProxy--TransferForegroundToComponent_--_1_--dtor$0.c)
 *     _std::_Func_impl_no_alloc__lambda_3e8e24ed727f6b874666958b1db22259__void_Microsoft::WRL::ComPtr_BamoInputObserverClientProxy__const_&_::_Do_call_::_1_::dtor$1 @ 0x1801DB1E5 (_std--_Func_impl_no_alloc__lambda_3e8e24ed727f6b874666958b1db22259__void_Microsoft--WRL--ComPtr_.c)
 *     _InputDeliveryServer::RegisterInputAttemptedClient_::_1_::dtor$1 @ 0x1801DB4A9 (_InputDeliveryServer--RegisterInputAttemptedClient_--_1_--dtor$1.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$3 @ 0x1801DB704 (_DragNDropProcessor--HitTest_--_1_--dtor$3.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$7 @ 0x1801DB728 (_DragNDropProcessor--HitTest_--_1_--dtor$7.c)
 *     _DragNDropProcessor::StartDrag_::_1_::dtor$3 @ 0x1801DB7CA (_DragNDropProcessor--StartDrag_--_1_--dtor$3.c)
 *     _DragNDropProcessor::StartManualDrag_::_1_::dtor$0 @ 0x1801DB7DC (_DragNDropProcessor--StartManualDrag_--_1_--dtor$0.c)
 *     _ResizeProcessor::GetControllerForManualResize_::_1_::dtor$2 @ 0x1801DB919 (_ResizeProcessor--GetControllerForManualResize_--_1_--dtor$2.c)
 *     _ControllerNavigationManager::RegisterControllerProcessor_::_1_::dtor$0 @ 0x1801DC0B7 (_ControllerNavigationManager--RegisterControllerProcessor_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<InputSiteManager>::~ComPtr<InputSiteManager>(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return result;
}
