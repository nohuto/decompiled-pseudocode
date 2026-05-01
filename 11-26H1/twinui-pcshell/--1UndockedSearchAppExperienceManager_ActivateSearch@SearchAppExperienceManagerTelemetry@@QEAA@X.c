/*
 * XREFs of ??1UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1801E7CA4
 * Callers:
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x18023B0F4 (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     _lambda_6bf0006fd05f45de9a9646c33bcd493f_::__lambda_6bf0006fd05f45de9a9646c33bcd493f_ @ 0x1803ADD54 (_lambda_6bf0006fd05f45de9a9646c33bcd493f_--__lambda_6bf0006fd05f45de9a9646c33bcd493f_.c)
 *     _lambda_6bf0006fd05f45de9a9646c33bcd493f_::operator() @ 0x1803AED50 (_lambda_6bf0006fd05f45de9a9646c33bcd493f_--operator().c)
 *     __lambda_6bf0006fd05f45de9a9646c33bcd493f_::_lambda_6bf0006fd05f45de9a9646c33bcd493f__::_1_::dtor$0 @ 0x1806E7C4B (__lambda_6bf0006fd05f45de9a9646c33bcd493f_--_lambda_6bf0006fd05f45de9a9646c33bcd493f__--_1_--dto.c)
 *     __lambda_6bf0006fd05f45de9a9646c33bcd493f_::operator()_::_1_::dtor$0 @ 0x1806E7CC4 (__lambda_6bf0006fd05f45de9a9646c33bcd493f_--operator()_--_1_--dtor$0.c)
 *     _UndockedSearchAppExperienceManager::Activate_::_1_::dtor$4 @ 0x1806E7DFC (_UndockedSearchAppExperienceManager--Activate_--_1_--dtor$4.c)
 *     _UndockedSearchAppExperienceManager::Activate_::_1_::dtor$16 @ 0x1806E7E20 (_UndockedSearchAppExperienceManager--Activate_--_1_--dtor$16.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801E7CD0 (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::~UndockedSearchAppExperienceManager_ActivateSearch(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *this)
{
  *(_QWORD *)this = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>(this);
}
