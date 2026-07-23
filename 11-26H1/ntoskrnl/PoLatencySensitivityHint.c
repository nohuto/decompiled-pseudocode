/*
 * XREFs of PoLatencySensitivityHint @ 0x140532910
 * Callers:
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x140AD8CF0 (PopPowerRequestCallbackPerfBoostRequired.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x140482D28 (PpmInterlockedUpdateTimeNoFence.c)
 *     PpmCheckCustomRun @ 0x1404B5550 (PpmCheckCustomRun.c)
 *     PpmTryAcquireLock @ 0x1404C2A18 (PpmTryAcquireLock.c)
 *     PpmEventTraceLatencySensitivityHint @ 0x1404C5994 (PpmEventTraceLatencySensitivityHint.c)
 */

void __fastcall PoLatencySensitivityHint(int a1)
{
  unsigned int v2; // eax
  char *v3; // r9
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // r11
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( a1 != 4 || !PpmPerfMultimediaQosSupported )
  {
    v2 = 0;
    v3 = (char *)PpmCurrentProfile + 712 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
    while ( v2 < 3 )
    {
      if ( v3[v2 + 177] || *(_DWORD *)&v3[4 * v2 + 180] )
      {
        PpmEventTraceLatencySensitivityHint(a1);
        v9 = 0LL;
        v6 = PpmInterlockedUpdateTimeNoFence(
               &PpmPerfLatencyBoostExpiration,
               PpmCheckPeriod + MEMORY[0xFFFFF78000000008],
               &v8) != 0;
        if ( a1 == 4 && PpmInterlockedUpdateTimeNoFence(&PpmPerfDeadlineBoostExpiration, v4, &v9) || v6 )
        {
          _InterlockedOr(v7, 0);
          if ( a1 == 4 && v9 <= PpmCheckLastEffectiveExecutionTime || v8 <= PpmCheckLastEffectiveExecutionTime )
          {
            if ( PpmTryAcquireLock(v5) )
            {
              PpmCheckCustomRun(3LL);
            }
            else if ( !_InterlockedExchange(&PpmPerfLatencyBoostQueued, 1) )
            {
              ExQueueWorkItem(&PpmPerfLatencyBoostWorkItem, CustomPriorityWorkQueue|NormalWorkQueue|0x18);
            }
          }
        }
        return;
      }
      ++v2;
    }
  }
}
