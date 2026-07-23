/*
 * XREFs of PopLidSwitchReliabilityUpdateCallback @ 0x1407CFA80
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopBroadcastSessionInfo @ 0x140ABE614 (PopBroadcastSessionInfo.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x140B34328 (PopEvaluatePowerButtonSuppressionState.c)
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
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerButtonSuppressionLock, v8, v9, v10);
      if ( v7 )
      {
        dword_140F0D3A4 &= ~0x20u;
        byte_140F0D3A1 = PopPowerButtonSuppression;
      }
      else
      {
        dword_140F0D3A4 |= 0x20u;
        byte_140F0D3A1 = 0;
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
