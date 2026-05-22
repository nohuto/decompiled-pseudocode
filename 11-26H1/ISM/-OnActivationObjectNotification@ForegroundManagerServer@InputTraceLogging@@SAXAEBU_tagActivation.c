/*
 * XREFs of ?OnActivationObjectNotification@ForegroundManagerServer@InputTraceLogging@@SAXAEBU_tagActivationObjectNotification@@@Z @ 0x180027BE8
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x1800278E4 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@444@Z @ 0x180001EE4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800165E0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?ActivationNotificationActionToString@InputTraceLogging@@CAPEBDAEBW4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@@Z @ 0x1800AB99C (-ActivationNotificationActionToString@InputTraceLogging@@CAPEBDAEBW4ACTIVATION_OBJECT_NOTIFICATI.c)
 */

void __fastcall InputTraceLogging::ForegroundManagerServer::OnActivationObjectNotification(
        const struct _tagActivationObjectNotification *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // [rsp+50h] [rbp-18h] BYREF
  const char *v6; // [rsp+58h] [rbp-10h] BYREF
  __int64 v7; // [rsp+78h] [rbp+10h] BYREF
  __int64 v8; // [rsp+80h] [rbp+18h] BYREF
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u
    && (*((_DWORD *)v2 + 4) & 0x8000LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x8000LL) == *((_QWORD *)v2 + 3) )
  {
    v7 = *((_QWORD *)a1 + 7);
    v8 = *((_QWORD *)a1 + 6);
    v9 = *((_QWORD *)a1 + 2);
    v5 = *((_QWORD *)a1 + 1);
    v6 = InputTraceLogging::ActivationNotificationActionToString((const struct _tagActivationObjectNotification *)((char *)a1 + 40));
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v3,
      (__int64)&unk_180212506,
      v3,
      v4,
      (const unsigned __int16 **)&v6,
      (__int64)&v5,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7);
  }
}
