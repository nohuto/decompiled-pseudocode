/*
 * XREFs of _fclrf @ 0x14001C620
 * Callers:
 *     _clrfp @ 0x14001C4D0 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
