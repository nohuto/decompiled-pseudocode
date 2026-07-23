/*
 * XREFs of EtwpCovSampCaptureApcRelease @ 0x140260DB8
 * Callers:
 *     EtwpCovSampCaptureApc @ 0x140260C70 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x1406CC578 (EtwpCovSampCaptureCancelApcs.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406CC720 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampCaptureApcRundown @ 0x140836980 (EtwpCovSampCaptureApcRundown.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall EtwpCovSampCaptureApcRelease(PSLIST_ENTRY ListEntry)
{
  struct _LIST_ENTRY *Blink; // rbp
  _SLIST_ENTRY *Next; // rdi
  _SLIST_ENTRY *v4; // rsi
  __int64 result; // rax

  Blink = ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
  memset_0(&ListEntry[3].Next + 1, 0, 0x58uLL);
  Next = ListEntry[3].Next;
  LODWORD(ListEntry[9].Next) = 0;
  v4 = Next[2].Next;
  if ( *((_DWORD *)&Next[2].Next + 2) )
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)Next, ListEntry);
    result = *((unsigned int *)&Next[2].Next + 2);
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)Next[2].Next, ListEntry);
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&v4[4].Next + 3);
    if ( (unsigned int)result < *((_DWORD *)&v4[4].Next + 2) )
      return result;
  }
  return KiInsertQueueDpc((ULONG_PTR)&Blink[74].Blink, 0);
}
