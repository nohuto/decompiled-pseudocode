/*
 * XREFs of ??1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ @ 0x1801F03DC
 * Callers:
 *     ?CloseNoLock@WindowRegistration@@AEAAXXZ @ 0x1805FB87C (-CloseNoLock@WindowRegistration@@AEAAXXZ.c)
 *     _WindowRegistration::CloseNoLock_::_1_::dtor$0 @ 0x1806FFC5B (_WindowRegistration--CloseNoLock_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801F04CC (-Destroy@-$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 */

void __fastcall MeetAndChatTelemetry::MeetAndChatManagerOperation::~MeetAndChatManagerOperation(
        MeetAndChatTelemetry::MeetAndChatManagerOperation *this)
{
  *(_QWORD *)this = &MeetAndChatTelemetry::MeetAndChatManagerOperation::`vftable';
  wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
