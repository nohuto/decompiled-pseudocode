/*
 * XREFs of ?StartActivity@VAPositioner_ResizeViewActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@UtagSIZE@@@Z @ 0x18050ABD8
 * Callers:
 *     ?ResizeView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x180509FC0 (-ResizeView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@44@Z @ 0x180141400 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U2@@-$_tlgWriteTe.c)
 *     ?GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z @ 0x1801BB888 (-GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18028E394 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_ResizeViewActivity::StartActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_ResizeViewActivity *this,
        struct IApplicationView *a2,
        struct tagSIZE a3)
{
  LONG cx; // ebx
  __int64 v6; // rcx
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v10; // r8
  const GUID *v11; // rcx
  DWORD v12; // [rsp+50h] [rbp-38h] BYREF
  const WCHAR *CensoredAumidFromView; // [rsp+58h] [rbp-30h] BYREF
  __int64 v14[5]; // [rsp+60h] [rbp-28h] BYREF
  LONG cy; // [rsp+90h] [rbp+8h] BYREF
  struct tagSIZE v16; // [rsp+A0h] [rbp+18h]
  LONG v17; // [rsp+A8h] [rbp+20h] BYREF

  v16 = a3;
  cx = a3.cx;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v7 = WindowManagementLogging::Provider(v6);
  v8 = (__int64)v7;
  if ( *(_DWORD *)v7 > 5u && tlgKeywordOn((__int64)v7, 0x400000000000LL) )
  {
    cy = v16.cy;
    v17 = cx;
    CensoredAumidFromView = VoiceAssistantPositionerTelemetry::GetCensoredAumidFromView(a2);
    CurrentThreadId = GetCurrentThreadId();
    v10 = *((_QWORD *)this + 34);
    v12 = CurrentThreadId;
    v14[0] = 0x1000000LL;
    if ( !*(_BYTE *)(v10 + 4) || _tlgGuidIsZero((const struct _GUID *)(v10 + 24)) )
      v11 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      byte_18081971B,
      (const GUID *)(v10 + 8),
      v11,
      (__int64)v14,
      (__int64)&v12,
      &CensoredAumidFromView,
      (__int64)&v17,
      (__int64)&cy);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
