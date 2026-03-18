/*
 * XREFs of _fclrf @ 0x14053B090
 * Callers:
 *     _clrfp @ 0x14053AF40 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
