/*
 * XREFs of ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14002FF04
 * Callers:
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z @ 0x1400E3B90 (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140030174 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 */

DXGPROCESSVIDMMLOCK *__fastcall DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK(
        DXGPROCESSVIDMMLOCK *this,
        struct _KTHREAD **a2)
{
  DXGPUSHLOCK *v3; // rbx

  *(_QWORD *)this = a2;
  if ( a2 )
  {
    v3 = (DXGPUSHLOCK *)(a2 + 23);
    if ( a2[24] == KeGetCurrentThread() )
    {
      *(_QWORD *)this = 0LL;
    }
    else
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v3, 0LL) )
      {
        DXGPUSHLOCK::LogEvent(v3);
        ExAcquirePushLockExclusiveEx(v3, 0LL);
      }
      *((_QWORD *)v3 + 1) = KeGetCurrentThread();
    }
  }
  return this;
}
