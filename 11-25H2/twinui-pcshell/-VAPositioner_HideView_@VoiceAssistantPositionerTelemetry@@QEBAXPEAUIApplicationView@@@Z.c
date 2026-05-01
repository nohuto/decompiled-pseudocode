/*
 * XREFs of ?VAPositioner_HideView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1804EC138
 * Callers:
 *     ?HideView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804E7B60 (-HideView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180005558 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z @ 0x18009051C (-GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_HideView_(
        VoiceAssistantPositionerTelemetry *this,
        struct IApplicationView *a2)
{
  const struct _tlgProvider_t *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  const unsigned __int16 *CensoredAumidFromView; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  CensoredAumidFromView = (const unsigned __int16 *)this;
  v3 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v3 > 4u )
  {
    CensoredAumidFromView = VoiceAssistantPositionerTelemetry::GetCensoredAumidFromView(a2);
    v7 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
      (__int64)v3,
      (__int64)&unk_1807DD3D9,
      v4,
      v5,
      (__int64)&v7,
      &CensoredAumidFromView);
  }
}
