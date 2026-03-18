/*
 * XREFs of VidSchiProcessIsrSchedulingLogFull @ 0x14002E920
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1400297B0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

PSLIST_ENTRY __fastcall VidSchiProcessIsrSchedulingLogFull(__int64 a1)
{
  union _SLIST_HEADER *v1; // rdi
  PSLIST_ENTRY v3; // rax
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // [rsp+20h] [rbp-38h]

  v1 = *(union _SLIST_HEADER **)(a1 + 24);
  v3 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 11296));
  if ( v3 )
  {
    v3[2].Next = (struct _SLIST_ENTRY *)a1;
    LODWORD(v3->Next) = 15;
    return ExpInterlockedPushEntrySList(v1 + 129, v3 + 1);
  }
  else
  {
    WdLogSingleEntry1(1LL, *(unsigned __int16 *)(a1 + 4));
    v7 = *(unsigned __int16 *)(a1 + 4);
    WdLogGlobalForLineNumber = 389;
    return (PSLIST_ENTRY)DxgkLogInternalTriageEvent(
                           v5,
                           0x40000,
                           v6,
                           (unsigned int)L"The list of pending scheduling log interrupts is full on node %d. There must be"
                                          " severe contention on the scheduler spin lock. This interrupt will be ignored,"
                                          " and a preceding interrupt will grow the scheduling log if needed.",
                           v7,
                           0LL,
                           0LL,
                           0LL);
  }
}
