/*
 * XREFs of ?SnapFillType_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@PEBGPEAUHWND__@@W4SnapFillType@SnapComponentTelemetry@@W4FillRule@SnapLayoutHelpers@@4W4Edge@7@5@Z @ 0x1805B09D0
 * Callers:
 *     ?SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4SnapRegion@@PEAUISnappedWindow@@@Z @ 0x1805B086C (-SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4Sn.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@333333@Z @ 0x18000F3E4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJ.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18006F3C0 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?GetTelemetrySnapRegion@CSnapComponentTelemetry@@SA?AW4SnapRegion@SnapComponentTelemetry@@W42@@Z @ 0x18059FC40 (-GetTelemetrySnapRegion@CSnapComponentTelemetry@@SA-AW4SnapRegion@SnapComponentTelemetry@@W42@@Z.c)
 */

char __fastcall CSnapComponentTelemetry::SnapFillType_(__int64 a1, int a2, const WCHAR *a3)
{
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // rbx
  const unsigned __int16 *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int TelemetrySnapRegion; // [rsp+74h] [rbp-Ch] BYREF
  const unsigned __int16 *v12; // [rsp+78h] [rbp-8h] BYREF

  v5 = WindowManagementLogging::Provider(a1);
  v6 = (__int64)v5;
  if ( *(_DWORD *)v5 > 5u )
  {
    LOBYTE(v5) = tlgKeywordOn((__int64)v5, 0x200000000000LL);
    if ( (_BYTE)v5 )
    {
      v12 = SQM::CensorAppID(a3, v7);
      TelemetrySnapRegion = CSnapComponentTelemetry::GetTelemetrySnapRegion(a2);
      LOBYTE(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     v6,
                     (__int64)&unk_1808242DE,
                     v8,
                     v9,
                     (__int64)&TelemetrySnapRegion,
                     &v12);
    }
  }
  return (char)v5;
}
