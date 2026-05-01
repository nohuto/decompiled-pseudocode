/*
 * XREFs of ??1SizeOrModeChangeAnimationScheduleActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180468BA8
 * Callers:
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18046BEF0 (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 *     _TouchKeyboardExperienceManager::AnimateInputViewForSizeOrModeChange_::_1_::dtor$0 @ 0x1806EEFA3 (_TouchKeyboardExperienceManager--AnimateInputViewForSizeOrModeChange_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BE54C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity::~SizeOrModeChangeAnimationScheduleActivity(
        TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::SizeOrModeChangeAnimationScheduleActivity::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
