/*
 * XREFs of ?AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1@Z @ 0x1804B369C
 * Callers:
 *     ?SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4SwitchInvokeMethod@4@@Z @ 0x1804B37AC (-SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4Swi.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@34@Z @ 0x180009E64 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x180090598 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ?Provider@CAppLifeCycle_UILogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180399890 (-Provider@CAppLifeCycle_UILogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall PerfTrack::AppSwitchTelemetry::AppSwitched_(__int64 a1, int a2, const WCHAR *a3, int a4, int a5)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  const unsigned __int16 *v13; // [rsp+40h] [rbp-18h] BYREF
  const unsigned __int16 *v14; // [rsp+48h] [rbp-10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = a1;
  v8 = CAppLifeCycle_UILogging::Provider(a1);
  v9 = (__int64)v8;
  if ( *(_DWORD *)v8 > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn((__int64)v8, 0x400000000000LL);
    if ( (_BYTE)v8 )
    {
      v13 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(0LL);
      LODWORD(v15) = a4;
      v14 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(a3);
      a5 = a2;
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                     v9,
                     (__int64)&unk_1807DB1F0,
                     v10,
                     v11,
                     (__int64)&a5,
                     &v14,
                     (__int64)&v15,
                     &v13);
    }
  }
  return (char)v8;
}
