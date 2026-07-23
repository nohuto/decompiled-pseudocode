/*
 * XREFs of MiCreateSlabAllocationsFromKernelHal @ 0x140D047E0
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     MiActOnLargeKernelHalPages @ 0x14086A38C (MiActOnLargeKernelHalPages.c)
 */

__int64 MiCreateSlabAllocationsFromKernelHal()
{
  __int64 i; // rbx
  __int64 result; // rax

  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    result = MiActOnLargeKernelHalPages(*((void **)stru_140E2D2D0.SchedulerApc.Reserved[i] + 6));
    if ( (int)result < 0 )
      return result;
  }
  if ( (MiFlags & 0x10000) != 0 )
    _InterlockedOr(&dword_140E37E44, 8u);
  return 0LL;
}
