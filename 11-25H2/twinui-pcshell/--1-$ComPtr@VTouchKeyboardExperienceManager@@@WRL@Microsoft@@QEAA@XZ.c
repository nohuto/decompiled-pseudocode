/*
 * XREFs of ??1?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D1870
 * Callers:
 *     _TouchKeyboardExperienceManager::AnimationGapTimerCallback_::_1_::dtor$0 @ 0x1806A91E3 (_TouchKeyboardExperienceManager--AnimationGapTimerCallback_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_TouchKeyboardExperienceManager_TouchKeyboardExperienceManager__::_1_::dtor$2 @ 0x1806B2C9F (_Microsoft--WRL--Details--MakeAndInitialize_TouchKeyboardExperienceManager_TouchKey_ea_1806B2C9F.c)
 *     _TouchKeyboardExperienceManagerCF::CreateInstance_::_1_::dtor$0 @ 0x1806B82BD (_TouchKeyboardExperienceManagerCF--CreateInstance_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::RetryGettingInputAppIdTimerCallback_::_1_::dtor$0 @ 0x1806C744E (_TouchKeyboardExperienceManager--RetryGettingInputAppIdTimerCallback_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::SizeOrModeChangeFadeOutAnimationTimerCallback_::_1_::dtor$1 @ 0x1806C7472 (_TouchKeyboardExperienceManager--SizeOrModeChangeFadeOutAnimationTimerCallback_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::~ComPtr<TouchKeyboardExperienceManager>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease(a1);
}
