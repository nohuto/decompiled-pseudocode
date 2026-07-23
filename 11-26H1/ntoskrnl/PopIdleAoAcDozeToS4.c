/*
 * XREFs of PopIdleAoAcDozeToS4 @ 0x1407DE050
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x1403BE204 (PopDeepSleepClearDisengageReason.c)
 *     PopTraceSystemIdleS0LowPowerDoze @ 0x1407D9024 (PopTraceSystemIdleS0LowPowerDoze.c)
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
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
  if ( dword_140F10358 == 1 )
    goto LABEL_8;
  if ( dword_140F10358 != 2 )
  {
    if ( dword_140F10358 == 6 )
    {
      v8[0] = 11;
      goto LABEL_9;
    }
LABEL_8:
    v8[0] = 6;
    goto LABEL_9;
  }
  v8[0] = 11;
  if ( qword_140F10488
    && MEMORY[0xFFFFF78000000008] - qword_140F10488 > 10000000
                                                    * (unsigned __int64)(unsigned int)PopSmartUserPresenceCheckTimeout )
  {
    v8[0] = 12;
  }
LABEL_9:
  v8[1] = 128;
  v7[2] = 0;
  v7[0] = 3;
  v7[1] = -2147483612;
  PopExecutePowerAction((unsigned int)v8, 0, (unsigned int)v7, 5, 1);
  PopReleasePolicyLock(v3, v2, v4, v5, v6);
  _InterlockedAnd(&dword_140F1035C, 0);
  PopDeepSleepClearDisengageReason(4u);
}
