/*
 * XREFs of ??1?$EventListener@UITabletModeController@@UITabletModeChangeListener@@VTabletModeChangeRegistration@@@EventRegistrationHelpers@@QEAA@XZ @ 0x18049DB34
 * Callers:
 *     ??1ApplicationViewChangeListener@@QEAA@XZ @ 0x18049DB58 (--1ApplicationViewChangeListener@@QEAA@XZ.c)
 *     ??1ApplicationViewFilteredCollection@@UEAA@XZ @ 0x180598E88 (--1ApplicationViewFilteredCollection@@UEAA@XZ.c)
 *     ??1TaskViewHost@@UEAA@XZ @ 0x18067EB8C (--1TaskViewHost@@UEAA@XZ.c)
 * Callees:
 *     ?Unregister@?$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplicationViewChangeListener@@VApplicationViewCollectionRegistration@@@EventRegistrationHelpers@@QEAAXXZ @ 0x1801C8308 (-Unregister@-$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplicati.c)
 */

__int64 __fastcall EventRegistrationHelpers::EventListener<ITabletModeController,ITabletModeChangeListener,TabletModeChangeRegistration>::~EventListener<ITabletModeController,ITabletModeChangeListener,TabletModeChangeRegistration>(
        __int64 a1)
{
  EventRegistrationHelpers::EventListener<IApplicationViewVisibilityDebouncedNotificationService,IApplicationViewChangeListener,ApplicationViewCollectionRegistration>::Unregister(a1);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 8));
}
