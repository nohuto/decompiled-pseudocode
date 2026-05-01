/*
 * XREFs of ??1?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180214134
 * Callers:
 *     ??1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ @ 0x180210E00 (--1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VMeetAndChatTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18021416C (-reset@-$shared_object@V-$ActivityData@VMeetAndChatTelemetryLogging@@U_TlgReflectorTag_Param0IsP.c)
 */

__int64 __fastcall wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MeetAndChatTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 280);
  return wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MeetAndChatTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<MeetAndChatTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 8);
}
