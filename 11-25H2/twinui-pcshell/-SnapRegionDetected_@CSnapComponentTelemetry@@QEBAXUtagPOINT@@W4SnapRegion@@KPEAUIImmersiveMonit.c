/*
 * XREFs of ?SnapRegionDetected_@CSnapComponentTelemetry@@QEBAXUtagPOINT@@W4SnapRegion@@KPEAUIImmersiveMonitor@@@Z @ 0x180233B98
 * Callers:
 *     ??$SnapRegionDetected@AEAUtagPOINT@@AEBW4SnapRegion@@AEAKPEAUIImmersiveMonitor@@@CSnapComponentTelemetry@@SAXAEAUtagPOINT@@AEBW4SnapRegion@@AEAK$$QEAPEAUIImmersiveMonitor@@@Z @ 0x18008F4B8 (--$SnapRegionDetected@AEAUtagPOINT@@AEBW4SnapRegion@@AEAKPEAUIImmersiveMonitor@@@CSnapComponentT.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1801CA204 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?GetDistanceFromScreenEdge@CSnapComponentTelemetry@@SA?AUtagSIZE@@UtagPOINT@@W4SnapRegion@@PEAUIImmersiveMonitor@@@Z @ 0x1802BA530 (-GetDistanceFromScreenEdge@CSnapComponentTelemetry@@SA-AUtagSIZE@@UtagPOINT@@W4SnapRegion@@PEAUI.c)
 *     ?GetTelemetrySnapRegion@CSnapComponentTelemetry@@SA?AW4SnapRegion@SnapComponentTelemetry@@W42@@Z @ 0x18057C474 (-GetTelemetrySnapRegion@CSnapComponentTelemetry@@SA-AW4SnapRegion@SnapComponentTelemetry@@W42@@Z.c)
 */

char __fastcall CSnapComponentTelemetry::SnapRegionDetected_(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5)
{
  __int64 DistanceFromScreenEdge; // rbx
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r10
  int v11; // [rsp+50h] [rbp-28h] BYREF
  int v12; // [rsp+54h] [rbp-24h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h] BYREF
  __int64 v15; // [rsp+80h] [rbp+8h] BYREF

  v15 = a1;
  DistanceFromScreenEdge = CSnapComponentTelemetry::GetDistanceFromScreenEdge(a2, a3, a5);
  v13 = DistanceFromScreenEdge;
  v8 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v8 > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn((__int64)v8, 0x400000000000LL);
    if ( (_BYTE)v8 )
    {
      v11 = HIDWORD(v13);
      LODWORD(v15) = a4;
      v12 = DistanceFromScreenEdge;
      LODWORD(v13) = CSnapComponentTelemetry::GetTelemetrySnapRegion(a3);
      v14 = 0x2000000LL;
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     v9,
                     byte_1807E6016,
                     0LL,
                     0LL,
                     (__int64)&v14,
                     (__int64)&v13,
                     (__int64)&v12,
                     (__int64)&v11,
                     (__int64)&v15);
    }
  }
  return (char)v8;
}
