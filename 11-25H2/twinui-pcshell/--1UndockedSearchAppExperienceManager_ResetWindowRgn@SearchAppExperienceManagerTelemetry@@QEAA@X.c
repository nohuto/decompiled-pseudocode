/*
 * XREFs of ??1UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x180192410
 * Callers:
 *     ?ResetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@@Z @ 0x18024B210 (-ResetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@@Z.c)
 *     _lambda_79f636e8e6582e714a3786e698ab1b4d_::__lambda_79f636e8e6582e714a3786e698ab1b4d_ @ 0x1803A4AF4 (_lambda_79f636e8e6582e714a3786e698ab1b4d_--__lambda_79f636e8e6582e714a3786e698ab1b4d_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79f636e8e6582e714a3786e698ab1b4d___::_CTaskWrapper__lambda_79f636e8e6582e714a3786e698ab1b4d___ @ 0x1803A4C2C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_79f636e8e6582e714a3786e698ab1b4d___--_CTask.c)
 *     _lambda_79f636e8e6582e714a3786e698ab1b4d_::operator() @ 0x1803A5CD8 (_lambda_79f636e8e6582e714a3786e698ab1b4d_--operator().c)
 *     _CUndockedSearchAppExperienceManagerConfig::ResetWindowRegionAsync_::_1_::dtor$0 @ 0x1806C03B5 (_CUndockedSearchAppExperienceManagerConfig--ResetWindowRegionAsync_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180192468 (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::~UndockedSearchAppExperienceManager_ResetWindowRgn(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn *this)
{
  *(_QWORD *)this = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
