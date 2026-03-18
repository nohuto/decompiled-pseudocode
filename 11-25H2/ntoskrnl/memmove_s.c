/*
 * XREFs of memmove_s @ 0x140501990
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140494A10 (xHalTimerWatchdogStop.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

errno_t __cdecl memmove_s(void *a1, rsize_t DstSize, const void *Src, rsize_t MaxCount)
{
  errno_t v5; // ebx

  if ( !MaxCount )
    return 0;
  if ( a1 && Src )
  {
    if ( DstSize >= MaxCount )
    {
      memmove(a1, Src, MaxCount);
      return 0;
    }
    v5 = 34;
  }
  else
  {
    v5 = 22;
  }
  xHalTimerWatchdogStop();
  return v5;
}
