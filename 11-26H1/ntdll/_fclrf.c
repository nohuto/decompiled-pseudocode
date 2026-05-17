/*
 * XREFs of _fclrf @ 0x1801327C0
 * Callers:
 *     _clrfp @ 0x1801316C0 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
