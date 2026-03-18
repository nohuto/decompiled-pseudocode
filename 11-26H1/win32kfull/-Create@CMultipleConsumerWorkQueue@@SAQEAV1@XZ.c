/*
 * XREFs of ?Create@CMultipleConsumerWorkQueue@@SAQEAV1@XZ @ 0x1401C16E8
 * Callers:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1401C1630 (-UmfdCallSessionInitialize@@YAJXZ.c)
 * Callees:
 *     ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x1401C17A0 (-Create@CManualResetEvent@@SAQEAV1@XZ.c)
 *     ?Create@CEventPool@@SAQEAV1@XZ @ 0x1401C1834 (-Create@CEventPool@@SAQEAV1@XZ.c)
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1401C18E8 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1401C192C (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 */

struct CMultipleConsumerWorkQueue *CMultipleConsumerWorkQueue::Create(void)
{
  _QWORD *v0; // rbx
  union _SLIST_HEADER *v1; // rax
  union _SLIST_HEADER *v2; // rsi
  struct CManualResetEvent *v3; // rax
  struct CEventPool *v4; // rax

  v0 = EngAllocMem(1u, 0x10u, 0x676D6466u);
  if ( !v0 )
    return 0LL;
  v1 = (union _SLIST_HEADER *)EngAllocMem(1u, 0x20u, 0x676D6466u);
  v2 = v1;
  if ( v1 )
  {
    InitializeSListHead(v1 + 1);
    LOBYTE(v2->Alignment) = 0;
    v3 = CManualResetEvent::Create();
    v2->Region = (ULONGLONG)v3;
    if ( v3 )
    {
      *v0 = v2;
      v4 = CEventPool::Create();
      v0[1] = v4;
      if ( v4 )
        return (struct CMultipleConsumerWorkQueue *)v0;
      goto LABEL_8;
    }
    CWorkItemQueue::Destroy(v2);
  }
  *v0 = 0LL;
LABEL_8:
  CMultipleConsumerWorkQueue::Destroy(v0);
  return 0LL;
}
