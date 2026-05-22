/*
 * XREFs of ?LogOnHwndChanged@BamoWindowsMessageDeliveryProxy@@AEAAXXZ @ 0x18008D730
 * Callers:
 *     ?UpdateHwnd@BamoWindowsMessageDeliveryProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x1800615D4 (-UpdateHwnd@BamoWindowsMessageDeliveryProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800020DC (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 */

void __fastcall BamoWindowsMessageDeliveryProxy::LogOnHwndChanged(BamoWindowsMessageDeliveryProxy *this)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // [rsp+48h] [rbp+10h] BYREF

  if ( ISMBamos_AutoBamos::BamoTraceLogging::s_providers
    && *(_DWORD *)ISMBamos_AutoBamos::BamoTraceLogging::s_providers > 5u
    && tlgKeywordOn((__int64)ISMBamos_AutoBamos::BamoTraceLogging::s_providers, 1LL) )
  {
    v4 = *(_DWORD *)(v2 + 40);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v1,
      (__int64)&unk_180220F46,
      v2,
      v3,
      (__int64)&v4);
  }
}
