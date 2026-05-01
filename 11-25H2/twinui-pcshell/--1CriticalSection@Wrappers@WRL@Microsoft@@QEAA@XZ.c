/*
 * XREFs of ??1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18023DBA8
 * Callers:
 *     _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$1 @ 0x1806A6421 (_CDesktopPositioner--CDesktopPositioner_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::InputSwitchingManager_::_1_::dtor$1 @ 0x1806AF0CC (_winrt--Windows--Internal--Shell--implementation--InputSwitchingManager--InputSwitchingManager_-.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$19 @ 0x1806BC846 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$19.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$24 @ 0x1806BC8C3 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$24.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$25 @ 0x1806BC8DC (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$25.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$29 @ 0x1806BC940 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$29.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$37 @ 0x1806BCA08 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$37.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$40 @ 0x1806BCA53 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$40.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$42 @ 0x1806BCA85 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$42.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$44 @ 0x1806BCAB7 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$44.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$47 @ 0x1806BCB02 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$47.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$12 @ 0x1806C6CEE (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$12.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$16 @ 0x1806C6D52 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$16.c)
 *     _CMultitaskingViewManager::CMultitaskingViewManager_::_1_::dtor$1 @ 0x1806C8056 (_CMultitaskingViewManager--CMultitaskingViewManager_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
