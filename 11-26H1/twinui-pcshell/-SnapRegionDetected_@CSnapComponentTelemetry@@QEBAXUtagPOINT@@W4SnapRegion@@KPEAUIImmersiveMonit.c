/*
 * XREFs of ?SnapRegionDetected_@CSnapComponentTelemetry@@QEBAXUtagPOINT@@W4SnapRegion@@KPEAUIImmersiveMonitor@@@Z @ 0x18022566C
 * Callers:
 *     ??$SnapRegionDetected@AEAUtagPOINT@@AEBW4SnapRegion@@AEAKPEAUIImmersiveMonitor@@@CSnapComponentTelemetry@@SAXAEAUtagPOINT@@AEBW4SnapRegion@@AEAK$$QEAPEAUIImmersiveMonitor@@@Z @ 0x18008A2E4 (--$SnapRegionDetected@AEAUtagPOINT@@AEBW4SnapRegion@@AEAKPEAUIImmersiveMonitor@@@CSnapComponentT.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1801C0804 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?GetDistanceFromScreenEdge@CSnapComponentTelemetry@@SA?AUtagSIZE@@UtagPOINT@@W4SnapRegion@@PEAUIImmersiveMonitor@@@Z @ 0x1802B1604 (-GetDistanceFromScreenEdge@CSnapComponentTelemetry@@SA-AUtagSIZE@@UtagPOINT@@W4SnapRegion@@PEAUI.c)
 *     ?GetTelemetrySnapRegion@CSnapComponentTelemetry@@SA?AW4SnapRegion@SnapComponentTelemetry@@W42@@Z @ 0x18059FC40 (-GetTelemetrySnapRegion@CSnapComponentTelemetry@@SA-AW4SnapRegion@SnapComponentTelemetry@@W42@@Z.c)
 */

char __fastcall CSnapComponentTelemetry::SnapRegionDetected_(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5)
{
  __int64 DistanceFromScreenEdge; // rbx
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r10
  int v12; // [rsp+50h] [rbp-28h] BYREF
  int v13; // [rsp+54h] [rbp-24h] BYREF
  __int64 v14; // [rsp+58h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF

  v16 = a1;
  DistanceFromScreenEdge = CSnapComponentTelemetry::GetDistanceFromScreenEdge(a2, a3, a5);
  v14 = DistanceFromScreenEdge;
  v9 = WindowManagementLogging::Provider(v8);
  if ( *(_DWORD *)v9 > 5u )
  {
    LOBYTE(v9) = tlgKeywordOn((__int64)v9, 0x400000000000LL);
    if ( (_BYTE)v9 )
    {
      v12 = HIDWORD(v14);
      LODWORD(v16) = a4;
      v13 = DistanceFromScreenEdge;
      LODWORD(v14) = CSnapComponentTelemetry::GetTelemetrySnapRegion(a3);
      v15 = 0x2000000LL;
      LOBYTE(v9) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     v10,
                     byte_18082188B,
                     0LL,
                     0LL,
                     (__int64)&v15,
                     (__int64)&v14,
                     (__int64)&v13,
                     (__int64)&v12,
                     (__int64)&v16);
    }
  }
  return (char)v9;
}
