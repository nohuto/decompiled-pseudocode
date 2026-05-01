/*
 * XREFs of ??1CreateMultitaskingViewHost@MultitaskingViewTelemetry@@QEAA@XZ @ 0x180207044
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180187688 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 *     _CMultitaskingViewManager::_CreateMTVHost_::_1_::dtor$0 @ 0x1806B0D44 (_CMultitaskingViewManager--_CreateMTVHost_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180207070 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall MultitaskingViewTelemetry::CreateMultitaskingViewHost::~CreateMultitaskingViewHost(
        MultitaskingViewTelemetry::CreateMultitaskingViewHost *this)
{
  *(_QWORD *)this = &MultitaskingViewTelemetry::CreateMultitaskingViewHost::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
