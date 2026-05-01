/*
 * XREFs of ??$CompatInfoBackup_Error@AEAY0CO@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0CO@$$CBG$$QEAUhresult@winrt@@$$QEAPEBG@Z @ 0x1806111E8
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart_::_1_::catch$62 @ 0x1807016D3 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppCompa_ea_1807016D3.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800054F8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1801E3528 (-Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CAppBackupListenerTelemetry::CompatInfoBackup_Error<unsigned short const (&)[46],winrt::hresult,unsigned short const *>(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF
  const wchar_t *v11; // [rsp+48h] [rbp-10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h]

  v12 = a1;
  v5 = CAppBackupListenerLogging::Provider(a1);
  if ( *(_DWORD *)v5 > 5u )
  {
    LOBYTE(v5) = tlgKeywordOn((__int64)v5, 0x400000000000LL);
    if ( (_BYTE)v5 )
    {
      v8 = *a3;
      LODWORD(v12) = *a2;
      v11 = L"BackupAppCompatInfoOnStart failed with error.";
      v10 = v8;
      v13 = 0x1000000LL;
      LOBYTE(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v7,
                     (__int64)&unk_18082CC22,
                     v6,
                     v7,
                     &v11,
                     (__int64)&v12,
                     &v10);
    }
  }
  return (char)v5;
}
