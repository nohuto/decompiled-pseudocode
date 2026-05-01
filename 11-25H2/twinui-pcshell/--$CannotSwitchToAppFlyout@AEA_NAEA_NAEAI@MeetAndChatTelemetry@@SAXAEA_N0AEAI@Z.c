/*
 * XREFs of ??$CannotSwitchToAppFlyout@AEA_NAEA_NAEAI@MeetAndChatTelemetry@@SAXAEA_N0AEAI@Z @ 0x1805CD78C
 * Callers:
 *     ?SwitchToApplicationFlyoutIfNeeded@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805D3324 (-SwitchToApplicationFlyoutIfNeeded@MeetAndChatManager@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18000C64C (--$Write@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Provider@MeetAndChatTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1802B3424 (-Provider@MeetAndChatTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall MeetAndChatTelemetry::CannotSwitchToAppFlyout<bool &,bool &,unsigned int &>(
        __int64 a1)
{
  const struct _tlgProvider_t *result; // rax

  result = MeetAndChatTelemetryLogging::Provider(a1);
  if ( *(_DWORD *)result > 5u )
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
                                            (__int64)result,
                                            (__int64)&unk_1807EC08B);
  return result;
}
