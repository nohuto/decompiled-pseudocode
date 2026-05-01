/*
 * XREFs of ??1SnapAssistTabletModeProcessing@CSnapComponentTelemetry@@QEAA@XZ @ 0x1805A6BE8
 * Callers:
 *     ?TriggerSnapAssistFromAppLayout@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayout@@@Z @ 0x1805A8340 (-TriggerSnapAssistFromAppLayout@CSnapAssistControllerBase@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppL.c)
 *     _CSnapAssistControllerBase::TriggerSnapAssistFromAppLayout_::_1_::dtor$0 @ 0x1806F8945 (_CSnapAssistControllerBase--TriggerSnapAssistFromAppLayout_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007D0D0 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall CSnapComponentTelemetry::SnapAssistTabletModeProcessing::~SnapAssistTabletModeProcessing(
        CSnapComponentTelemetry::SnapAssistTabletModeProcessing *this)
{
  *(_QWORD *)this = &CSnapComponentTelemetry::SnapAssistTabletModeProcessing::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
