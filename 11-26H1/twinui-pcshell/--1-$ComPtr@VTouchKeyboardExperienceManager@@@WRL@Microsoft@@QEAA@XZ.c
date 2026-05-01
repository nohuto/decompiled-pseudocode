/*
 * XREFs of ??1?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C536C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_TouchKeyboardExperienceManager_TouchKeyboardExperienceManager__::_1_::dtor$2 @ 0x1806DAD70 (_Microsoft--WRL--Details--MakeAndInitialize_TouchKeyboardExperienceManager_TouchKey_ea_1806DAD70.c)
 *     _TouchKeyboardExperienceManagerCF::CreateInstance_::_1_::dtor$0 @ 0x1806DF566 (_TouchKeyboardExperienceManagerCF--CreateInstance_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::AnimationGapTimerCallbackInternal_::_1_::dtor$0 @ 0x1806EEFB5 (_TouchKeyboardExperienceManager--AnimationGapTimerCallbackInternal_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::RetryGettingInputAppIdTimerCallback_::_1_::dtor$0 @ 0x1806EF2D6 (_TouchKeyboardExperienceManager--RetryGettingInputAppIdTimerCallback_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::SizeOrModeChangeFadeOutAnimationTimerCallback_::_1_::dtor$1 @ 0x1806EF2FA (_TouchKeyboardExperienceManager--SizeOrModeChangeFadeOutAnimationTimerCallback_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::~ComPtr<TouchKeyboardExperienceManager>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease(a1);
}
