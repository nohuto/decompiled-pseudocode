/*
 * XREFs of ?AppSnapped_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@AEBUCRect@Geometry@@1PEBGPEAUHWND__@@@Z @ 0x18059E530
 * Callers:
 *     ??$AppSnapped@W4SnapRegion@@AEAUCRect@Geometry@@AEAU23@PEBGAEAPEAUHWND__@@@CSnapComponentTelemetry@@SAX$$QEAW4SnapRegion@@AEAUCRect@Geometry@@1$$QEAPEBGAEAPEAUHWND__@@@Z @ 0x18059B5A8 (--$AppSnapped@W4SnapRegion@@AEAUCRect@Geometry@@AEAU23@PEBGAEAPEAUHWND__@@@CSnapComponentTelemet.c)
 * Callees:
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x18005B8F0 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18006F3C0 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333333AEBU?$_tlgWrapSz@G@@33@Z @ 0x18007DEDC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTem.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?GetTelemetrySnapRegion@CSnapComponentTelemetry@@SA?AW4SnapRegion@SnapComponentTelemetry@@W42@@Z @ 0x18059FC40 (-GetTelemetrySnapRegion@CSnapComponentTelemetry@@SA-AW4SnapRegion@SnapComponentTelemetry@@W42@@Z.c)
 */

char __fastcall CSnapComponentTelemetry::AppSnapped_(
        __int64 a1,
        enum _TABLETMODESTATE *a2,
        int *a3,
        int *a4,
        LPCWSTR pszPath)
{
  unsigned int v7; // r14d
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // rbx
  const unsigned __int16 *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // [rsp+90h] [rbp-1h] BYREF
  int v16; // [rsp+94h] [rbp+3h] BYREF
  int v17; // [rsp+98h] [rbp+7h] BYREF
  int v18; // [rsp+9Ch] [rbp+Bh] BYREF
  int v19; // [rsp+A0h] [rbp+Fh] BYREF
  int v20; // [rsp+A4h] [rbp+13h] BYREF
  int v21; // [rsp+A8h] [rbp+17h] BYREF
  int v22; // [rsp+ACh] [rbp+1Bh] BYREF
  int TelemetrySnapRegion; // [rsp+B0h] [rbp+1Fh] BYREF
  const unsigned __int16 *v24; // [rsp+B8h] [rbp+27h] BYREF
  int v25; // [rsp+E8h] [rbp+57h] BYREF
  int v26; // [rsp+ECh] [rbp+5Bh]

  v26 = HIDWORD(a1);
  v25 = 0;
  v7 = (unsigned int)a2;
  TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v25, a2);
  v9 = WindowManagementLogging::Provider(v8);
  v10 = (__int64)v9;
  if ( *(_DWORD *)v9 > 5u )
  {
    LOBYTE(v9) = tlgKeywordOn((__int64)v9, 0x400000000000LL);
    if ( (_BYTE)v9 )
    {
      v24 = SQM::CensorAppID(pszPath, v11);
      v15 = a4[3];
      v16 = a4[2];
      v17 = a4[1];
      v18 = *a4;
      v19 = a3[3];
      v20 = a3[2];
      v21 = a3[1];
      v22 = *a3;
      TelemetrySnapRegion = CSnapComponentTelemetry::GetTelemetrySnapRegion(v7);
      LOBYTE(v9) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     v10,
                     (__int64)&unk_1808217E7,
                     v12,
                     v13,
                     (__int64)&TelemetrySnapRegion,
                     (__int64)&v22,
                     (__int64)&v21,
                     (__int64)&v20,
                     (__int64)&v19,
                     (__int64)&v18,
                     (__int64)&v17,
                     (__int64)&v16,
                     (__int64)&v15,
                     &v24);
    }
  }
  return (char)v9;
}
