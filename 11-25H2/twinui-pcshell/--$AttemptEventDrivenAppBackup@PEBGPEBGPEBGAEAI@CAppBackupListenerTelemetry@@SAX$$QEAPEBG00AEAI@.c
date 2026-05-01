/*
 * XREFs of ??$AttemptEventDrivenAppBackup@PEBGPEBGPEBGAEAI@CAppBackupListenerTelemetry@@SAX$$QEAPEBG00AEAI@Z @ 0x1805EBDAC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$1 @ 0x1805EE2C0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18000F5A0 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTe.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1801EEDF4 (-Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CAppBackupListenerTelemetry::AttemptEventDrivenAppBackup<unsigned short const *,unsigned short const *,unsigned short const *,unsigned int &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v11; // [rsp+60h] [rbp-28h] BYREF
  __int64 v12; // [rsp+68h] [rbp-20h] BYREF
  __int64 v13; // [rsp+70h] [rbp-18h] BYREF

  v6 = CAppBackupListenerLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v6 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v6, 0x400000000000LL);
    if ( (_BYTE)v6 )
    {
      v11 = *a3;
      v12 = *a2;
      v13 = *a1;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v9,
                     (__int64)&unk_1807EF212,
                     v7,
                     v8,
                     &v13,
                     &v12,
                     &v11);
    }
  }
  return (char)v6;
}
