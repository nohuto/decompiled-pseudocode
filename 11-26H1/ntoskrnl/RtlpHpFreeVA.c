/*
 * XREFs of RtlpHpFreeVA @ 0x140352258
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x140350500 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrReserve @ 0x140351A94 (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x140353E20 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapAllocate @ 0x14063B058 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapDestroy @ 0x14063B6F8 (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x14063D8E0 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpVaMgrCtxFree @ 0x140351F7C (RtlpHpVaMgrCtxFree.c)
 *     MmFreePoolMemory @ 0x14035231C (MmFreePoolMemory.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x14063BE54 (RtlpHpVaMgrCtxDecommit.c)
 */

__int64 __fastcall RtlpHpFreeVA(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3, _OWORD *a4)
{
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9

  if ( (_DWORD)a3 == 0x8000 )
  {
    v5 = (*a1 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v6 = *a1 + *a2 - v5;
    *a1 = v5;
    *a2 = v6;
    if ( v6 )
      RtlpHpVaMgrCtxFree((__int64)&ExpUuidLock.TrapFrame, a1, a2);
  }
  else
  {
    if ( (unsigned __int8)(BYTE1(*a4) - 2) > 2u )
      return MmFreePoolMemory(a1, a2, a3);
    RtlpHpVaMgrCtxDecommit(&ExpUuidLock.TrapFrame, *a1, *a2);
  }
  return 0LL;
}
