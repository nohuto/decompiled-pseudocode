/*
 * XREFs of ?Create@CWorkItemQueue@@SAPEAV1@XZ @ 0x14010B1CC
 * Callers:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x14010B0E4 (-UmfdCallSessionInitialize@@YAJXZ.c)
 * Callees:
 *     ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x14010B230 (-Create@CManualResetEvent@@SAQEAV1@XZ.c)
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x14010B310 (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 */

union _SLIST_HEADER *CWorkItemQueue::Create(void)
{
  union _SLIST_HEADER *v0; // rax
  union _SLIST_HEADER *v1; // rbx
  struct CManualResetEvent *v2; // rax

  v0 = (union _SLIST_HEADER *)EngAllocMem(0, 0x20u, 0x676D6466u);
  v1 = v0;
  if ( v0 )
  {
    InitializeSListHead(v0 + 1);
    LOBYTE(v1->Alignment) = 0;
    v2 = CManualResetEvent::Create();
    v1->Region = (ULONGLONG)v2;
    if ( v2 )
      return v1;
    CWorkItemQueue::Destroy(v1);
  }
  return 0LL;
}
