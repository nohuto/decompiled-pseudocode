/*
 * XREFs of ??1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x18019243C
 * Callers:
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18024B4C8 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@A.c)
 *     _lambda_acc696b87ca0019872947d555e7575b6_::__lambda_acc696b87ca0019872947d555e7575b6_ @ 0x1803A4B04 (_lambda_acc696b87ca0019872947d555e7575b6_--__lambda_acc696b87ca0019872947d555e7575b6_.c)
 *     _lambda_eef5741a3b0e50908ea80cafebdfea4b_::__lambda_eef5741a3b0e50908ea80cafebdfea4b_ @ 0x1803A4B60 (_lambda_eef5741a3b0e50908ea80cafebdfea4b_--__lambda_eef5741a3b0e50908ea80cafebdfea4b_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eef5741a3b0e50908ea80cafebdfea4b___::_CTaskWrapper__lambda_eef5741a3b0e50908ea80cafebdfea4b___ @ 0x1803A4CCC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_eef5741a3b0e50908ea80cafebdfea4b___--_CTask.c)
 *     _lambda_acc696b87ca0019872947d555e7575b6_::operator() @ 0x1803A5D90 (_lambda_acc696b87ca0019872947d555e7575b6_--operator().c)
 *     _lambda_eef5741a3b0e50908ea80cafebdfea4b_::operator() @ 0x1803A633C (_lambda_eef5741a3b0e50908ea80cafebdfea4b_--operator().c)
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@1@Z @ 0x1803B069C (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@1.c)
 *     _CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync_::_1_::dtor$0 @ 0x1806C0445 (_CUndockedSearchAppExperienceManagerConfig--SetWindowRegionAsync_--_1_--dtor$0.c)
 *     _CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync_::_1_::dtor$0_0 @ 0x1806C0469 (_CUndockedSearchAppExperienceManagerConfig--SetWindowRegionAsync_--_1_--dtor$0_0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180192468 (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::~UndockedSearchAppExperienceManager_SetWindowRgn(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *this)
{
  *(_QWORD *)this = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
