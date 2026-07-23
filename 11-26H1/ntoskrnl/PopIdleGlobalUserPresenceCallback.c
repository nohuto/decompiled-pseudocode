/*
 * XREFs of PopIdleGlobalUserPresenceCallback @ 0x1407DE1C0
 * Callers:
 *     <none>
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404EABBC (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopSmartSuspendValidatePredictions @ 0x140B65EDC (PopSmartSuspendValidatePredictions.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopIdleGlobalUserPresenceCallback(LPCGUID SettingGuid, int *Value, ULONG ValueLength, PVOID Context)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-8h]

  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1
    && *(_QWORD *)SettingGuid->Data4 == *(_QWORD *)GUID_GLOBAL_USER_PRESENCE.Data4
    && Value
    && ValueLength == 4 )
  {
    v4 = *Value;
    PopAcquirePolicyLock(SettingGuid, Value);
    if ( !v4 )
    {
      PopIdleCancelAoAcDozeS4Timer(2u);
      qword_140F10488 = 0LL;
      qword_140F104F0 = 0LL;
      PopSmartSuspendValidatePredictions();
    }
    PopReleasePolicyLock(v6, v5, v7, v8, v10);
  }
  return 0LL;
}
