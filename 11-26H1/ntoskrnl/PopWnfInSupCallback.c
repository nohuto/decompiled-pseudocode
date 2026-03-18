/*
 * XREFs of PopWnfInSupCallback @ 0x1407D72D0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C9760 (SSHSupportIsPlatformAoAc.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     ExQueryWnfStateData @ 0x1409489F0 (ExQueryWnfStateData.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x140B31ED4 (PopEvaluatePowerButtonSuppressionState.c)
 */

__int64 __fastcall PopWnfInSupCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // ebx
  const void *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  int v11; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v12[5]; // [rsp+24h] [rbp-14h] BYREF
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
          PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock.Process, v7, v8, v9);
          LODWORD(PopWeakChargerLock.QueueListEntry.Flink) = v12[0];
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
