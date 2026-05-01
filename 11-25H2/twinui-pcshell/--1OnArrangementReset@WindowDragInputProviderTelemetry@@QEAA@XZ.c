/*
 * XREFs of ??1OnArrangementReset@WindowDragInputProviderTelemetry@@QEAA@XZ @ 0x1802CD33C
 * Callers:
 *     ?OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z @ 0x1802738BC (-OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z.c)
 *     _WindowDragInputProvider::OnArrangementReset_::_1_::dtor$0 @ 0x1806D26D0 (_WindowDragInputProvider--OnArrangementReset_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800482E4 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall WindowDragInputProviderTelemetry::OnArrangementReset::~OnArrangementReset(
        WindowDragInputProviderTelemetry::OnArrangementReset *this)
{
  *(_QWORD *)this = &WindowDragInputProviderTelemetry::OnArrangementReset::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
