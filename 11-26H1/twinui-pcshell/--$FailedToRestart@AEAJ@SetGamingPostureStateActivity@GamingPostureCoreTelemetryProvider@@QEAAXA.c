/*
 * XREFs of ??$FailedToRestart@AEAJ@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAXAEAJ@Z @ 0x180325A3C
 * Callers:
 *     ?HandleEnterFSEDialogResult@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@AEAAJUhstring@7@AEAVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@@Z @ 0x18032C500 (-HandleEnterFSEDialogResult@GamingPostureController@implementation@Posture@GamingExperiences@Int.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800998DC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18032D19C (-Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::FailedToRestart<long &>(
        __int64 a1,
        int *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  const GUID *v6; // r8
  int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = GamingPostureCoreTelemetryProvider::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v6 = (const GUID *)(*(_QWORD *)(a1 + 272) + 8LL);
      v8 = *a2;
      v9 = 50331648LL;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v5,
                     byte_1807EA05A,
                     v6,
                     v5,
                     (__int64)&v8,
                     (__int64)&v9);
    }
  }
  return (char)v4;
}
