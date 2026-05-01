/*
 * XREFs of ??1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18022F640
 * Callers:
 *     _CDesktopPositioner::CDesktopPositioner_::_1_::dtor$1 @ 0x1806D3927 (_CDesktopPositioner--CDesktopPositioner_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::InputSwitchingManager_::_1_::dtor$1 @ 0x1806D7DED (_winrt--Windows--Internal--Shell--implementation--InputSwitchingManager--InputSwitchingManager_-.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$23 @ 0x1806E3BEF (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$23.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$28 @ 0x1806E3C6C (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$28.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$29 @ 0x1806E3C85 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$29.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$33 @ 0x1806E3CE9 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$33.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$42 @ 0x1806E3DCA (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$42.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$45 @ 0x1806E3E15 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$45.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$47 @ 0x1806E3E47 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$47.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$49 @ 0x1806E3E79 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$49.c)
 *     _GamingOverlayExperienceManager::GamingOverlayExperienceManager_::_1_::dtor$52 @ 0x1806E3EC4 (_GamingOverlayExperienceManager--GamingOverlayExperienceManager_--_1_--dtor$52.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$12 @ 0x1806EEA0D (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$12.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$16 @ 0x1806EEA71 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$16.c)
 *     _CMultitaskingViewManager::CMultitaskingViewManager_::_1_::dtor$1 @ 0x1806F0028 (_CMultitaskingViewManager--CMultitaskingViewManager_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
