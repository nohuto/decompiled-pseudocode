/*
 * XREFs of MiCreateSlabAllocationsFromKernelHal @ 0x140CFE440
 * Callers:
 *     MiInitSystem @ 0x140CF15C4 (MiInitSystem.c)
 * Callees:
 *     MiActOnLargeKernelHalPages @ 0x140863FAC (MiActOnLargeKernelHalPages.c)
 */

__int64 MiCreateSlabAllocationsFromKernelHal()
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    result = MiActOnLargeKernelHalPages(*((_QWORD *)stru_140E2D150.SchedulerApc.Reserved[i] + 6));
    if ( (int)result < 0 )
      return result;
  }
  if ( (MiFlags & 0x10000) != 0 )
    _InterlockedOr(&dword_140E37CC4, 8u);
  return 0LL;
}
