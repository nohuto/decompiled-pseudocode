/*
 * XREFs of _fclrf @ 0x14053D510
 * Callers:
 *     _clrfp @ 0x14053D3C0 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
