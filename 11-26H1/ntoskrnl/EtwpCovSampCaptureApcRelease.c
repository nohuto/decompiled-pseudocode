/*
 * XREFs of EtwpCovSampCaptureApcRelease @ 0x140261848
 * Callers:
 *     EtwpCovSampCaptureApc @ 0x140261700 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x1406C8598 (EtwpCovSampCaptureCancelApcs.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406C8740 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampCaptureApcRundown @ 0x140830740 (EtwpCovSampCaptureApcRundown.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall EtwpCovSampCaptureApcRelease(PSLIST_ENTRY ListEntry)
{
  unsigned __int64 v1; // rbp
  _SLIST_ENTRY *Next; // rdi
  _SLIST_ENTRY *v4; // rsi
  __int64 result; // rax

  v1 = ExpSysDbgLock.TracingPrivate[0];
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
  return KiInsertQueueDpc(v1 + 1192, 0);
}
