/*
 * XREFs of ??1InputAppTerminated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18023D0DC
 * Callers:
 *     ?OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18046CFDC (-OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppTerminated_::_1_::dtor$0 @ 0x1806C74DE (_KeyboardHosting--TabTipAdapter--OnInputAppTerminated_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800328D0 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_T.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InputAppTerminated::~InputAppTerminated(
        TouchKeyboardExperienceTelemetryLogger::InputAppTerminated *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::InputAppTerminated::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
