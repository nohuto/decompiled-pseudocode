/*
 * XREFs of ??1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18001EF2C
 * Callers:
 *     _lambda_6609ff0ab640c01183d8a2076431907a_::__lambda_6609ff0ab640c01183d8a2076431907a_ @ 0x180291444 (_lambda_6609ff0ab640c01183d8a2076431907a_--__lambda_6609ff0ab640c01183d8a2076431907a_.c)
 *     _TouchKeyboardExperienceManager::OnInputAppRequestedShow_::_1_::dtor$1 @ 0x1806B31A0 (_TouchKeyboardExperienceManager--OnInputAppRequestedShow_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001EF84 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::~OnInputAppRequestedShowActivity_Queued(
        TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
