/*
 * XREFs of ??1ApplicationViewEventListener@AppViewEventHelpers@@QEAA@XZ @ 0x1806C2124
 * Callers:
 *     _AppViewDataSourceAdapterBase::AppViewDataSourceAdapterBase_::_1_::dtor$5 @ 0x1806D6CA4 (_AppViewDataSourceAdapterBase--AppViewDataSourceAdapterBase_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall AppViewEventHelpers::ApplicationViewEventListener::~ApplicationViewEventListener(__int64 this)
{
  AppViewEventHelpers::EventListener<IApplicationViewCollection,IApplicationViewChangeListener,AppViewEventHelpers::details::ApplicationViewEventRegistration>::~EventListener<IApplicationViewCollection,IApplicationViewChangeListener,AppViewEventHelpers::details::ApplicationViewEventRegistration>(this);
}
