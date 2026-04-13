/*
 * XREFs of ??1ActionUnstagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18006E398
 * Callers:
 *     _lambda_6ab1f6f5bfb1610cca41dbb66aaa8812_::operator() @ 0x18006E9DC (_lambda_6ab1f6f5bfb1610cca41dbb66aaa8812_--operator().c)
 *     __lambda_6ab1f6f5bfb1610cca41dbb66aaa8812_::operator()_::_1_::dtor$3 @ 0x1800BC189 (__lambda_6ab1f6f5bfb1610cca41dbb66aaa8812_--operator()_--_1_--dtor$3.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006F424 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMa_ea_18006F424.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionUnstagedActivity::~ActionUnstagedActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionUnstagedActivity *this)
{
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ActionUnstagedActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
