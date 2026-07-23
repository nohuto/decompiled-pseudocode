/*
 * XREFs of HalpFlushAndWait @ 0x140727B20
 * Callers:
 *     HaliCompleteAcpiAPSleep @ 0x1404B2880 (HaliCompleteAcpiAPSleep.c)
 * Callees:
 *     KeSweepLocalCaches @ 0x1404B1530 (KeSweepLocalCaches.c)
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
