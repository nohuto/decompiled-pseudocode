/*
 * XREFs of _fclrf @ 0x180132530
 * Callers:
 *     _clrfp @ 0x180131430 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
