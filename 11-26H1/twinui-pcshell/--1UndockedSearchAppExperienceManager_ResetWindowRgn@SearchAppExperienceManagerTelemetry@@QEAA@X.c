/*
 * XREFs of ??1UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x180187518
 * Callers:
 *     ?ResetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@@Z @ 0x18023EAA0 (-ResetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@@Z.c)
 *     _lambda_4daa1ff280fabc17c4efadccbed1b5cc_::__lambda_4daa1ff280fabc17c4efadccbed1b5cc_ @ 0x1803ADD14 (_lambda_4daa1ff280fabc17c4efadccbed1b5cc_--__lambda_4daa1ff280fabc17c4efadccbed1b5cc_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4daa1ff280fabc17c4efadccbed1b5cc___::_CTaskWrapper__lambda_4daa1ff280fabc17c4efadccbed1b5cc___ @ 0x1803ADE6C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4daa1ff280fabc17c4efadccbed1b5cc___--_CTask.c)
 *     _lambda_4daa1ff280fabc17c4efadccbed1b5cc_::operator() @ 0x1803AEC30 (_lambda_4daa1ff280fabc17c4efadccbed1b5cc_--operator().c)
 *     _CUndockedSearchAppExperienceManagerConfig::ResetWindowRegionAsync_::_1_::dtor$0 @ 0x1806E837D (_CUndockedSearchAppExperienceManagerConfig--ResetWindowRegionAsync_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180187570 (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::~UndockedSearchAppExperienceManager_ResetWindowRgn(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn *this)
{
  *(_QWORD *)this = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
