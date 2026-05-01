/*
 * XREFs of ??$Callback_Error@AEAY0DJ@$$CBGUhresult@winrt@@AEAY00$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0DJ@$$CBG$$QEAUhresult@winrt@@AEAY00$$CBG@Z @ 0x1805EC300
 * Callers:
 *     __lambda_0d53fb9086cf6d11ab0e5935486144eb_::operator()_::_1_::catch$0 @ 0x1806D8BD0 (__lambda_0d53fb9086cf6d11ab0e5935486144eb_--operator()_--_1_--catch$0.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005464 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1801EEDF4 (-Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[57],winrt::hresult,unsigned short const (&)[1]>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  const wchar_t *v9; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  const WCHAR *v11; // [rsp+78h] [rbp+20h] BYREF

  v10 = a3;
  v4 = CAppBackupListenerLogging::Provider(a1);
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v11 = &LocaleName;
      LODWORD(v10) = *a2;
      v9 = L"User intent registry watcher callback failed with error.";
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v5,
                     (__int64)&unk_1807EF332,
                     v6,
                     v7,
                     &v9,
                     (__int64)&v10,
                     &v11);
    }
  }
  return (char)v4;
}
