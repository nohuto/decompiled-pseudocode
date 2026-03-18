/*
 * XREFs of RtlpHpFreeVA @ 0x1403501D8
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x14034E480 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrReserve @ 0x14034FA14 (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x140351D9C (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapAllocate @ 0x140638054 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapDestroy @ 0x1406386F4 (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x14063A8D0 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpVaMgrCtxFree @ 0x14034FEFC (RtlpHpVaMgrCtxFree.c)
 *     MmFreePoolMemory @ 0x14035029C (MmFreePoolMemory.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x140638E44 (RtlpHpVaMgrCtxDecommit.c)
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
      RtlpHpVaMgrCtxFree((__int64)&ExpUuidLock.FirstArgument, a1, a2);
  }
  else
  {
    if ( (unsigned __int8)(BYTE1(*a4) - 2) > 2u )
      return MmFreePoolMemory(a1, a2, a3);
    RtlpHpVaMgrCtxDecommit(&ExpUuidLock.FirstArgument, *a1, *a2);
  }
  return 0LL;
}
