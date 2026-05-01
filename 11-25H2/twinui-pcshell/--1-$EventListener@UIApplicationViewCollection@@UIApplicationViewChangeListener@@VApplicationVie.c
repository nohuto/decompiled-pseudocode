/*
 * XREFs of ??1?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAA@XZ @ 0x18069A19C
 * Callers:
 *     ??1AppViewDataSourceAdapterBase@@IEAA@XZ @ 0x18069A334 (--1AppViewDataSourceAdapterBase@@IEAA@XZ.c)
 *     ??1ApplicationViewEventListener@AppViewEventHelpers@@QEAA@XZ @ 0x18069A3A8 (--1ApplicationViewEventListener@AppViewEventHelpers@@QEAA@XZ.c)
 * Callees:
 *     ?Unregister@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAXXZ @ 0x18029B948 (-Unregister@-$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VAppli.c)
 */

void __fastcall AppViewEventHelpers::EventListener<IApplicationViewCollection,IApplicationViewChangeListener,AppViewEventHelpers::details::ApplicationViewEventRegistration>::~EventListener<IApplicationViewCollection,IApplicationViewChangeListener,AppViewEventHelpers::details::ApplicationViewEventRegistration>(
        __int64 a1)
{
  AppViewEventHelpers::EventListener<IApplicationViewCollection,IApplicationViewChangeListener,AppViewEventHelpers::details::ApplicationViewEventRegistration>::Unregister(a1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
