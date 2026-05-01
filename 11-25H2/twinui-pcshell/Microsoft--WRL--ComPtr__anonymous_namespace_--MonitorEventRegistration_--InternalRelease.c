/*
 * XREFs of Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease @ 0x180232E18
 * Callers:
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::_EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_ @ 0x1802A0524 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNo.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister @ 0x1802A0548 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_1802A0548.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::_ComPtr__anonymous_namespace_::MonitorEventRegistration__0 @ 0x1802D1900 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--_ComPtr__a_ea_1802D1900.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x568a9533::MonitorEventRegistration_IImmersiveMonitorNotification___&_ @ 0x18049BCDC (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--MonitorEventRegistration_A0x56.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register @ 0x18049C600 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_18049C600.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
