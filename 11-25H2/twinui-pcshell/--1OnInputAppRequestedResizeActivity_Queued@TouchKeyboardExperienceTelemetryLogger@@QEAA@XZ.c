/*
 * XREFs of ??1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045C844
 * Callers:
 *     _lambda_21bbf2e079f5591be5df5fdb5b101015_::__lambda_21bbf2e079f5591be5df5fdb5b101015_ @ 0x18045C1D0 (_lambda_21bbf2e079f5591be5df5fdb5b101015_--__lambda_21bbf2e079f5591be5df5fdb5b101015_.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z @ 0x180463040 (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001EF84 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::~OnInputAppRequestedResizeActivity_Queued(
        TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
