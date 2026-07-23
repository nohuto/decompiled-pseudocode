/*
 * XREFs of PopFxUpdateAccountingActiveTime @ 0x140397B38
 * Callers:
 *     PopFxPauseDeviceAccounting @ 0x14039675C (PopFxPauseDeviceAccounting.c)
 *     PopFxIdleWorkerTail @ 0x140397384 (PopFxIdleWorkerTail.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x1403BBDB0 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopFxUpdateComponentAccountingEnhanced @ 0x1403BCFD8 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopFxUpdateDeviceAccountingEnhanced @ 0x1403BD938 (PopFxUpdateDeviceAccountingEnhanced.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxUpdateAccountingActiveTime(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // r8

  LODWORD(v3) = 0;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( a2 > v4 )
    {
      v5 = a2 - v4;
      *(_QWORD *)(a1 + 128) += v5;
      if ( v5 < a3 )
      {
        *(_QWORD *)(a1 + 136) += v5;
      }
      else
      {
        while ( (unsigned int)v3 < 5 )
        {
          v6 = (unsigned int)v3;
          v3 = (unsigned int)(v3 + 1);
          if ( v5 >= PopFxAccountingBucketLimits[v6] && v5 < PopFxAccountingBucketLimits[v3] )
          {
            ++*(_QWORD *)(a1 + 8 * v6 + 144);
            *(_QWORD *)(a1 + 8 * v6 + 184) += v5;
            return;
          }
        }
      }
    }
  }
}
