/*
 * XREFs of ??$AppBackup_Error@AEAY0CL@$$CBGHPEBGPEBGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CL@$$CBG$$QEAH$$QEAPEBG22@Z @ 0x1805EBB88
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$1_::_1_::catch$11 @ 0x1806D8C52 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync_ea_1806D8C52.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18000F6CC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWrit.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1801EEDF4 (-Provider@CAppBackupListenerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CAppBackupListenerTelemetry::AppBackup_Error<unsigned short const (&)[43],int,unsigned short const *,unsigned short const *,unsigned short const *>(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v14; // [rsp+58h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-20h] BYREF
  __int64 v16; // [rsp+68h] [rbp-18h] BYREF
  const wchar_t *v17; // [rsp+70h] [rbp-10h] BYREF
  __int64 v18; // [rsp+90h] [rbp+10h] BYREF

  v18 = a1;
  v8 = CAppBackupListenerLogging::Provider(a1);
  if ( *(_DWORD *)v8 > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn((__int64)v8, 0x400000000000LL);
    if ( (_BYTE)v8 )
    {
      v15 = *a4;
      v16 = *a3;
      v12 = *a5;
      LODWORD(v18) = *a2;
      v17 = L"Event-driven App Backup failed with error.";
      v14 = v12;
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v11,
                     (__int64)&unk_1807EF0D3,
                     v9,
                     v10,
                     &v17,
                     (__int64)&v18,
                     &v16,
                     &v15,
                     &v14);
    }
  }
  return (char)v8;
}
