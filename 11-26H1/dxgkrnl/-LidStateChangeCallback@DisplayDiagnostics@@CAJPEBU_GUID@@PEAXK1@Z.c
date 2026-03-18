/*
 * XREFs of ?LidStateChangeCallback@DisplayDiagnostics@@CAJPEBU_GUID@@PEAXK1@Z @ 0x140064540
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DisplayDiagnostics::LidStateChangeCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        _BYTE *Context)
{
  __int64 v7; // rax

  if ( ValueLength < 4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 91;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ValueLength >= sizeof(LONG)", 91LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 )
    v7 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4;
  if ( !v7 )
    Context[161] = *Value != 0;
  return 0LL;
}
