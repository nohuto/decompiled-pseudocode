/*
 * XREFs of HalpFlushAndWait @ 0x140722F50
 * Callers:
 *     HaliCompleteAcpiAPSleep @ 0x1404B9050 (HaliCompleteAcpiAPSleep.c)
 * Callees:
 *     KeSweepLocalCaches @ 0x1404B7D00 (KeSweepLocalCaches.c)
 */

unsigned __int64 __fastcall HalpFlushAndWait(volatile signed __int32 *a1)
{
  unsigned __int64 result; // rax

  KeSweepLocalCaches();
  _InterlockedIncrement(a1);
  do
    _mm_pause();
  while ( *a1 );
  result = __readcr2();
  __writecr2(result);
  return result;
}
