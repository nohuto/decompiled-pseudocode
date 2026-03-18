/*
 * XREFs of ReleaseAllResidencyLocksForAllocation @ 0x1400B26E8
 * Callers:
 *     UpdateAllocationProperty @ 0x1400B2A2C (UpdateAllocationProperty.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall ReleaseAllResidencyLocksForAllocation(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx
  __int64 v6; // rcx

  v2 = (_QWORD *)(a2 + 112);
  for ( i = *(_QWORD **)(a2 + 112); i != v2; i = (_QWORD *)*i )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(i - 5) + 32LL) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 240LL));
    *(_QWORD *)(v6 + 152) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 144, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(a2 + 136));
}
