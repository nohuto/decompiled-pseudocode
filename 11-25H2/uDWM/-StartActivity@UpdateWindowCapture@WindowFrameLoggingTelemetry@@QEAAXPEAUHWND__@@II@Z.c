/*
 * XREFs of ?StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800C0B38
 * Callers:
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C2C10 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x180002458 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?Provider@WindowFrameLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18004DA1C (-Provider@WindowFrameLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18007C780 (_tlgKeywordOn.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180085218 (-zInternalRelatedId@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180094E1C (-zInternalStart@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall WindowFrameLoggingTelemetry::UpdateWindowCapture::StartActivity(
        WindowFrameLoggingTelemetry::UpdateWindowCapture *this,
        HWND a2,
        int a3,
        int a4)
{
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  int v10; // edi
  int v11; // eax
  int v12; // [rsp+50h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+54h] [rbp-34h] BYREF
  HWND v14; // [rsp+58h] [rbp-30h] BYREF
  __int64 v15; // [rsp+60h] [rbp-28h] BYREF
  int v16; // [rsp+90h] [rbp+8h] BYREF

  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v9 = WindowFrameLogging::Provider(v8);
  v10 = (int)v9;
  if ( *(_DWORD *)v9 > 5u && tlgKeywordOn((__int64)v9, 0x200000000000LL) )
  {
    v16 = a4;
    v12 = a3;
    v14 = a2;
    v15 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v11 = wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      (int)&unk_180104AE6,
      *((_QWORD *)this + 34) + 8,
      v11,
      (__int64)&v15,
      (__int64)&CurrentThreadId,
      (__int64)&v14,
      (__int64)&v12,
      (__int64)&v16);
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
