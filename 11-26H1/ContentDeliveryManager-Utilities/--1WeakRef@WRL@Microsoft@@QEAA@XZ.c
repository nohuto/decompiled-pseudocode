/*
 * XREFs of ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800298BC
 * Callers:
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_bool__1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::CheckExecutionEnvironment_::_1_::dtor$0 @ 0x1800B9D3F (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandler_bool__1_Mi.c)
 *     _StartDocked::GetStartDefaultPins_::_1_::dtor$2 @ 0x1800BAD81 (_StartDocked--GetStartDefaultPins_--_1_--dtor$2.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$5 @ 0x1800BAFB8 (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$5.c)
 *     _CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::AddRule_::_1_::dtor$5 @ 0x1800BB7E4 (_CreativeFramework--RuleSetHandlers--DiagTrackRuleSetHandler--AddRule_--_1_--dtor$5.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$10 @ 0x1800BB8B0 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800BB8B0.c)
 *     _wil::wait_for_completion_Windows::Services::TargetedContent::TargetedContentSubscription___Microsoft::WRL::ComPtr_Windows::Services::TargetedContent::ITargetedContentSubscription____::_1_::dtor$0 @ 0x1800BBB2C (_wil--wait_for_completion_Windows--Services--TargetedContent--TargetedContentSubscription___Micr.c)
 *     _UniqueExtendedExecutionSession::RuntimeClassInitialize_::_1_::dtor$3 @ 0x1800BD518 (_UniqueExtendedExecutionSession--RuntimeClassInitialize_--_1_--dtor$3.c)
 *     _wil::wait_for_completion_Windows::Services::TargetedContent::TargetedContentContainer___Microsoft::WRL::ComPtr_Windows::Services::TargetedContent::ITargetedContentContainer____::_1_::dtor$0 @ 0x1800BEA3C (_wil--wait_for_completion_Windows--Services--TargetedContent--TargetedContentContainer___Microso.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::WRL::WeakRef::~WeakRef(Microsoft::WRL::WeakRef *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
