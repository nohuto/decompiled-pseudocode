/*
 * XREFs of ??1OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1800BE520
 * Callers:
 *     _lambda_3b092b602b32291197616247ac44fb10_::__lambda_3b092b602b32291197616247ac44fb10_ @ 0x1804685F0 (_lambda_3b092b602b32291197616247ac44fb10_--__lambda_3b092b602b32291197616247ac44fb10_.c)
 *     _TouchKeyboardExperienceManager::OnPositionChanged_::_1_::dtor$0 @ 0x1806D2590 (_TouchKeyboardExperienceManager--OnPositionChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800BE54C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::~OnApplicationFramePositionChanged(
        TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
