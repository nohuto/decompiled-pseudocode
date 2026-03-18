/*
 * XREFs of EtwpCancelPendingApcs @ 0x1404676B0
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140A6CBB4 (EtwpFreeLoggerContext.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeRemoveQueueApc @ 0x140467790 (KeRemoveQueueApc.c)
 *     EtwpFinalizePendingApc @ 0x140467800 (EtwpFinalizePendingApc.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x140730D10 (RtlpInterlockedFlushSList.c)
 */

PSLIST_ENTRY __fastcall EtwpCancelPendingApcs(union _SLIST_HEADER *a1)
{
  void *v2; // rbp
  PSLIST_ENTRY result; // rax
  struct _SLIST_ENTRY *i; // rbx
  struct _SLIST_ENTRY *v5; // r13
  KIRQL v6; // r12
  void *v7; // rcx

  v2 = 0LL;
  result = RtlpInterlockedFlushSList(a1 + 1);
  for ( i = result; i; result = RtlpInterlockedPushEntrySList(a1 + 1, v5) )
  {
    v5 = i;
    v6 = KeAcquireSpinLockRaiseToDpc(&a1->Region);
    if ( BYTE2(i[-1].Next) )
    {
      v7 = (void *)*((_QWORD *)&i[-6].Next + 1);
      if ( v7 )
      {
        v2 = (void *)*((_QWORD *)&i[-6].Next + 1);
        ObfReferenceObjectWithTag(v7, 0x746C6644u);
      }
    }
    KeReleaseSpinLock(&a1->Region, v6);
    if ( v2 )
    {
      if ( (unsigned __int8)KeRemoveQueueApc(&i[-6]) )
        EtwpFinalizePendingApc(a1, &i[-6]);
      ObfDereferenceObjectWithTag(v2, 0x746C6644u);
      v2 = 0LL;
    }
    i = i->Next;
  }
  return result;
}
