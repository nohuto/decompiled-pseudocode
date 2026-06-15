/*
 * XREFs of ?LowPowerEpochNotificationCallback@@YAKPEAXK0@Z @ 0x180005D70
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001008 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x180007B04 (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 */

__int64 __fastcall LowPowerEpochNotificationCallback(void *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  int v4; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  bool v10; // [rsp+50h] [rbp+18h] BYREF
  int v11; // [rsp+58h] [rbp+20h] BYREF

  if ( *((_DWORD *)a3 + 4) == 4 )
  {
    v3 = *a3 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
    if ( *a3 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
      v3 = a3[1] - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
    if ( !v3 )
    {
      v4 = *((_DWORD *)a3 + 5);
      if ( (v4 != 0) != g_bLowPowerEpoch )
      {
        v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
        g_bLowPowerEpoch = v4 != 0;
        if ( v4 )
          g_AppTypesBlockedTillConsoleUnlocked |= 2u;
        v6 = AudioSrvPolicyManagerTelemetryProvider::Provider();
        if ( *(_DWORD *)v6 > 4u && (unsigned __int8)tlgKeywordOn(v6, 0x8000LL) )
        {
          v11 = g_AppTypesBlockedTillConsoleUnlocked;
          v10 = g_bLowPowerEpoch;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
            v7,
            (__int64)&unk_18005B6EC,
            v7,
            v8,
            (__int64)&v10,
            (__int64)&v11);
        }
        TsSessionOnLowPowerEpochStateChanged();
        if ( v5 )
          LeaveCriticalSection(v5);
      }
    }
  }
  return 0LL;
}
