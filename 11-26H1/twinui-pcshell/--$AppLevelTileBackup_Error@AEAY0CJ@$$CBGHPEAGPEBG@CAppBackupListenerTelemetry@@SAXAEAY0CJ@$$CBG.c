/*
 * XREFs of ??$AppLevelTileBackup_Error@AEAY0CJ@$$CBGHPEAGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CJ@$$CBG$$QEAH$$QEAPEAG$$QEAPEBG@Z @ 0x1806108D4
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppLevelTileAsync_::_1_::catch$48 @ 0x1806D42BA (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppLevel_ea_1806D42BA.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180010E34 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTe.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1801E3528 (-Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CAppBackupListenerTelemetry::AppLevelTileBackup_Error<unsigned short const (&)[41],int,unsigned short *,unsigned short const *>(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3,
        __int64 *a4)
{
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v13; // [rsp+58h] [rbp-20h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h] BYREF
  const wchar_t *v15; // [rsp+68h] [rbp-10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF

  v16 = a1;
  v7 = CAppBackupListenerLogging::Provider(a1);
  if ( *(_DWORD *)v7 > 5u )
  {
    LOBYTE(v7) = tlgKeywordOn((__int64)v7, 0x400000000000LL);
    if ( (_BYTE)v7 )
    {
      v11 = *a4;
      v14 = *a3;
      LODWORD(v16) = *a2;
      v15 = L"App-level Tile Backup failed with error.";
      v13 = v11;
      LOBYTE(v7) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v10,
                     (__int64)&unk_18082D0AA,
                     v8,
                     v9,
                     &v15,
                     (__int64)&v16,
                     &v14,
                     &v13);
    }
  }
  return (char)v7;
}
