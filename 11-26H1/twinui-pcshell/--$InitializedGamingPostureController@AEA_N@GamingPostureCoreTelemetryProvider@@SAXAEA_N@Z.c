/*
 * XREFs of ??$InitializedGamingPostureController@AEA_N@GamingPostureCoreTelemetryProvider@@SAXAEA_N@Z @ 0x180325C88
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032C750 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--I.c)
 *     ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x1803322B0 (-perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800C7D4C (--$Write@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18032D19C (-Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall GamingPostureCoreTelemetryProvider::InitializedGamingPostureController<bool &>(char *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  char v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = GamingPostureCoreTelemetryProvider::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    v5 = *a1;
    LODWORD(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>>(
                    (__int64)v2,
                    byte_1807EA15E,
                    0LL,
                    v3,
                    (__int64)&v5);
  }
  return (int)v2;
}
