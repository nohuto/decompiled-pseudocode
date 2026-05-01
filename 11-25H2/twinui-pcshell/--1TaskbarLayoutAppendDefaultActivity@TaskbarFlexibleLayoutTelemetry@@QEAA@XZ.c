/*
 * XREFs of ??1TaskbarLayoutAppendDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180665B80
 * Callers:
 *     ?ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x180666170 (-ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     _CPinnedList::ApplyAppendDefaultTaskbarLayout_::_1_::dtor$0 @ 0x1806DD0FC (_CPinnedList--ApplyAppendDefaultTaskbarLayout_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18023C2E4 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 */

void __fastcall TaskbarFlexibleLayoutTelemetry::TaskbarLayoutAppendDefaultActivity::~TaskbarLayoutAppendDefaultActivity(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&TaskbarFlexibleLayoutTelemetry::TaskbarLayoutAppendDefaultActivity::`vftable';
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
