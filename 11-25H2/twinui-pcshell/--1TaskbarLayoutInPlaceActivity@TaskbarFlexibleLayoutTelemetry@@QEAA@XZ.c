/*
 * XREFs of ??1TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180665BAC
 * Callers:
 *     ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x180666430 (-ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z.c)
 *     _CPinnedList::ApplyInPlaceTaskbarLayout_::_1_::dtor$0 @ 0x1806DD132 (_CPinnedList--ApplyInPlaceTaskbarLayout_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18023C2E4 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 */

void __fastcall TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity::~TaskbarLayoutInPlaceActivity(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&TaskbarFlexibleLayoutTelemetry::TaskbarLayoutInPlaceActivity::`vftable';
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
