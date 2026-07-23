/*
 * XREFs of PopWnfInSupCallback @ 0x1407DA670
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     ExQueryWnfStateData @ 0x1409C4360 (ExQueryWnfStateData.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x140B34328 (PopEvaluatePowerButtonSuppressionState.c)
 */

__int64 __fastcall PopWnfInSupCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // ebx
  const void *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  int v11; // [rsp+20h] [rbp-18h] BYREF
  int v12[5]; // [rsp+24h] [rbp-14h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = a4;
  v12[0] = 0;
  v5 = -1073741811;
  if ( SSHSupportIsPlatformAoAc() )
  {
    if ( !memcmp(v6, &WNF_PO_INPUT_SUPPRESS_NOTIFICATION_EX, 8uLL) )
    {
      v11 = 4;
      v5 = ExQueryWnfStateData(a1, &v13, v12, &v11);
      if ( v5 >= 0 )
      {
        if ( v11 == 4 )
        {
          PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerButtonSuppressionLock, v7, v8, v9);
          dword_140F0D3B8 = v12[0];
          return (unsigned int)PopEvaluatePowerButtonSuppressionState();
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return (unsigned int)v5;
}
