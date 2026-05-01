/*
 * XREFs of ??1ApplicationViewChangeListener@@QEAA@XZ @ 0x1804AEE88
 * Callers:
 *     _ApplicationViewFilteredCollection::ApplicationViewFilteredCollection_::_1_::dtor$3 @ 0x1806DEE8B (_ApplicationViewFilteredCollection--ApplicationViewFilteredCollection_--_1_--dtor$3.c)
 *     _TaskViewHost::TaskViewHost_::_1_::dtor$17 @ 0x180706C82 (_TaskViewHost--TaskViewHost_--_1_--dtor$17.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ApplicationViewChangeListener::~ApplicationViewChangeListener(__int64 this)
{
  EventRegistrationHelpers::EventListener<ITabletModeController,ITabletModeChangeListener,TabletModeChangeRegistration>::~EventListener<ITabletModeController,ITabletModeChangeListener,TabletModeChangeRegistration>(this);
}
