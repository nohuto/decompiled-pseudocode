/*
 * XREFs of ??1TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802CD7E0
 * Callers:
 *     ?TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180257BA4 (-TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     _TouchKeyboardExperienceManager::TerminateStaleInputApp_::_1_::dtor$0 @ 0x1806C7496 (_TouchKeyboardExperienceManager--TerminateStaleInputApp_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014ED48 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::~TerminateStaleInputApp(
        TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
