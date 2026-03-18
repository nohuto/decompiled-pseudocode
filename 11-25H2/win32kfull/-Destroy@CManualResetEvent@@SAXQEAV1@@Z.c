/*
 * XREFs of ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x14010B3C4
 * Callers:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x14010A1D4 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x14010B310 (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 *     ??1?$CAutoDestroy@VCManualResetEvent@@@@QEAA@XZ @ 0x14026F388 (--1-$CAutoDestroy@VCManualResetEvent@@@@QEAA@XZ.c)
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
