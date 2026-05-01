/*
 * XREFs of ??$CopilotHotkey_Output_Debug_String@AEAY0GL@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0GL@$$CBG@Z @ 0x1805F980C
 * Callers:
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x18060E000 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180013248 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@CopilotHotkeyManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x18060E660 (-Provider@CopilotHotkeyManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[107]>(
        const WCHAR *a1)
{
  const struct _tlgProvider_t *v1; // rax
  __int64 v2; // r9
  const WCHAR *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  v1 = CopilotHotkeyManagerTelemetry::Provider();
  if ( *(_DWORD *)v1 > 5u )
  {
    v4 = L"Target app not registered for extended signals, triggering singleTap in MonitorForCopilotExtendedSignals()";
    LODWORD(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                    (__int64)v1,
                    byte_1807EF56C,
                    0LL,
                    v2,
                    &v4);
  }
  return (int)v1;
}
