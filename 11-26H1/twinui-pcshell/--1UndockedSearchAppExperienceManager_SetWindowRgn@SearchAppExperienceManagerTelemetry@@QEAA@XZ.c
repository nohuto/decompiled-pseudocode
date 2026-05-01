/*
 * XREFs of ??1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x180187544
 * Callers:
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18023ED68 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@A.c)
 *     _lambda_7c31732deb1fbe728880e2f5434a1835_::__lambda_7c31732deb1fbe728880e2f5434a1835_ @ 0x1803ADD94 (_lambda_7c31732deb1fbe728880e2f5434a1835_--__lambda_7c31732deb1fbe728880e2f5434a1835_.c)
 *     _lambda_8af570e54697b9501e4d0fa797527737_::__lambda_8af570e54697b9501e4d0fa797527737_ @ 0x1803ADDBC (_lambda_8af570e54697b9501e4d0fa797527737_--__lambda_8af570e54697b9501e4d0fa797527737_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8af570e54697b9501e4d0fa797527737___::_CTaskWrapper__lambda_8af570e54697b9501e4d0fa797527737___ @ 0x1803ADF0C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8af570e54697b9501e4d0fa797527737___--_CTask.c)
 *     _lambda_7c31732deb1fbe728880e2f5434a1835_::operator() @ 0x1803AF0EC (_lambda_7c31732deb1fbe728880e2f5434a1835_--operator().c)
 *     _lambda_8af570e54697b9501e4d0fa797527737_::operator() @ 0x1803AF28C (_lambda_8af570e54697b9501e4d0fa797527737_--operator().c)
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@1@Z @ 0x1803B8F20 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@1.c)
 *     _CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync_::_1_::dtor$0 @ 0x1806E840D (_CUndockedSearchAppExperienceManagerConfig--SetWindowRegionAsync_--_1_--dtor$0.c)
 *     _CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync_::_1_::dtor$0_0 @ 0x1806E8431 (_CUndockedSearchAppExperienceManagerConfig--SetWindowRegionAsync_--_1_--dtor$0_0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180187570 (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::~UndockedSearchAppExperienceManager_SetWindowRgn(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *this)
{
  *(_QWORD *)this = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
