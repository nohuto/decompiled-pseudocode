/*
 * XREFs of PfSnQueueEnablePrefetcherTimer @ 0x1407C9F1C
 * Callers:
 *     PfSnBeginBootPhase @ 0x140BFEFAC (PfSnBeginBootPhase.c)
 * Callees:
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140C13090 (PfSnAllocateEnablePrefetcherTimer.c)
 */

__int64 __fastcall PfSnQueueEnablePrefetcherTimer(__int64 *a1)
{
  __int64 EnablePrefetcherTimer; // rax
  unsigned int v3; // ebx

  EnablePrefetcherTimer = PfSnAllocateEnablePrefetcherTimer(1LL);
  v3 = 0;
  if ( EnablePrefetcherTimer )
    KiSetTimerEx(EnablePrefetcherTimer, *a1, 0, 0, EnablePrefetcherTimer + 64);
  else
    return (unsigned int)-1073741670;
  return v3;
}
