/*
 * XREFs of ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x18004D984
 * Callers:
 *     ??$?0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18004C89C (--$-0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 * Callees:
 *     ?Provider@WindowFrameLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18004DA1C (-Provider@WindowFrameLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18004DB08 (-zInternalStart@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18004DB74 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18004DCAC (-zInternalRelatedId@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18004DCE0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall WindowFrameLoggingTelemetry::CloneWindow::StartActivity(WindowFrameLoggingTelemetry::CloneWindow *this)
{
  const struct _tlgProvider_t *v2; // rdi
  int v3; // eax
  DWORD CurrentThreadId; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v2 = WindowFrameLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v5 = 0LL;
    v3 = wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (_DWORD)v2,
      (unsigned int)&unk_180105788,
      *((_QWORD *)this + 34) + 8,
      v3,
      (__int64)&v5,
      (__int64)&CurrentThreadId);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((WindowFrameLoggingTelemetry::CloneWindow *)((char *)this + 288));
}
