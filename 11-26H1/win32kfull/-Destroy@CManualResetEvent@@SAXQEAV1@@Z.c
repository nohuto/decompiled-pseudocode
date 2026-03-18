/*
 * XREFs of ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x1401C199C
 * Callers:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1400FD478 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1401C192C (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 *     ??1?$CAutoDestroy@VCManualResetEvent@@@@QEAA@XZ @ 0x140296EC8 (--1-$CAutoDestroy@VCManualResetEvent@@@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CManualResetEvent::Destroy(void **pv)
{
  void *v2; // rcx

  v2 = *pv;
  if ( v2 )
    EngFreeMem(v2);
  EngFreeMem(pv);
}
