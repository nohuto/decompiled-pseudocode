/*
 * XREFs of ??$SettingsLaunched@AEA_N@CopilotHotkeyManagerTelemetry@@SAXAEA_N@Z @ 0x18061E558
 * Callers:
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1 @ 0x180632CA0 (CopilotHotkeyManager--LaunchHardwareKeySettings$_ResumeCoro$1.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800C7D4C (--$Write@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@CopilotHotkeyManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180633BCC (-Provider@CopilotHotkeyManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CopilotHotkeyManagerTelemetry::SettingsLaunched<bool &>(char *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  char v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = CopilotHotkeyManagerTelemetry::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v2, 0x200000000000LL);
    if ( (_BYTE)v2 )
    {
      v5 = *a1;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>>(
                     v3,
                     byte_18082DB0A,
                     0LL,
                     v3,
                     (__int64)&v5);
    }
  }
  return (char)v2;
}
