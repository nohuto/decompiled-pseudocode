/*
 * XREFs of MiGetPageFileHigh @ 0x140428310
 * Callers:
 *     MiFreeReservationRun @ 0x140AC3E9C (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPageFileHigh(__int64 a1)
{
  if ( qword_140E2D8C0 && (a1 & 0x10) == 0 )
    HIDWORD(a1) &= HIDWORD(qword_140E2D8C8);
  return HIDWORD(a1);
}
