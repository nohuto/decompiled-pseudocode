/*
 * XREFs of ?StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800A1CCC
 * Callers:
 *     ?StartWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A20B0 (-StartWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x18000229C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002460C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 *     ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800866C0 (-zInternalStart@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x18008D328 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 */

void __fastcall WindowFrameLoggingTelemetry::StartWindowCapture::StartActivity(
        WindowFrameLoggingTelemetry::StartWindowCapture *this,
        HWND a2,
        int a3,
        int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _DWORD *v12; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v14; // r8
  int v15; // ecx
  int v16; // [rsp+50h] [rbp-38h] BYREF
  DWORD v17; // [rsp+54h] [rbp-34h] BYREF
  HWND v18; // [rsp+58h] [rbp-30h] BYREF
  __int64 v19; // [rsp+60h] [rbp-28h] BYREF
  int v20; // [rsp+90h] [rbp+8h] BYREF

  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v10 = wil::details::static_lazy<WindowFrameLogging>::get(v9, v8);
  v12 = (_DWORD *)v10[1];
  if ( *v12 > 5u && tlgKeywordOn(v10[1], 0x200000000000LL) )
  {
    v20 = a4;
    v16 = a3;
    v18 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v14 = *((_QWORD *)this + 34);
    v17 = CurrentThreadId;
    v19 = 0LL;
    if ( !*(_BYTE *)(v14 + 4) || _tlgGuidIsZero((const struct _GUID *)(v14 + 24)) )
      v15 = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v12,
      (int)&unk_1800FFAED,
      v14 + 8,
      v15,
      (__int64)&v19,
      (__int64)&v17,
      (__int64)&v18,
      (__int64)&v16,
      (__int64)&v20);
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread(
    (__int64)this,
    v11);
}
