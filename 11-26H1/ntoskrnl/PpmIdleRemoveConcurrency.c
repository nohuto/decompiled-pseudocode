/*
 * XREFs of PpmIdleRemoveConcurrency @ 0x1404A2C80
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     PpmIdleUpdateConcurrency @ 0x1404A2D90 (PpmIdleUpdateConcurrency.c)
 */

__int64 __fastcall PpmIdleRemoveConcurrency(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  KSPIN_LOCK *v4; // rcx

  v1 = *(KSPIN_LOCK **)(a1 + 35336);
  if ( v1 )
  {
    KeQueryPerformanceCounter(0LL);
    PpmIdleUpdateConcurrency(v1);
    v4 = *(KSPIN_LOCK **)(a1 + 35344);
    *(_QWORD *)(a1 + 35336) = 0LL;
    if ( v4 )
    {
      PpmIdleUpdateConcurrency(v4);
      *(_QWORD *)(a1 + 35344) = 0LL;
    }
  }
  return 0LL;
}
