/*
 * XREFs of VidSchiGetSchedulerStatus @ 0x140054CD0
 * Callers:
 *     VidSchiRequestSchedulerStatus @ 0x1400C1914 (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1400C1D50 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSchedulerStatus(__int64 a1)
{
  return *(unsigned int *)(a1 + 376);
}
