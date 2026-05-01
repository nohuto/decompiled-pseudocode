/*
 * XREFs of ??$DashboardInteracted@AEAU_GUID@@IAEA_NAEAY00$$CBGPEBGAEAY0BK@$$CBGAEAPEBG@DashboardManagerTelemetry@@SAXAEAU_GUID@@$$QEAIAEA_NAEAY00$$CBG$$QEAPEBGAEAY0BK@$$CBGAEAPEBG@Z @ 0x1805C41C0
 * Callers:
 *     ?ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x1805D7E2C (-ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x18018CBE4 (-Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@U4@U4@U4@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@666AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801B18E0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWra.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

char __fastcall DashboardManagerTelemetry::DashboardInteracted<_GUID &,unsigned int,bool &,unsigned short const (&)[1],unsigned short const *,unsigned short const (&)[26],unsigned short const * &>(
        __int128 *a1,
        int *a2,
        _BYTE *a3,
        __int64 a4,
        const WCHAR **a5,
        int a6,
        const WCHAR **a7)
{
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v13; // xmm0
  const WCHAR *v14; // rcx
  _BYTE v16[4]; // [rsp+68h] [rbp-11h] BYREF
  int v17; // [rsp+6Ch] [rbp-Dh] BYREF
  __int64 v18; // [rsp+70h] [rbp-9h] BYREF
  const WCHAR *v19; // [rsp+78h] [rbp-1h] BYREF
  const WCHAR *v20; // [rsp+80h] [rbp+7h] BYREF
  const WCHAR *v21; // [rsp+88h] [rbp+Fh] BYREF
  const WCHAR *v22; // [rsp+90h] [rbp+17h] BYREF
  __int128 *v23; // [rsp+98h] [rbp+1Fh] BYREF
  __int128 v24; // [rsp+A0h] [rbp+27h] BYREF

  v10 = DashboardManagerTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)v10 > 5u )
  {
    LOBYTE(v10) = tlgKeywordOn((__int64)v10, 0x400000000000LL);
    if ( (_BYTE)v10 )
    {
      v13 = *a1;
      v20 = L"ToggleDashboardVisibility";
      v19 = *a7;
      v18 = 50331648LL;
      v14 = *a5;
      v22 = &pvData;
      v16[0] = *a3;
      v17 = *a2;
      v23 = &v24;
      v21 = v14;
      v24 = v13;
      LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                      v12,
                      byte_180825E9C,
                      v11,
                      v12,
                      (__int64 *)&v23,
                      (__int64)&v17,
                      (__int64)v16,
                      &v22,
                      &v21,
                      &v20,
                      &v19,
                      (__int64)&v18);
    }
  }
  return (char)v10;
}
