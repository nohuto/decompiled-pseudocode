/*
 * XREFs of ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x14038CBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SmmAllocateLogicalAddress@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_KPEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14009C988 (-SmmAllocateLogicalAddress@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_KPEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 */

__int64 __fastcall SysMmAllocateLogicalMemory(
        struct SYSMM_ADAPTER *a1,
        unsigned __int64 a2,
        const void *a3,
        struct SYSMM_LOGICAL_BLOCK **a4)
{
  struct SYSMM_LOGICAL_ALLOCATOR *v4; // rcx

  if ( (*((_DWORD *)a1 + 23) & 6) == 0 )
  {
    v4 = (struct SYSMM_LOGICAL_ALLOCATOR *)*((_QWORD *)a1 + 44);
    if ( v4 )
      return SmmAllocateLogicalAddress(v4, a2, a3, a4);
  }
  *a4 = 0LL;
  return 0LL;
}
