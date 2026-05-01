/*
 * XREFs of ??1CreateSnapId@CSnapComponentTelemetry@@QEAA@XZ @ 0x18059DB4C
 * Callers:
 *     ?CreateSnapId@CShellSnapComponent@@UEAAJURect@Foundation@Windows@@PEAH@Z @ 0x18059E7E0 (-CreateSnapId@CShellSnapComponent@@UEAAJURect@Foundation@Windows@@PEAH@Z.c)
 *     _CShellSnapComponent::CreateSnapId_::_1_::dtor$0 @ 0x1806F84B2 (_CShellSnapComponent--CreateSnapId_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180079D04 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall CSnapComponentTelemetry::CreateSnapId::~CreateSnapId(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&CSnapComponentTelemetry::CreateSnapId::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
