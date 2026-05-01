/*
 * XREFs of ??1InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAA@XZ @ 0x1802C4ED0
 * Callers:
 *     _CShellSnapComponent::InitializeSnapFlyoutHost_::_1_::dtor$0 @ 0x1806DE7A3 (_CShellSnapComponent--InitializeSnapFlyoutHost_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006F0C8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall CSnapComponentTelemetry::InitializeSnapFlyoutHost::~InitializeSnapFlyoutHost(
        CSnapComponentTelemetry::InitializeSnapFlyoutHost *this)
{
  *(_QWORD *)this = &CSnapComponentTelemetry::InitializeSnapFlyoutHost::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
