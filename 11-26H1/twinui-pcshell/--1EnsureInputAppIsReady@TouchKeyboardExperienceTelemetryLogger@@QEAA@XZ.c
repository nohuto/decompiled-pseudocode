/*
 * XREFs of ??1EnsureInputAppIsReady@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180040B50
 * Callers:
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18018C198 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     _KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady_::_1_::dtor$1 @ 0x1806D8606 (_KeyboardHosting--TabTipAdapter--EnsureInputAppIsReady_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180040A4C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflecto.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180040AF4 (-reset@-$shared_object@V-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_P.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180040E10 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18004226C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::~EnsureInputAppIsReady(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&TouchKeyboardExperienceTelemetryLogger::EnsureInputAppIsReady::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(this + 36));
  wil::details::shared_object<wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(this + 35);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)(this + 30));
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)(this + 6));
  _TlgActivityBase<wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>,0,5>::~_TlgActivityBase<wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>,0,5>(this + 1);
}
