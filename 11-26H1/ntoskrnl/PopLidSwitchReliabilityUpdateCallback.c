/*
 * XREFs of PopLidSwitchReliabilityUpdateCallback @ 0x1407CC9E0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C9760 (SSHSupportIsPlatformAoAc.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopBroadcastSessionInfo @ 0x140ABC7F4 (PopBroadcastSessionInfo.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x140B31ED4 (PopEvaluatePowerButtonSuppressionState.c)
 */

__int64 __fastcall PopLidSwitchReliabilityUpdateCallback(_QWORD *a1, int *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r9
  __int128 v6; // xmm0
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v12 = 0uLL;
  v5 = *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1 - *a1;
  if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1 == *a1 )
    v5 = *(_QWORD *)GUID_LIDSWITCH_STATE_RELIABILITY.Data4 - a1[1];
  if ( !v5 && a3 == 4 && a2 )
  {
    v6 = *(_OWORD *)a1;
    v13 = *a2;
    v12 = v6;
    PopBroadcastSessionInfo(0LL, 20LL, &v12);
    v7 = *a2;
    if ( SSHSupportIsPlatformAoAc() )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock.Process, v8, v9, v10);
      if ( v7 )
      {
        HIDWORD(PopWeakChargerLock.Spare18) &= ~0x20u;
        BYTE1(PopWeakChargerLock.Spare18) = PopWeakChargerLock.Spare18;
      }
      else
      {
        HIDWORD(PopWeakChargerLock.Spare18) |= 0x20u;
        BYTE1(PopWeakChargerLock.Spare18) = 0;
      }
      PopEvaluatePowerButtonSuppressionState();
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
