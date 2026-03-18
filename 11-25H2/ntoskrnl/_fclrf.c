/*
 * XREFs of _fclrf @ 0x140500680
 * Callers:
 *     _clrfp @ 0x140500530 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
