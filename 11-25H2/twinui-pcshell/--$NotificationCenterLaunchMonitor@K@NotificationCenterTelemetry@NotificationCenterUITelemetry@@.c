/*
 * XREFs of ??$NotificationCenterLaunchMonitor@K@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAX$$QEAK@Z @ 0x18035C6E8
 * Callers:
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x180360D40 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?Provider@NotificationCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180047E50 (-Provider@NotificationCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800C4324 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

char __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::NotificationCenterLaunchMonitor<unsigned long>(
        _DWORD *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r9
  bool v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v2 = NotificationCenterLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v2 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v2, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v6 = *a1 != 0;
      v7 = 0x2000000LL;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                     v3,
                     byte_1807BD2F7,
                     0LL,
                     v4,
                     (__int64)&v6,
                     (__int64)&v7);
    }
  }
  return (char)v2;
}
