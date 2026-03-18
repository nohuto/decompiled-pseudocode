/*
 * XREFs of PfFbBufferListFlushStandby @ 0x1404AC388
 * Callers:
 *     PfpFlushEventBuffers @ 0x140A05AD0 (PfpFlushEventBuffers.c)
 *     PfGetCompletedTrace @ 0x140A538E4 (PfGetCompletedTrace.c)
 *     PfSnEndTrace @ 0x140AA3588 (PfSnEndTrace.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     PfFbBufferListInsertInFree @ 0x1404AC4DC (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedFlushSList @ 0x140730D10 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
