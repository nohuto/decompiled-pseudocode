/*
 * XREFs of ??$AccessRegKey_Error@AEAY0DH@$$CBGAEAPEBGAEAJ@CAppBackupListenerTelemetry@@SAXAEAY0DH@$$CBGAEAPEBGAEAJ@Z @ 0x180610558
 * Callers:
 *     ?BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18002D53C (-BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x18002DA7C (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005404 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1801E3528 (-Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CAppBackupListenerTelemetry::AccessRegKey_Error<unsigned short const (&)[55],unsigned short const * &,long &>(
        __int64 a1,
        __int64 *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+48h] [rbp-20h] BYREF
  __int64 v9[3]; // [rsp+50h] [rbp-18h] BYREF

  v4 = CAppBackupListenerLogging::Provider(a1);
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v8 = *a2;
      v9[0] = a1;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v6,
                     (__int64)&unk_18082CDA3,
                     v5,
                     v6,
                     v9,
                     &v8);
    }
  }
  return (char)v4;
}
