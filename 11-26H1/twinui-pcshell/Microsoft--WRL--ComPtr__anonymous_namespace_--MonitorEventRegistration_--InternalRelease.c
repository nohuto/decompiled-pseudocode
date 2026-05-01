/*
 * XREFs of Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease @ 0x1802249EC
 * Callers:
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::_EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_ @ 0x1802926A4 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNo.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister @ 0x1802926C8 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_1802926C8.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::_ComPtr__anonymous_namespace_::MonitorEventRegistration__0 @ 0x1802C86A8 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--_ComPtr__a_ea_1802C86A8.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x568a9533::MonitorEventRegistration_IImmersiveMonitorNotification___&_ @ 0x1804ACF20 (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--MonitorEventRegistration_A0x56.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register @ 0x1804AD860 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_1804AD860.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
