/*
 * XREFs of MiGetPageFileHigh @ 0x140433240
 * Callers:
 *     MiFreeReservationRun @ 0x140AC1DFC (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPageFileHigh(__int64 a1)
{
  if ( qword_140E2D740 && (a1 & 0x10) == 0 )
    HIDWORD(a1) &= HIDWORD(qword_140E2D748);
  return HIDWORD(a1);
}
