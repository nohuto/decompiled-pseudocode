/*
 * XREFs of ??1TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x18068C32C
 * Callers:
 *     ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x18068D210 (-ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z.c)
 *     _CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor$0 @ 0x180705DC5 (_CPinnedList--ApplyReorderTaskbarLayout_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180231A28 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 */

void __fastcall TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::~TaskbarLayoutReorderActivity(
        TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity *this)
{
  *(_QWORD *)this = &TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::`vftable';
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
