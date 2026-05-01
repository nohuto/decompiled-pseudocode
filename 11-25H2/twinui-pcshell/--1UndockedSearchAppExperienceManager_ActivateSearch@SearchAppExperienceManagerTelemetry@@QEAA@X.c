/*
 * XREFs of ??1UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1801F16B4
 * Callers:
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1802488B0 (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     _lambda_78435879237a5598503e840a3e952968_::__lambda_78435879237a5598503e840a3e952968_ @ 0x1803A4AB4 (_lambda_78435879237a5598503e840a3e952968_--__lambda_78435879237a5598503e840a3e952968_.c)
 *     _lambda_78435879237a5598503e840a3e952968_::operator() @ 0x1803A594C (_lambda_78435879237a5598503e840a3e952968_--operator().c)
 *     __lambda_78435879237a5598503e840a3e952968_::_lambda_78435879237a5598503e840a3e952968__::_1_::dtor$0 @ 0x1806BFD70 (__lambda_78435879237a5598503e840a3e952968_--_lambda_78435879237a5598503e840a3e952968__--_1_--dto.c)
 *     __lambda_78435879237a5598503e840a3e952968_::operator()_::_1_::dtor$0 @ 0x1806BFE23 (__lambda_78435879237a5598503e840a3e952968_--operator()_--_1_--dtor$0.c)
 *     _UndockedSearchAppExperienceManager::Activate_::_1_::dtor$4 @ 0x1806BFF21 (_UndockedSearchAppExperienceManager--Activate_--_1_--dtor$4.c)
 *     _UndockedSearchAppExperienceManager::Activate_::_1_::dtor$15 @ 0x1806BFF45 (_UndockedSearchAppExperienceManager--Activate_--_1_--dtor$15.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801F16E0 (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::~UndockedSearchAppExperienceManager_ActivateSearch(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *this)
{
  *(_QWORD *)this = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>(this);
}
