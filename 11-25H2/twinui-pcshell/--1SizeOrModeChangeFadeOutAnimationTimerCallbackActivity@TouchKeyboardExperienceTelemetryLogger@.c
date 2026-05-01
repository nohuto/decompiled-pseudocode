/*
 * XREFs of ??1SizeOrModeChangeFadeOutAnimationTimerCallbackActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045C8C8
 * Callers:
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180464860 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 *     _TouchKeyboardExperienceManager::SizeOrModeChangeFadeOutAnimationTimerCallback_::_1_::dtor$0 @ 0x1806C7460 (_TouchKeyboardExperienceManager--SizeOrModeChangeFadeOutAnimationTimerCallback_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001EF84 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity::~SizeOrModeChangeFadeOutAnimationTimerCallbackActivity(
        TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeFadeOutAnimationTimerCallbackActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
