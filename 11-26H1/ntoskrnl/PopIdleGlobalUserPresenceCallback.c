/*
 * XREFs of PopIdleGlobalUserPresenceCallback @ 0x1407DA270
 * Callers:
 *     <none>
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1404F15DC (PopIdleCancelAoAcDozeS4Timer.c)
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1406004D0 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 *     PopSmartSuspendValidatePredictions @ 0x140B62E3C (PopSmartSuspendValidatePredictions.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopIdleGlobalUserPresenceCallback(LPCGUID SettingGuid, int *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+20h] [rbp-8h]

  v4 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_GLOBAL_USER_PRESENCE.Data1 )
    v4 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_GLOBAL_USER_PRESENCE.Data4;
  if ( !v4 && Value && ValueLength == 4 )
  {
    v5 = *Value;
    PopAcquirePolicyLock(SettingGuid, Value);
    if ( !v5 )
    {
      PopIdleCancelAoAcDozeS4Timer(2u);
      qword_140F0FBC8 = 0LL;
      qword_140F0FC30 = 0LL;
      if ( !(unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
        LODWORD(stru_140F0F620.KcsanThread) = 0;
      PopSmartSuspendValidatePredictions();
    }
    PopReleasePolicyLock(v7, v6, v8, v9, v11);
  }
  return 0LL;
}
