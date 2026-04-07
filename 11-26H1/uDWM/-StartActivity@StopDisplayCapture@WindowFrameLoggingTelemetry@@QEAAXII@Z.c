/*
 * XREFs of ?StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800864F8
 * Callers:
 *     ?StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800763C0 (-StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18000233C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002460C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 *     ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800866C0 (-zInternalStart@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x18008D328 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 */

void __fastcall WindowFrameLoggingTelemetry::StopDisplayCapture::StartActivity(
        WindowFrameLoggingTelemetry::StopDisplayCapture *this,
        int a2,
        int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _DWORD *v10; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v12; // r8
  int v13; // ecx
  DWORD v14; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v15[4]; // [rsp+48h] [rbp-20h] BYREF
  int v16; // [rsp+70h] [rbp+8h] BYREF
  int v17; // [rsp+88h] [rbp+20h] BYREF

  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v8 = wil::details::static_lazy<WindowFrameLogging>::get(v7, v6);
  v10 = (_DWORD *)v8[1];
  if ( *v10 > 5u && tlgKeywordOn(v8[1], 0x200000000000LL) )
  {
    v16 = a3;
    v17 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v12 = *((_QWORD *)this + 34);
    v14 = CurrentThreadId;
    v15[0] = 0LL;
    if ( !*(_BYTE *)(v12 + 4) || _tlgGuidIsZero((const struct _GUID *)(v12 + 24)) )
      v13 = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v10,
      (int)&unk_1800FF9B4,
      v12 + 8,
      v13,
      (__int64)v15,
      (__int64)&v14,
      (__int64)&v17,
      (__int64)&v16);
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(
    (__int64)this,
    v9);
}
