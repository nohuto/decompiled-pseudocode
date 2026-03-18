/*
 * XREFs of VidSchiProcessIsrMonitoredFenceSignaled @ 0x14002B22C
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1400297B0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x140044EC8 (McTemplateK0dq_EtwWriteTransfer.c)
 */

PSLIST_ENTRY __fastcall VidSchiProcessIsrMonitoredFenceSignaled(__int64 a1)
{
  union _SLIST_HEADER *v1; // rdi
  PSLIST_ENTRY v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // [rsp+20h] [rbp-38h]

  v1 = *(union _SLIST_HEADER **)(a1 + 24);
  v3 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 3088));
  if ( v3 )
  {
    v3[2].Next = (struct _SLIST_ENTRY *)a1;
    LODWORD(v3->Next) = 11;
    return ExpInterlockedPushEntrySList(v1 + 129, v3 + 1);
  }
  else
  {
    if ( (byte_14008A202 & 1) != 0 )
      McTemplateK0dq_EtwWriteTransfer(v4, &FenceInterruptListFull, v5, *(unsigned __int16 *)(a1 + 4), 11);
    WdLogSingleEntry1(1LL, *(unsigned __int16 *)(a1 + 4));
    v9 = *(unsigned __int16 *)(a1 + 4);
    WdLogGlobalForLineNumber = 360;
    return (PSLIST_ENTRY)DxgkLogInternalTriageEvent(
                           v7,
                           0x40000,
                           v8,
                           (unsigned int)L"The list of monitored fence signaled interrupts is full on node %d. There must "
                                          "be severe contention on the scheduler spin lock. This interrupt will be ignore"
                                          "d, and a preceding interrupt will poll the wait conditions for this interrupt.",
                           v9,
                           0LL,
                           0LL,
                           0LL);
  }
}
