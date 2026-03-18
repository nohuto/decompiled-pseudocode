/*
 * XREFs of PopIdleAoAcDozeToS4 @ 0x1407DA0B0
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1403B42F8 (PopDeepSleepClearDisengageReason.c)
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1406004D0 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 *     PopTraceSystemIdleS0LowPowerDoze @ 0x1407D5E74 (PopTraceSystemIdleS0LowPowerDoze.c)
 *     PopExecutePowerAction @ 0x140A37D58 (PopExecutePowerAction.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

void __fastcall PopIdleAoAcDozeToS4(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // [rsp+20h] [rbp-40h]
  _DWORD v7[4]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v8[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v9; // [rsp+48h] [rbp-18h]
  __int64 v10; // [rsp+58h] [rbp-8h]

  PopAcquirePolicyLock(a1, a2);
  PopTraceSystemIdleS0LowPowerDoze();
  v10 = 0LL;
  v9 = 0LL;
  if ( !(unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
    LODWORD(stru_140F0F620.KcsanThread) = 0;
  if ( LODWORD(stru_140F0F620.Padding[0]) == 1 )
    goto LABEL_16;
  if ( LODWORD(stru_140F0F620.Padding[0]) != 2 )
  {
    switch ( LODWORD(stru_140F0F620.Padding[0]) )
    {
      case 3:
        if ( !(unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
        {
          v8[0] = 13;
          goto LABEL_17;
        }
        break;
      case 4:
        if ( !(unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
        {
          v8[0] = 14;
          goto LABEL_17;
        }
        break;
      case 6:
        v8[0] = 11;
        goto LABEL_17;
    }
LABEL_16:
    v8[0] = 6;
    goto LABEL_17;
  }
  v8[0] = 11;
  if ( qword_140F0FBC8
    && MEMORY[0xFFFFF78000000008] - qword_140F0FBC8 > 10000000
                                                    * (unsigned __int64)(unsigned int)PopSmartUserPresenceCheckTimeout )
  {
    v8[0] = 12;
  }
LABEL_17:
  v8[1] = 128;
  v7[2] = 0;
  v7[0] = 3;
  v7[1] = -2147483612;
  PopExecutePowerAction((unsigned int)v8, 0, (unsigned int)v7, 5, 1);
  PopReleasePolicyLock(v3, v2, v4, v5, v6);
  _InterlockedAnd((_DWORD *)stru_140F0F620.Padding + 1, 0);
  PopDeepSleepClearDisengageReason(4u);
}
