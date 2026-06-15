/*
 * XREFs of ?OnPoStandbyAudioRequestReceived@CWindowsPolicyManager@@UEAAJ_N@Z @ 0x180029520
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001008 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?TsSessionOnPoStandbyAudioRequestChanged@@YAXXZ @ 0x18002DE5C (-TsSessionOnPoStandbyAudioRequestChanged@@YAXXZ.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnPoStandbyAudioRequestReceived(
        CWindowsPolicyManager *this,
        unsigned __int8 a2)
{
  char v2; // bl
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  bool v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2 ^ 1;
  if ( (a2 ^ 1) != g_PoBlockAudioPlayback )
  {
    v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    g_PoBlockAudioPlayback = v2;
    if ( v2 == 1 )
      g_AppTypesBlockedTillConsoleUnlocked |= 3u;
    v4 = AudioSrvPolicyManagerTelemetryProvider::Provider();
    if ( *(_DWORD *)v4 > 4u )
    {
      v9 = g_AppTypesBlockedTillConsoleUnlocked;
      v8 = g_PoBlockAudioPlayback;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        (__int64)v4,
        (__int64)&unk_18005B682,
        v5,
        v6,
        (__int64)&v8,
        (__int64)&v9);
    }
    TsSessionOnPoStandbyAudioRequestChanged();
    if ( v3 )
      LeaveCriticalSection(v3);
  }
  return 0LL;
}
