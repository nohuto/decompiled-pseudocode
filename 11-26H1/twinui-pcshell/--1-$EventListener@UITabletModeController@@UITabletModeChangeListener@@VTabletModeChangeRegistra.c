/*
 * XREFs of ??1?$EventListener@UITabletModeController@@UITabletModeChangeListener@@VTabletModeChangeRegistration@@@EventRegistrationHelpers@@QEAA@XZ @ 0x1804AEE64
 * Callers:
 *     ??1ApplicationViewChangeListener@@QEAA@XZ @ 0x1804AEE88 (--1ApplicationViewChangeListener@@QEAA@XZ.c)
 *     ??1ApplicationViewFilteredCollection@@UEAA@XZ @ 0x1805BD100 (--1ApplicationViewFilteredCollection@@UEAA@XZ.c)
 *     ??1TaskViewHost@@UEAA@XZ @ 0x1806A5A58 (--1TaskViewHost@@UEAA@XZ.c)
 * Callees:
 *     ?Unregister@?$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplicationViewChangeListener@@VApplicationViewCollectionRegistration@@@EventRegistrationHelpers@@QEAAXXZ @ 0x1801BE2D4 (-Unregister@-$EventListener@UIApplicationViewVisibilityDebouncedNotificationService@@UIApplicati.c)
 */

__int64 __fastcall EventRegistrationHelpers::EventListener<ITabletModeController,ITabletModeChangeListener,TabletModeChangeRegistration>::~EventListener<ITabletModeController,ITabletModeChangeListener,TabletModeChangeRegistration>(
        __int64 a1)
{
  EventRegistrationHelpers::EventListener<IApplicationViewVisibilityDebouncedNotificationService,IApplicationViewChangeListener,ApplicationViewCollectionRegistration>::Unregister(a1);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 8));
}
