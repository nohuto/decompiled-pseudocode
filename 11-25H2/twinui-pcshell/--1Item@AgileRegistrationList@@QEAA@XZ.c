/*
 * XREFs of ??1Item@AgileRegistrationList@@QEAA@XZ @ 0x180299654
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d5ba9deb2118ce04c264c974195dc07b__void_bool_::_Do_call @ 0x18018F910 (std--_Func_impl_no_alloc__lambda_d5ba9deb2118ce04c264c974195dc07b__void_bool_--_Do_call.c)
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x180197124 (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18035EE14 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?HideExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x1803657C0 (-HideExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     _AgileRegistrationList::Register_::_1_::dtor$0 @ 0x1806A546A (_AgileRegistrationList--Register_--_1_--dtor$0.c)
 *     _CNetworkExperienceManager::RuntimeClassInitialize_::_1_::dtor$18 @ 0x1806AAC68 (_CNetworkExperienceManager--RuntimeClassInitialize_--_1_--dtor$18.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_37bafbeb3dd0776f24b59a9d11710915____::_1_::dtor$0 @ 0x1806B3779 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Foundation--IInspectable_winrt--W.c)
 *     _CStartExperienceManager::CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1_::_1_::dtor$5 @ 0x1806BF19A (_CStartExperienceManager--CreateDisplayMonitorInfoCollectionAsync$_ResumeCoro$1_--_1_--dtor$5.c)
 *     _Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______lambda_4637121c97463dde84d1e4eb150ea79f____::_1_::dtor$2 @ 0x1806C13BA (_Windows--Internal--MakeOpLambda_0_Windows--Internal--CMarshaledInterfaceResult_Win_ea_1806C13BA.c)
 *     _TaskFlowImmersiveShellBroker::GetCurrentActivityForAllViewsAsync_::_1_::dtor$1 @ 0x1806C146D (_TaskFlowImmersiveShellBroker--GetCurrentActivityForAllViewsAsync_--_1_--dtor$1.c)
 *     _Win32AppStateManager::TerminateApp_::_1_::dtor$3 @ 0x1806CCB89 (_Win32AppStateManager--TerminateApp_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall AgileRegistrationList::Item::~Item(AgileRegistrationList::Item *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 1);
}
