/*
 * XREFs of ?StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18007A744
 * Callers:
 *     ?ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18007B740 (-ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180043BF8 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180045690 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007A848 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0DAAAAAA@U_TlgReflectorTag_P.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18007EA24 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@.c)
 *     ?GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z @ 0x1801BB888 (-GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z.c)
 *     ?GetActivationId@VoiceAssistantPositionerTelemetry@@CA_KPEAUIUnknown@@@Z @ 0x1801E32C4 (-GetActivationId@VoiceAssistantPositionerTelemetry@@CA_KPEAUIUnknown@@@Z.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::StartActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  const struct _tlgProvider_t *v6; // rax
  int v7; // esi
  DWORD CurrentThreadId; // eax
  __int64 v9; // r8
  int v10; // ecx
  unsigned __int64 ActivationId; // [rsp+50h] [rbp-38h] BYREF
  const unsigned __int16 *CensoredAumidFromView; // [rsp+58h] [rbp-30h] BYREF
  __int64 v13[5]; // [rsp+60h] [rbp-28h] BYREF
  bool v14; // [rsp+90h] [rbp+8h] BYREF
  DWORD v15; // [rsp+A8h] [rbp+20h] BYREF

  wil::ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v6 = WindowManagementLogging::Provider();
  v7 = (int)v6;
  if ( *(_DWORD *)v6 > 5u )
  {
    ActivationId = VoiceAssistantPositionerTelemetry::GetActivationId(a3);
    v14 = a3 != 0LL;
    CensoredAumidFromView = VoiceAssistantPositionerTelemetry::GetCensoredAumidFromView(a2);
    CurrentThreadId = GetCurrentThreadId();
    v9 = *((_QWORD *)this + 34);
    v15 = CurrentThreadId;
    v13[0] = 50331648LL;
    if ( !*(_BYTE *)(v9 + 4) || _tlgGuidIsZero((const struct _GUID *)(v9 + 24)) )
      v10 = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v7,
      (unsigned int)&unk_1808191C1,
      v9 + 8,
      v10,
      (__int64)v13,
      (__int64)&v15,
      (__int64)&CensoredAumidFromView,
      (__int64)&v14,
      (__int64)&ActivationId);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *)((char *)this + 288));
}
