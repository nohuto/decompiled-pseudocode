/*
 * XREFs of PfFbBufferListFlushStandby @ 0x1404A5A18
 * Callers:
 *     PfpFlushEventBuffers @ 0x1409F12C0 (PfpFlushEventBuffers.c)
 *     PfGetCompletedTrace @ 0x140A5CBD4 (PfGetCompletedTrace.c)
 *     PfSnEndTrace @ 0x140AA6328 (PfSnEndTrace.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     PfFbBufferListInsertInFree @ 0x1404A5B6C (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PfFbBufferListFlushStandby(__int64 a1, __int64 a2)
{
  PSLIST_ENTRY v4; // rdi
  PSLIST_ENTRY v5; // rsi

  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)a2) )
  {
    v4 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a2 + 32));
    while ( v4 )
    {
      v5 = v4;
      v4 = v4->Next;
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)a2) )
        guard_dispatch_icall_no_overrides(a1, v5);
      else
        PfFbBufferListInsertInFree((PEX_RUNDOWN_REF)a2, v5, 0);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)a2);
  }
}
